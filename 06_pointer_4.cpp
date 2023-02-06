//============================================================================
// Name        : 指標4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int ** a; //宣告指標的指標 (存放指標的記憶體位置)
	a = new int*; //a裡面放一個int指標的記憶體位置
	*a = new int; //*a 為一個int的記憶體位置
	**a=10; //**a為int的記憶體位置裡面的值
	cout<<a<<endl;
	cout<<*a<<endl;
	cout<<**a<<endl;

	int * b =new int;
	*b = 20;
	a=&b;
	cout<<**a<<endl;

	void * v; //存放任意指標的記憶體位置
	v=b;
	cout<<b<<endl;
	cout<<v<<endl;
	cout<<*b<<endl;
	cout<<*((int*)v)<<endl;

	int * array[10]; //指標陣列
	for(int i=0;i<10;i++){
		array[i] = new int; //宣告指標陣列的話 每個指標需要先初始化
		*array[i] = i+1; //再放入指標記憶體內的值
	}
	for(int i=0;i<10;i++){
		cout<<*array[i]<<endl;
		cout<<array[i]<<endl;
	}

	int ** parray; //存放一個動態指標的陣列
	parray = new int*[10]; //存取一個長度為10的陣列的記憶體位置  整個陣列使用完後記憶體位置可以釋放
	for(int i=0;i<10;i++){
		parray[i] = new int; //初始化長度為10的陣列
		*parray[i] = i+1; //將值放入長度為10的陣列
	}
	for(int i=0;i<10;i++){
		cout<<*parray[i]<<endl;
	}


	return 0;
}
