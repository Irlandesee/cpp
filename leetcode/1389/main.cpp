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


string removeBrackets(const string& str){
	if(!str.empty())
		return str.substr(1, str.size()-1);
	return "";
}

vector<string> splitLine(const string& str){
	stringstream ss(str);
	string token;
	vector<string> ris;
	char delim = ' ';
	
	while(getline(ss, token, delim)){
		ris.push_back(token);
	}

	return ris;
}

/*
vector<int> createTargetArray(vector<int>& nums, vector<int>& index){

}*/


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

		if(f.is_open()){
			while(getline(f, line)){
				lines = splitLine(line);

				for(auto& var : lines){
					string s = removeBrackets(var);
					cout << s << "\n";
				}

			}
				
		}

	}


	return 0;
}