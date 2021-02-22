#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct TreeNode{
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int val){
		this->val = val; 
		left = right = NULL;
	}
};

typedef struct TreeNode NODO;

/*  splitta la stringa passata come parametro e ritorna
 *  vettore contente le due stringhe
 */
vector<string> splitString(const string& str){
	stringstream ss(str);
	string token;
	vector<string> ris;
	char delim = ' ';

	while(getline(ss, token, delim)){
		ris.push_back(token);
	}

	return ris;
}

//splitta la stringa numeri e ritorna un vettore di numeri
vector<int> splitValues(const string& str){
	stringstream ss(str);
	string token;
	vector<int> nums;
	char delim = ',';
	
	while(getline(ss, token, delim)){
		//cout << token << "\n";
		if(token != "null"){
			int num = stoi(token);
			nums.push_back(num);
		}
	}

	return nums;
}



//visita ricorsiva in preorder dell'albero 
void PreOrder(TreeNode* pt){
	cout << pt->val << " ";
	if(pt->left != NULL)
		PreOrder(pt->left);
	if(pt->right != NULL)
		PreOrder(pt->right);
}

/*
TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target){

}*/

/*
* Costruzione di un albero a partire da valori memorizzati da un vettore
*/
TreeNode* CreateTree(vector<int>& nums, int i, int dim){
	TreeNode *pt;
	if(i >= dim)
		return NULL;
	else{
		pt = new TreeNode(nums[i]);
		pt -> val = nums[i];
		pt -> left = CreateTree(nums, 2*i, dim);
		pt -> right = CreateTree(nums, 2*i+1, dim);
		return pt;
	}
};


int main(int argc, char** argv){
	if(argc < 2)
		cout << "Inserisci input file!";
	else{
		string filename = argv[1];
		cout << "Reading from file: " << filename << "\n";

		string line;
		ifstream f(filename);
		vector<string> lines;
		vector<int> nums;
		int target;
		int dim;
		
		if(f.is_open()){
			while(getline(f, line)){
				lines = splitString(line);
				target = stoi(lines.back()); //prendo il target
				cout << "Target: " << target << "\n";
				nums = splitValues(lines.front()); // prendo valori per creare albero
				cout << "Nums: \n";
				for(auto& x : nums)
					cout << x << " ";
				dim = nums.size();
				cout << "\nLength: " << dim << "\n";
				
				struct TreeNode *root = CreateTree(nums, 1, dim); //1 sara' radice albero
				cout << "Printing in preorder\n";
				PreOrder(root);
				cout << "\n";
			}	
		}

		/*
		struct TreeNode *root = new TreeNode(1);
		root->left = new TreeNode(2);
		root->right = new TreeNode(3);
		root->left->left = new TreeNode(4);
		root->left->right = new TreeNode(5);
		*/
	
		



		return 0;
	}
}