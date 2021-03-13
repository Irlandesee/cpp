namespace Input{

class TestCase{
public:
	class Invalid{}; //to throw as exception

	testCase(numberOfTestCases, numberOfHouses, budget, costsOfHouses);
	testCase();

	//non modifying ops
	int get_numberOfTestCases(){return numTCases};
	int get_testCaseNumber(){return tCaseNumber};
	int get_numberOfHouses(){return numHouses};
	int get_budget(){return b};
	vector<int> get_costs(){return costsOfHouses};

	//modifying ops
	void set_numberOfTestCases(int n);
	void set_numberOfHouses(int n);
	void set_budget(int x);
	void set_costs(vector<int> costs);

private:
	int numTCases, tCaseNumber;
	int numHouses, b;
	vector<int> costsOfHouses;

};

bool is_testCase(int numberTCases, int numHouses, int b, vector<int> costsOfHouses);
bool operator== (const TestCase& a, const TestCase& b);
bool operator!= (const TestCase& a, const TestCase& b);

ostream& operator<<(ostream& os, const TestCase& t);
istream& operator>>(istream& is, const TestCase& tt);

}
