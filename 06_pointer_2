#include <iostream>
using namespace std;
#include "myh.h"

int main(){
	/*
	int a=10;
	show(&a);

	int num = 1;
	value(num);
	cout<<num<<endl;

	point(&num); //將num的記憶體位置傳遞給函數 函數內運算為記憶體位置中的值+100 就等於num的值+100所以不會因為函式結束後就消失
	cout<<num<<endl;
	*/

	int * i = getaddress1();
	cout<<*i<<endl;
	delete i;

	int * j = getaddress2();
	*j=200;
	cout<<*j<<endl;
	delete j;

	/*
	int * k = getaddress3();
	cout<<*k<<endl;
	*/

	int * m =new int;
	*m = 1;
	const int * n=getaddress4(m);
	cout<< *n <<endl;
	//*n=10;  //會失敗因為返回的位置的值是const
	return 0;
}


-----------------------in myh.h-----------------------

#include <iostream>
using namespace std;

void show(int * p);

void value(int value);
void point(int * pvalue);
int * getaddress1(); //宣告int *指標的函式 需要回傳記憶體位置
int * getaddress2();
//int * getaddress3();
const int * getaddress4(const int * p); //const int * p 接收的記憶體位置不會被改變 //const int * 返回的記憶體位置的值不會被改變


void show(int * p){
	cout<<*p<<endl;
}


void value(int value){
	value +=100;
}
void point(int * pvalue){
	*pvalue +=100;
}

int * getaddress1(){
	int * p =new int;
	*p =100;
	return p; //回傳記憶體位置
}
int * getaddress2(){
	return new int;
}
/*
int * getaddress3(){
	int p=8;
	return &p; //若返回某個區域變數記憶體位置 那函式結束後區域變數就釋放，記憶體位置就不見了 就無法存取
}
*/

const int * getaddress4(const int * p){
	int * q =new int;
	*q=*p;
	*q+=100;
	return q;
}
