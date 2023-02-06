#include <iostream>
using namespace std;
#include "my.h"
int main() {
	/*
	int a=8; //參考意味著代表原本只派給他的參數的別名
	int & x=a; //宣告的時候一定要指派 而且只能指派一次
	x=100;
	cout<<a<<endl;
	a=200;
	cout<<x<<endl;
	int i=123;
	x=i; //會把i的值指派給a 並不會讓x變成i的別名
	cout<<x<<endl;
	cout<<a<<endl;
	a=10;
	cout<<x<<endl;
	cout<<a<<endl;
	cout<<i<<endl;

	int * b=new int;
	*b=8;
	int *& y = b;
	*y=100;
	cout<<*y<<endl;
	*/

	int i=1;
	changeV(i);
	cout<<i<<endl;

	int * p =new int;
	*p=1;
	changeV2(p);
	cout<<*p<<endl;

	int z=5;
	int y = cv4(z);
	cout<<y<<endl;


	return 0;
}

--------------------------  in my.h  --------------------------

#include <iostream>
using namespace std;

void changeV(int & a);
void changeV2(int *& b);
void changeV3(int * c);
int cv4(const int & d);  //標頭檔中區域變數的值不會被更改
void changeV(int & a){
	a+=100;
}

void changeV2(int *& b){
	*b +=100;
}

void changeV3(int * c){
	*c +=100;
}

int cv4(const int & d){
	return d*d;
}
