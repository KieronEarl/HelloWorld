#include <iostream>
#include <string>

using namespace std;

void printOut(string toPrint){
	cout << toPrint << endl;

}

void printOut(string toPrint, string toPrint2){
	cout << toPrint << toPrint2 << endl;
}

void printOut(string toPrint, char toPrint2){
	cout << toPrint << toPrint2 << endl;
}

string readIn(){
	string result;
	cin >> result;
	return result;
}

void facing(){
	string facing;
	printOut("Turn to face which direction?");
	string value = readIn();
	if(value=="N"||value=="E"||value=="S"||value=="W"){
		facing = value;
		printOut("You are now facing: ", facing);
	}
	else{
		printOut("Unknown command");
		printOut("You are still facing", facing);
	}
}

int main()
{
	facing();
}


