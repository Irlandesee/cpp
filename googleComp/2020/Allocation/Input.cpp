#include "Input.h"

namespace Input{

TestCase::TestCase(int numberOfTestCases, int numberOfHouses, int budget, vector<int> costsOfHouses)
	:numTCases{numberOfTestCases}, numHouses{numberOfHouses}, b{budget}, costsOfHouses{costsOfHouses}
	{
		if(!is_testCase(numberTCases, numHouses, b, costsOfHouses)) throw Invalid{};
	}

void TestCase::set_numberOfTestCases(int n){
	numberTCases = n;
}

void TestCase::set_numberOfHouses(int n){
	numHouses = n;
}

void TestCase::set_budget(int x){
	b = x;
}

void TestCase::set_costs(vector<int> costs){
	costsOfHouses = costs;
}

//helper functios

bool is_testCase(int numberTCases, int numHouses, int b, vector<int> costsOfHouses){
	if()

	return false;
}

bool operator==(const TestCase& a, const TestCase& b){

}

bool operator!=(const TestCase& a, const TestCase& b){

}

ostream& operator<<(ostream& os, const TestCase& t){

}

istream& operator>>(ostream& is, const TestCase& tt){
	
}

}