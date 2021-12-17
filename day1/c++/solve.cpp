#include <iostream>
#include <fstream>
#include <vector>
#include <string>

std::vector<int32_t> readFile(std::string fileName) {
    std::vector<int32_t> lines;
    std::string line;
    std::ifstream myfile(fileName);
    if (myfile.is_open()) {
	while (getline(myfile, line)) {
		lines.push_back(std::stoi(line));
	}
	myfile.close();
    }
    return lines;
}

int32_t part1(std::vector<int32_t> lines) {
	int32_t prev(lines[0]),inc(0),last;
    for(int32_t i = 1; i < lines.size(); i++) {
	    last = lines[i];
	    if (last > prev) inc++;
	    prev = last;
    }
	return inc;
}

int32_t part2(std::vector<int32_t> lines) {
	std::vector<int32_t> res;
	for(int32_t i = 2; i < lines.size(); i++) {
		res.push_back(lines[i-2] + lines[i-1]+lines[i]);
	}
	return part1(res);
}

int main(int argc, char *argv[]) {
    std::vector<int32_t> lines = readFile(argv[1]);
    std::cout << part1(lines) << std::endl;
    std::cout << part2(lines) << std::endl;
    return 0;
}
