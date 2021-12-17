//load a file and convert each line to a number


#include <iostream>
#include <cassert>
#include <vector>

std::vector<int32_t> parseInput();

int32_t countIncreasing(std::vector<int32_t> &lin,uint32_t dist);

int32_t countIncreasingSingle(std::vector<int32_t> &lin);
 
int32_t countIncreasingSliding(std::vector<int32_t> &lin);

int main(){
	std::vector<int32_t> input = parseInput();
	std::cout<<"Part 1 : " << countIncreasingSingle(input) <<"\n Part 2 : "<< countIncreasingSliding(input) <<"\n";
	return 0;
}
std::vector<int32_t> parseInput(){
    std::vector<int32_t> inputs;
    int32_t input;
    while(std::cin >> input){
	inputs.push_back(input);
    }
    return inputs;
}

int32_t countIncreasing(std::vector<int32_t> &lin,uint32_t dist){
	int32_t cnt = 0;
	for(auto i =dist;i<lin.size();++i){
		cnt += lin[i]>lin[i-dist];
	}
	return cnt;
}

int32_t countIncreasingSingle(std::vector<int32_t> &lin){
	return countIncreasing(lin,1);
}

int32_t countIncreasingSliding(std::vector<int32_t> &lin){
	return countIncreasing(lin,3);
}
