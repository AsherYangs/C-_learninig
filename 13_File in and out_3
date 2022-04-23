#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	ifstream inFile("test.txt");
	string name;

	if(inFile){
		/*
		while(!inFile.eof()){
			char c = inFile.get();
			cout<<c;
		}
		*/
		/*
		while(!inFile.eof()){
			char name[20];
			inFile.getline(name, 20);
			cout<<name<<endl;
		}
		*/
		while(!inFile.eof()){
			string name;
			getline(inFile, name, ' ');
			cout<<name<<endl;
		}
	}
	inFile.close();
	return 0;
}

---------------------------in test.txt  --------------------------

Tony 100
Alex 98
Robin 95
Jhon 90
Mary 100
Bob 80
