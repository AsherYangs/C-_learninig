#include <iostream>
#include <fstream>
using namespace std;

int main() {
	/*
	ofstream myFile;
	//myFile.open("test.txt");
	//myFile<<"1 25 abdg"<<12.55;  //將文字寫入檔案內

	myFile.open("test.txt", ios::app);  //接著寫下去
	myFile<<"1 25 abdg"<<12.55;

	myFile.close();
	*/

	ofstream scoreFile("temp.txt", ios::out);
	char name[120] = {0};
	int score = 0;
	char notFin = 0;
	bool con = true;

	if(!scoreFile)
		exit(1);
	while(con){
		cin>>name>>score;
		scoreFile<<name<<" "<<score<<endl;
		cout<<"continue (Y/N)";
		cin>>notFin;
		con = ((notFin == 'Y') ? true : false);
	}
	scoreFile.close();
	return 0;
}
