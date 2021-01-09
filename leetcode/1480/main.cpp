#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <vector>

using namespace std;

vector<int> splitString(const string& str){
	stringstream ss(str);
	string token;
	vector<int> nums;
	char delim = ',';

	while(getline(ss, token, delim)){
		int num = stoi(token);
		nums.push_back(num);
	}
	return nums;
}

vector<int> runningSum(vector<int>& nums) {
		
	for(int i = 1; i < nums.size(); i++){
		nums[i] += nums[i-1];

	}

	return nums;
}


int main(){
	string filename = "testcase.txt";
	string line;
	ifstream f (filename);

	vector<int> nums;
	vector<int> rSum;

	if(f.is_open()){
		while(getline(f, line)){
			nums = splitString(line);
			cout << "\nvector " << "-> ";
			for(int j = 0; j < nums.size(); j++)
				cout << nums[j] << " ";
			rSum = runningSum(nums);
			cout << "\nrSum : ";
			for(int j = 0; j < rSum.size(); j++)
				cout << rSum[j] << " ";
			
		}
	}

}




