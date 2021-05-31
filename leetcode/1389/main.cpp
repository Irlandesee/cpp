#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

void printVector(const vector<int>& v){
	cout << "\n";
	for(auto& var : v)
		cout << var << " ";
	cout << " ";
}

vector<int> convertString(const string& s){
	vector<int> ris;
	stringstream ss(s);
	string token;
	char delim = ',';

	while(getline(ss, token, delim))
		ris.push_back(stoi(token));

	return ris;
}

string removeBrackets(const string& str){
	if(!str.empty())
		return str.substr(1, str.size()-2);
	return "";
}

vector<string> splitLine(const string& str){
	stringstream ss(str);
	string token;
	vector<string> ris;
	char delim = ' ';
	
	while(getline(ss, token, delim))
		ris.push_back(token);
	
	return ris;
}


vector<int> createTargetArray(vector<int>& nums, vector<int>& index){
	vector<int> ris;
	vector<int>::iterator it;

	for(int i = 0; i < index.size(); i++){
		it = index[i];
		
	}
}


int main(int argc, char** argv){

	if(argc < 2)
		cout << "Inserisci input file!";
	else{
		string filename = argv[1];
		cout << "reading from file: " << filename << "\n";

		string line;
		ifstream f(filename);
		vector<string> lines;
		vector<int> nums;
		vector<int> index;
		vector<int> target;

		if(f.is_open()){
			while(getline(f, line)){
				lines = splitLine(line);
				
				string nums_tmp = removeBrackets(lines[0]);
				string index_tmp = removeBrackets(lines[1]);

				cout << "Converting nums\n";
				nums = convertString(nums_tmp);
				cout << "Converting index\n";
				index = convertString(index_tmp);

				cout << "Printing nums and index\n";
				for(int i = 0; i < nums.size(); i++){
					cout << nums[i] << " " << index[i];
					cout << "\n";
				}
				
			}
				
		}

	}


	return 0;
}
