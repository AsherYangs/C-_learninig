#include <iostream>
using namespace std;
#include "my.h"
#include "my1.h"
int main() {
	MyVector v;  //使用default costructor
	v.init(5);
	MyVector v1(1);
	MyVector v2(3,8);

	B b;   //A B b a
	return 0;
}

-----------------in my.h-----------------

#include <iostream>
using namespace std;

class MyVector{
	int n;
	int * m;
public:
	void init();
	void init(int dim);
	void init(int dim, int value);
	void print();

	MyVector();  //用class名稱當作函式名稱 就是在定義constructors
	//MyVector(int dim); //通常會做overloading
	MyVector(int dim, int value = 0);

	~MyVector();  // destructors
};
void MyVector::init(){
	n = 0;
	m = nullptr;
}
void MyVector::init(int dim){
	init(dim,0);
}
void MyVector::init(int dim, int value){
	n = dim;
	m = new int[n];
	for(int i = 0 ; i<n ; i++){
		m[i] = value ;
	}
}
void MyVector::print(){
	cout<<"(";
	for(int i = 0 ; i<n-1 ; i++){
		cout<<m[i]<<", ";
	}
	cout<<m[n-1]<<")"<<endl;
}

MyVector::MyVector(){
	n = 0;
	m = nullptr;
}
MyVector::MyVector(int dim, int value){
	n = dim;
	m = new int[n];
	for(int i = 0 ; i<n ; i++){
		m[i] = value ;
	}
}

MyVector::~MyVector(){  //物件結束前需要釋放m
	delete [] m;
}


-----------------in my1.h-----------------

#include <iostream>
using namespace std;

class A{
public:
	A() { cout<<"A"<<endl; }
	~A() { cout<<"a"<<endl; }
};
class B{
	A a;
public:
	B() { cout<<"B"<<endl; }
	~B() { cout<<"b"<<endl; }
};
