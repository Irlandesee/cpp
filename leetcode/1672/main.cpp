#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;


/**
*	simply checks if the string is equal to a 
* 	blank string
**/
bool isBlank(const string& str){
	if(str.empty())
		return true;
	return false;
}

vector<int> splitString(const string& str){
	stringstream ss(str);
	string token;
	vector<int> nums;
	char delim = ',';

	while(getline(ss, token, delim)){
		int x = stoi(token);
		nums.push_back(x);
	}
	return nums;
}

void printVector(vector<int>& v){
	cout << "\n";
	for(int i = 0; i < v.size(); i++)
		cout << v[i] << ",";
}

void printMatrix(vector<vector<int> >& m){
	cout << "\n";

	for(int i = 0; i < m.size(); i++){
		for(int j = 0; j < m[i].size(); j++)
			cout << m[i][j] << " ";
		cout << endl;
	}
	cout << "\nFinished printing...";
}

void buildMatrix(vector<vector<int> >& m, vector<int>& nums){
	cout << "adding vector {";
	for(int i = 0; i < nums.size(); i++)
		cout << nums[i] << ",";
	cout << " } to matrix: ";

	for(int i = 0; i < m.size(); i++){
		for(int j = 0; j < m[i].size(); j++)
			cout << m[i][j] << ","; 
	}

	cout << "\n";
	m.push_back(nums);
	cout << "Matrix after addition: " << "\n";

	for(int i = 0; i < m.size(); i++){
		for(int j = 0; j < m[i].size(); j++)
			cout << m[i][j] << ","; 
		cout << endl;
	}

}

void clearMatrix(vector<vector<int> >& m){
	for(auto& v : m)
		v.clear();
	cout << "\nFinished cleaning";
}

int maximumWealth(vector<vector<int> >& accounts){
	int sum = 0;
	int maximumWealth = 0;
	for(int i = 0; i < accounts.size(); i++){
		for(int j = 0; j < accounts[i].size(); j++){
			sum += accounts[i][j];
			if(sum >= maximumWealth)
				maximumWealth = sum;
		}
		sum = 0;
	}

	return maximumWealth;
}

int main(int argc, char** argv){

	if(argc < 2){
		cout << "Inserisci file input testcase!";
		return -1;
	}
	else{
		string filename = argv[1];
		cout << "Reading from :" << filename << "\n";

		string line;
		ifstream f (filename);
		int matrixIndex = 0;

		vector<string> lines;
		vector<int> nums;
		vector<vector<int> > m;

		if(f.is_open()){
			while(getline(f, line)){
				if(isBlank(line)){
					cout << "Matrix index: " << matrixIndex << "\n";
					
					for(auto& x : lines){
						nums = splitString(x);
						buildMatrix(m, nums);
					}

					cout << "Calculating maximumWealth for " << matrixIndex << "th matrix";
					cout << "Max Wealth: " << maximumWealth(m);

					matrixIndex += 1;
					cout << "\n";
					nums.clear();
					clearMatrix(m);
					lines.clear();	//clears out the lines vector, otherwise old vecs are still in there
				}else
					lines.push_back(line);
					
			}			

		}

	}

	return 0;
}