#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <bitset>

#define bits 12


std::vector<std::bitset<bits>> readFile(std::string fileName) {
	std::ifstream file(fileName);
	std::vector<std::bitset<bits>> lines;
	std::string line;
	while (file >> line) {
		lines.push_back(std::bitset<bits>(line));
	}
	return lines;
}

std::vector<int32_t> part1(std::vector<std::bitset<bits>> lines) {
    std::bitset<bits> epsilon , gamma;
    for (int i = bits -1 ; i >= 0; i--) {
	    int counts[2] = {0,0};
	    for (auto line : lines) {
		counts[line[i]]++;
	    }
	    gamma[i] = counts[0] > counts[1]? 0 : 1;
    }
    epsilon =  std::bitset<bits>(gamma).flip();
    std::vector<int32_t> result;
    result.push_back(gamma.to_ulong());
    result.push_back(epsilon.to_ulong());
    return result;

}

int main(int argc, char *argv[]) {
    std::vector<std::bitset<bits>> lines = readFile(argv[1]);
    std::vector<int32_t> result = part1(lines);
    std::cout << "------------------" << std::endl;
    std::cout << "Part 1: " << std::endl;
    std::cout << "------------------" << std::endl;
    std::cout << "epsilon: " << result[1] << std::endl;
    std::cout << "gamma: " << result[0] << std::endl;
    std::cout << "power consumption: " << result[0] * result[1] << std::endl;
    return 0;
}	

					
