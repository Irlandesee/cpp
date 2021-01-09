#include <stdio>
#include <vector>
#include <algorithm>
#include <fstream>
#include <iterator>
#include <sstream>

using namespace std;

vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        
}

vector<int> spitString(const string& str){
	stringstream ss(str);
	string token;
	vector<int> nums;
	char delim = ',';

	while(getline(ss, token, delim)){
		int num = stoi(token);
		nums.push.back(num);
	}

	return nums;
}


int main(){

	string filename = "input.txt";
	string strvuota = " ";
	string line;
	ifstream f (filename);

	vector<vector<int>> matrix;
	vector<int> numsLetti;
	int vectorLength;

	if(f.is_open()){
		while(getline(f, line)){
			if(line.compare(strvuota) != 0){
				numsLetti = splitString(line);
				vectorLength = numsLetti.size();



			}
		}
	}

	return 0;
}