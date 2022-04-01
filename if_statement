#include <iostream>
using namespace std;

main(){
  cout<<"Input a number a: ";
	double a;
	cin>>a;
	cout<<"Input a number b: ";
	double b;
	cin>>b;
	cout<<"Input a number c: ";
	double c;
	cin>>c;
	cout<<"Input a number d: ";
	double d;
	cin>>d;
	
	int e=0;  // assume e=0 means a is bigger, e=1 b is bigger....
	int f=a;  //use f value to represent the max value
	if(f==b &&f==c&&f==d){
		e=4;
	}
	
	if(f<b){
		f=b;
		e=1;
	}
	if(f<c){
		f=c;
		e=2;
	}
	if(f<d){
		f=d;
		e=3;
	}
	
	if(e==0){
		cout<<"a is bigger"<<endl; 
	}
	if(e==1){
		cout<<"b is bigger"<<endl;
	}
	if(e==2){
		cout<<"c is bigger"<<endl; 
	}
	if(e==3){
		cout<<"d is bigger"<<endl; 
	}
	if(e==4){
		cout<<"Same"<<endl; 
	}
	
	return 0;
}
