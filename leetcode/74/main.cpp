#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

int main(int argc, char** argv){
	if(argv < 2)
		cout << "Inserisci input file!";
	else{
		string filename = argv[1];
		cout << "Reading from: " << filename << "\n";

		string line;
		ifstream f(filename);

		vector<string> lines;
		vector<int> nums;

		if(f.is_open()){
			while(getline(f, line)){

			}
		}
		return 0;
	}
}