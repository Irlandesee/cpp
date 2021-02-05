#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;


int findSmallest(vector<int>& v){
	int ris;
	for(int i = 0; i < v.size(); i++){
		ris = v[i];
		for(int j = 0; j < v.size(); j++){
			if(ris > v[j])
				ris = v[j];
		}
	}
	return ris;
}

int findBiggest(vector<int>& v){
	int ris;
	for(int i = 0; i < v.size(); i++){
		ris = v[i];
		for(int j = 0; j < v.size(); j++){
			if(ris < v[j])
				ris = v[j];
		}
	}
	return ris;
}
/**
vector<int> luckyNumbers(vector<vector<int>>& matrix) {

}*/

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
		int num = stoi(token);
		nums.push_back(num);
	}

	return nums;
}

void printVector(vector<int>& v){
	for(int i = 0; i < v.size(); i++)
		cout << v[i] << ",";
}

void printMatrix(vector<vector<int> >& m){
	for(int i = 0; i < m.size(); i++){
		for(int j = 0; j < m[i].size(); j++)
			cout << m[i][j] << " ";
		cout << endl;
	}
}

void buildMatrix(vector<vector<int> >& m, vector<int>& nums){
	cout << "adding vector {";
	printVector(nums);
	cout << " } to matrix: ";

	printMatrix(m);

	m.push_back(nums);
	cout << "Matrix after addition: " << "\n";
	printMatrix(m);
}

void clearMatrix(vector<vector<int> >& m){
	for(auto& v : m){
		v.clear();
		v.resize(0);
	}
	m.resize(0);
	cout << "\nFinished cleaning\n";
}


int main(int argc, char** argv){

	if(argc < 2){
		cout << "Inserisci input file";
		return -1;
	}
	else{
		string filename = argv[1];
		cout << "Reading from: " << filename << "\n";

		int matrixIndex = 0;
		string line;
		ifstream f(filename);

		vector<string> lines;
		vector<int> nums;
		vector<vector<int> > m;

		vector<int> column;

		if(f.is_open()){
			while(getline(f, line)){
				if(isBlank(line)){
					cout << "Matrix index: " << matrixIndex << "\n";

					for(auto& x : lines){
						nums = splitString(x);
						buildMatrix(m, nums);
					}

					int smallest_row, biggest_row;
					int smallest_column, biggest_column;

					for(int i = 0; i < m.size(); i++){
						smallest_row = findSmallest(m[i]);
						biggest_row = findBiggest(m[i]);

						cout << "Smallest in row: " << i << ": " << smallest_row << "\n";
						cout << "Biggest in row: " << i << ": " << biggest_row << "\n";
					
					}

					
					printVector(t);


					matrixIndex += 1;
					cout << "\n";
					nums.clear();
					clearMatrix(m);
					lines.clear();
					column.clear();
				}else
					lines.push_back(line);
			}
		}

	}

	return 0;
}