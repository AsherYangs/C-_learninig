------------------------------in main()------------------------------

#include<iostream>
using namespace std;
#include "myh.h"

int main(){
	showvalue(5);
	showtotal(6);
	showvalue();

	int array[]={1,2,3,4,5};
	carray(array,5);
	for(int i=0;i<5;i++){
		cout<<array[i]<<endl;
	}
	return 0;
}


------------------------------in header (my.h)------------------------------

#include<iostream>
using namespace std;

void showvalue(int a=1); //可以預設值,宣告函式原形需要指派
void showtotal(int a);
void carray(int a[], int length);

void showvalue(int a){  //定義不需要指派
	cout<<a<<endl;
}

void showtotal(int a){
	int b=10;
	cout<<a+b<<endl;
}

void carray(int a[], int length){
	for(int i=0;i<length;i++){
		a[i]+=100;
	}
}
