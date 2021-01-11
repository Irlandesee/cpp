#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

void maximumWealth(vector<vector<int> >& accounts){

}

int main(int argc, char** argv){

	if(argc < 2){
		cout << "Inserisci file input testcase!";
		return -1;
	}
	else{
		string filename = argv[1];
		cout << filename;

	}

	return 0;
}