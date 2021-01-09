#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;


bool smallest(int& a, int& b){
	if(a <= b)
		return true;
	return false;
}

void printVector(vector<int> v){
	for(int i = 0; i < v.size(); i++)
		cout << v[i] << ","; 
}

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies){
	int biggestNumber;
	for(int i = 0; i < candies.size(); i++){
		biggestNumber = candies[i];
		for(int j = 0; j < candies.size(); j++){
			if(smallest(biggestNumber, candies[j]))
				biggestNumber = candies[j];
		}
		cout << "\nCurrent Biggest Number : " << biggestNumber << ", at Iteration : " << i;
	}

	vector<bool> ris;
	for(int i = 0; i < candies.size(); i++){
		int temp = candies[i] + extraCandies;
		if(temp >= biggestNumber)
			ris.push_back(true);
		else
			ris.push_back(false);
	}
	return ris;
}

vector<int> splitLine(const string& line){
	stringstream ss(line);
	string token;
	vector<int> nums;
	char delim =  ',';
	while(getline(ss, token, delim)){
		int x = stoi(token);
		nums.push_back(x);
	}

	return nums;
}

int extractExtraCandies(vector<int>& v){
	int ris = v[v.size()-1];
	v.pop_back();
	return ris;
}

int main(){

	string filename = "input.txt";
	string line;
	ifstream f (filename);

	vector<int> nums;
	int extraCandy;

	int i = 0;

	if(f.is_open()){
		while(getline(f, line)){
			cout << "\nTestCase#" << i << " :";
			i++;

			nums = splitLine(line);
			extraCandy = extractExtraCandies(nums);

			printVector(nums);
			cout << "\n-------------";
			vector<bool> val = kidsWithCandies(nums, extraCandy);
			cout << "\nboolean values: ";
			for(int i = 0; i < val.size(); i++)
				cout << val[i] << ",";

		}
	}
}
