#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <bitset>
#include <array>

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


std::vector<int32_t> part2(std::vector<std::bitset<bits>> doc) {
    std::vector<int32_t> result;
    std::vector<std::bitset<bits>> most_common(doc);
    for (int32_t i = bits-1; most_common.size() > 1 &&  i >= 0; i--) {
	    std::array<std::vector<std::bitset<bits>>, 2> filtred; 
	    for (auto diagnostic : most_common) {
		    filtred[diagnostic[i]].push_back(diagnostic);
	    }
	    most_common = filtred[0].size() > filtred[1].size() ? filtred[0] : filtred[1];
    }
    result.push_back(most_common.at(0).to_ulong());
    std::vector<std::bitset<bits>> least_common(doc);
    for (int32_t i = bits-1; least_common.size() > 1 &&  i >= 0; i--) {
	    std::array<std::vector<std::bitset<bits>>, 2> filtred; 
	    for (auto diagnostic : least_common) {
		    filtred[diagnostic[i]].push_back(diagnostic);
	    }
	    least_common = filtred[0].size() > filtred[1].size() ? filtred[1] : filtred[0];
    }
    result.push_back(least_common.at(0).to_ulong());
    result.push_back(most_common.at(0).to_ulong() * least_common.at(0).to_ulong());
    return result;
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
    std::cout << "------------------" << std::endl;
    std::cout << "Part 2: " << std::endl;
    std::cout << "------------------" << std::endl;
    result = part2(lines);
    std::cout << "Ogen rate: " << result[0] << std::endl;
    std::cout << "CO2 rate: " << result[1] << std::endl;
    std::cout << "Life support: " << result[2] << std::endl;
    return 0;
}	

					
