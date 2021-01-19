#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

vector<string> splitLine(vector<string>& lines){
	string token;
	vector<string> v;

	char delim = ' ';
	for(auto& x : lines){
		stringstream ss(x);
		while(getline(ss, token, delim)){
			v.push_back(token);
		}
	}

	return v;
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

void printVector(const vector<int>& v){
	cout << "\n";
	for(int i = 0; i < v.size(); i++)
		cout << v[i] << ",";
}

/**
vector<int> shuffle(vector<int>& nums, int n){

}**/


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
		vector<int> n;

		if(f.is_open()){
			while(getline(f, line)){
				lines.push_back(line);
			}
			lines = splitLine(lines);
			int index = 0;
			//nums si trova in posizioni pari e n in pos dispari
			for(int i = 0; i < lines.size(); i++){
				if(index <= lines.size()-1){
					nums = splitString(lines[index]);
					int 
				}
				index += 1;
			}

			cout << "\nlines size: " << lines.size();

		}

	}

}