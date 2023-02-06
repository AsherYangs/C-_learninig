#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	ifstream inFile("test.txt");
	if(inFile){
		string name;
		int score = 0;
		int sumScore = 0;
		int scoreCount = 0;

		while(inFile>>name>>score){   //以空白 換行 或 tap為分割  or while(!inFile.eof())
			sumScore += score;
			scoreCount++;
		}
		if(scoreCount != 0)
			cout<<static_cast<double>(sumScore) / scoreCount;
		else
			cout<<"no grade";
	}
	inFile.close();
	return 0;
}

