#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

vector<int> splitstring(const string& str){
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

void printvector(const vector<int>& v){
	cout << "\n";
	for(auto& var : v)
		cout << var << " ";
}

int removeDuplicates(vector<int>& nums){
	
	int min = nums[0];
	int max = nums[nums.size()-1];
	int numsLenght = nums.size();	

	
	
	for(int i = 0; i < nums.size(); i++){
		int temp = nums[i];
		

		for(int j = 1; j < nums.size(); j++){
			if(temp == nums[j]){
				cout << "\nerasing : " << nums[j];
				nums.erase(nums.begin() + j);
			}
			else if(temp < nums[j])
				break;
		}
	}

	//cout << "Min: " << min << "Max: " << max;

	printvector(nums);
	return nums.size();
}

int main(int argc, const char** argv){
	if(argc < 2){
		cout << "Inserisci input file\n" << endl;
		return -1;
	}
	else{
		string filename = argv[1];
		cout << "Reading from: " << filename << "\n" << endl;

		string line;
		ifstream f(filename);

		vector<int> nums;

		if(f.is_open()){
			while(getline(f, line)){
				nums = splitstring(line);
				cout << "vector nums before removing duplicates: \n" << endl;
				printvector(nums);
				int numsSize = removeDuplicates(nums);
				cout << "Nums size: " << numsSize << "\n" <<endl;

			}
		}

	}
}