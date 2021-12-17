#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> readFile(std::string fileName) {
    std::vector<int> lines;
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

int main(int argc, char *argv[]) {
    std::vector<std::string> lines = readFile(argv[1]);
    std::vector<int> numbers;
    for (int i = 0; i < lines.size(); i++) {
	numbers.push_back(lines[i]);
    }
    int sum = 0;
    for (int i = 0; i < numbers.size(); i++) {
	sum += numbers[i];
    }
    std::cout << sum << std::endl;
    return 0;
}
