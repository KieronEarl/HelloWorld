#include <iostream>
#include <string>

using namespace std;

void printOut(string toPrint){
	cout << toPrint << endl;

}

void printOut(string toPrint, string toPrint2){
	cout << toPrint << toPrint2 << endl;
}

string readIn(){
	string result;
	cin >> result;
	return result;
}

int main()
{
	printOut("Enter in a value");
	string value = readIn();
	printOut("You entered: ", value);
	return 0;
}


