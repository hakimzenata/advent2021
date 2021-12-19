// read a file and separate the lines to a vector


#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <iterator>


using namespace std;


vector<string> readFile(string fileName) {
    ifstream file(fileName);
    vector<string> lines;
    string line;
    while (getline(file, line)) {
	lines.push_back(line);
    }
    return lines;
}


int main(int argc, char *argv[]) {
    if (argc != 2) {
	cout << "Usage: " << argv[0] << " <file>" << endl;
	return 1;
    }
    vector<string> lines = readFile(argv[1]);
    int aim = 0, depth = 0, pos = 0,depth1 = 0;
    for (string line : lines) {
	istringstream iss(line);
	string s;
	int i;
	iss >> s >> i;
	if (s == "forward") {
		pos += i;
		depth1 += aim*i;
	}
	if (s == "down") {
		aim += i;
		depth += i;
	}
	if (s == "up"){ 
		aim -= i;
		depth -= i;
	}
    }
    cout << "------------------" << endl;
    cout << "      Part 1" << endl;
    cout << "------------------" << endl;
    cout << "total: " << depth*pos << endl;
    cout << "------------------" << endl;
    cout << "      Part 2" << endl;
    cout << "------------------" << endl;
    cout << "total: " << depth1*pos << endl;
    return 0;
}	

					
