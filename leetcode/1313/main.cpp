#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;


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

		

	}

}
