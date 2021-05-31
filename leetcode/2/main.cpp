#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

/**
* Definition for singly-linked list.
**/

struct ListNode{
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};


/*
* Modificare in maniera tale che costruisca la lista singola 
* dei nodi.
*/
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

void printNode(ListNode node){
	cout << node.val << " -> ";
}

/**
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){

}
**/

int main(int argc, char** argv){
	ListNode primo;

	vector<int> v;
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);

	for(auto const& n : v){

	}
	


}