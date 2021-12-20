#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <bitset>

#define bits 12

using namespace std;

vector<bitset<bits>> readFile(string fileName) {
    ifstream file(fileName);
    vector<bitset<bits>> lines;
    string line;
    while (file >> line) {
	lines.push_back(bitset<bits>(line));
    }
    return lines;
}

vector<int32_t> part1(vector<bitset<bits>> lines) {
    bitset<bits> epsilon , gamma;
    for (int i = bits -1 ; i >= 0; i--) {
	    int counts[2] = {0,0};
	    for (auto line : lines) {
		counts[line[i]]++;
	    }
	    gamma[i] = counts[0] > counts[1]? 0 : 1;
    }
    epsilon =  bitset<bits>(gamma).flip();
    vector<int32_t> result;
    result.push_back(gamma.to_ulong());
    result.push_back(epsilon.to_ulong());
    return result;

}

int main(int argc, char *argv[]) {
    vector<bitset<bits>> lines = readFile(argv[1]);
    vector<int32_t> result = part1(lines);
    cout << "------------------" << endl;
    cout << "Part 1: " << endl;
    cout << "------------------" << endl;
    cout << "epsilon: " << result[1] << endl;
    cout << "gamma: " << result[0] << endl;
    cout << "power consumption: " << result[0] * result[1] << endl;
    return 0;
}	

					
