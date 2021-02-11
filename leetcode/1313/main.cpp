#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>

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

void printVector(const vector<int>& v){
	cout << "\n";
	for(auto var : v)
		cout << var << " ";
}


vector<int> decompressList(const vector<int>& nums){
	int freq = 0;
	int val = 0;

	vector<int> l;

	for(int i = 0; i < nums.size(); i+=2){
		if(i <= nums.size()-1){
			freq = nums[i];	
			val = nums[i+1];
			
			for(int j = 0; j < freq; j++)
				l.push_back(val);
		}

	}
	return l;
}


int main(int argc, char** argv){
	if(argc < 2){
		cout << "Inserisci input file";
		return -1;
	}
	else{
		string filename = argv[1];
		cout << "Reading from: " << filename << "\n";

		string line;
		ifstream f(filename);

		vector<string> lines;
		vector<int> nums;

		if(f.is_open()){
			while(getline(f, line)){
				nums = splitString(line);
				cout << "\nBefore decompressing: \n";
				printVector(nums);
				nums = decompressList(nums);
				cout << "\nAfter decompressing: \n";
				printVector(nums);
			}

		}

		
		return 0;
	}

}
