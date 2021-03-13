#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;


int main(int argc, char** argv){

	if(argc < 2){
		cout << "Inserisci input file" << endl;
		return -1;
	}
	else{

		string filename = argv[1];
		cout << "Reading from: " << filename << "\n" << endl;

		string line;
		ifstream f(filename);

		vector<string> lines;

		if(f.is_open()){
			while(getline(f, line)){

			}


		}

	}



}