#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

	//update file
	/*
	ifstream inFile("test.txt");
	ofstream outFile("test1.txt");
	string name;
	int score;

	if(inFile && outFile){
		while(inFile>>name>>score){
			if(name == "Alex")
				name = "Alexandor";
			outFile<<name<<" "<<score<<endl;
		}
	}
	inFile.close();
	outFile.close();
	*/

	//  >> v.s getline()
	/*
	ifstream testFile("test.txt");
	string name;
	int score = 0;
	int sumScore = 0;
	if(testFile){
		while(!testFile.eof()){
			getline(testFile, name, ':');  //用getline把字串讀取，該函式讀到分隔符號後讀取頭會只想分隔符號的下一個位置
			testFile >>score;  //再用>>把分數讀進來做運算 >>停在第一個不是他讀入的型態
			sumScore += score;
		}
		cout<<sumScore<<endl;
	}
	testFile.close();
	*/

	ifstream testFile("test1.txt");
	string name;
	int score = 0;
	int sumScore = 0;
	if(testFile){
		while(!testFile.eof()){
			getline(testFile, name);
			testFile >>score;
			testFile.ignore();
			sumScore += score;
		}
		cout<<sumScore<<endl;
	}
	testFile.close();

	return 0;
}

--------------------------in test.txt-------------------------
Tony yang: 100
Alex  mars: 98
Robin: 95
Jhon: 90
Mary: 100
Bob huang: 80

--------------------------in test1.txt-------------------------
Tony 
100
Alexandor 
98
Robin 
95
Jhon 
90
Mary 
100
Bob 
80
