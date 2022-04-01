#include <iostream>
#include <string>
using namespace std;

int main() {
/* assume the account and password is abcd and 1234, the user input a account and password use if statement to know is correct or not */
	----------------------------------ver 01----------------------------------
	string account="abcd";
	int password = 1234;
	
	cout<<"input account: ";
	string acc;
	cin>>acc;
	cout<<"input password: ";
	int pas;
	cin>>pas;
	
	bool c=false;  //assume user input wrong answer
	if(acc==account && pas==password){
		c=true;      //so if account and password is correct then c = true
	}
	if(!c){
		cout<<"fail"<<endl;
	}
	if(c){
		cout<<"login!!"<<endl;
	}
	----------------------------------ver 02----------------------------------
	string account="abcd";
	int password = 1234;
	
	cout<<"input account: ";
	string acc;
	cin>>acc;
	cout<<"input password: ";
	int pas;
	cin>>pas;
	
	bool c=true;  //assume user input correct answer
	if(acc!=account || pas!=password){
		c=false;
	}
	if(!c){
		cout<<"fail"<<endl;
	}
	if(c){
		cout<<"login!!"<<endl;
	}
	----------------------------------ver 03----------------------------------
	string account="abcd";
	int password = 1234;
	
	cout<<"input account: ";
	string acc;
	cin>>acc;
	cout<<"input password: ";
	int pas;
	cin>>pas;
	
	int a=0;
	if(acc!=account){
		a=1;
	}
	if(pas!=password){
		a=2;
	}
	
	if(a==0){
		cout<<"login"<<endl;
	}
	if(a==1){
		cout<<"account fail"<<endl;
	}
	if(a==2){
		cout<<"password fail"<<endl;
	}
	----------------------------------ver 04----------------------------------
	string account="abcd";
	int password = 1234;
	
	cout<<"input account: ";
	string acc;
	cin>>acc;
	cout<<"input password: ";
	int pas;
	cin>>pas;
	
	int a=1;
	if(acc==account){
		if(pas==password){
			a=0;
		}
		if(pas!=password){
			a=2;
		}
	}
	
	
	if(a==0){
		cout<<"login"<<endl;
	}
	if(a==1){
		cout<<"account fail"<<endl;
	}
	if(a==2){
		cout<<"password fail"<<endl;
	}
	
	return 0;
}
