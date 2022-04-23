#include <iostream>
using namespace std;
#include "my.h"
int main() {
	double d1[5] = {1,2,3,4,5};
	MyVector a1(5,d1);  //call MyVector::MyVector(int dim, double v[])

	double d2[4] = {1,2,3,4};
	MyVector a2(4,d2); // call MyVector::MyVector(int dim, double v[])
	const MyVector a3(a1); //call MyVector::MyVector(const MyVector & v)
	//cout<<(a1.isEqual(a2) ? "Y" : "N")<<endl;  //N
	cout<<(a1==a2 ? "Y" : "N")<<endl;  //N
	//cout<<(a1.isEqual(a3) ? "Y" : "N")<<endl;  //Y
	cout<<(a1==a3 ? "Y" : "N")<<endl;  //Y

	cout<<a1[1]<<endl;    // call double MyVector::operator[] (int i)  non-const function也能呼叫const function只要不去改變其中的值即可
	a1[0] = 6; //a1[0]的值的參考=6    // call double MyVector::operator[] (int i)
	cout<<a1[0]<<endl;    // call double MyVector::operator[] (int i)
	cout<<a3[3]<<endl;   // call double MyVector::operator[] (int i) const  只有const object可以呼叫const function

	const MyVector a4 = a1+a3;
	cout<<a4[0]<<endl;

	//gloabla
	MyVector a5;
	a5 = 3 + a1 + 4 + a3;  //要用全域函式才能隨意地來作加法 因為變數不能存取class中的函式
	a5.print();
	return 0;
}

-----------------------------------  in my.h  -----------------------------------

#include <iostream>
#include <cstdlib>
using namespace std;



class MyVector{
	int n;
	double * m;
public:
	MyVector();
	MyVector(int dim, double v[]);
	MyVector(const MyVector & v);  //copy constrcuctor 傳入參數必須是const className & v
	~MyVector();
	void print() const;

	bool operator== (const MyVector & v)const;  //bool isEqual (const MyVector & v)const;  用"=="來overloading
	bool operator<(const MyVector & v) const; //overloading"<"
	bool operator!=(const MyVector & v) const; //overloading"!="

	double operator[] (int i) const; //overloading"[]"
	double & operator[] (int i) ; //overloading"[]"

	const MyVector& operator=(const MyVector & v);
	const MyVector& operator+=(const MyVector & v);

	const MyVector operator+ (const MyVector & v);  //vector+vector
	const MyVector operator+ (double d);  //vector+number

	friend const MyVector operator+(const MyVector& v, double d);
};

//global one
const MyVector operator+(const MyVector& v, double d);
const MyVector operator+(double d, const MyVector& v);
const MyVector operator+(const MyVector& v1, const MyVector& v2);

MyVector::MyVector() : n(0){
	m = nullptr;
}
MyVector::MyVector(int dim, double v[]) : n(dim){
	m = new double[dim];
	for(int i = 0 ; i<dim ; i++){
		m[i] = v[i] ;
	}
}

MyVector::~MyVector(){  //物件結束前需要釋放m
	delete [] m;
}
MyVector::MyVector(const MyVector & v) : n(v.n){
	m = new double[n];
	for(int i = 0; i< n ; i++){
		m[i] = v.m[i] ;
	}
}
void MyVector::print() const{
	cout<<"(";
	for(int i = 0 ; i<n-1 ; i++){
		cout<<m[i]<<", ";
	}
	cout<<m[n-1]<<")"<<endl;
}
/*bool MyVector::isEqual(const MyVector & v) const{
	if(n!=v.n)
		return false;
	else{
		for(int i =0; i<n ;i++){
			if(m[i] != v.m[i])
				return false;
		}
	}
	return true;
}*/
bool MyVector::operator== (const MyVector & v)const{
	if(n!=v.n)
		return false;
	else{
		for(int i =0; i<n ;i++){
			if(m[i] != v.m[i])
				return false;
		}
	}
	return true;
}
bool MyVector::operator<(const MyVector & v) const{
	if(this->n != v.n)
		return false;
	else{
		for(int i=0 ; i<n ; i++){
			if(this->m[i] >= v.m[i])
				return false;
		}
	}
	return true;
}
bool MyVector::operator!=(const MyVector & v) const{
	if(*this ==v)  //讓自己(*this)的東西用剛剛overload的函式 "==" 與傳進來的物件相比，相等則回傳false反之
		return false;
	else
		return true;

	//or return !(*this==v);
}

double MyVector::operator[] (int i) const{  //寫a[1] = 5; 會編譯錯誤 因為a[1]是一個double的變數
	if( i<0 || i>=n)                                           //用來取index中的數字
		exit(1);
	return m[i];
}
double & MyVector:: operator[] (int i){  //可以使用a[1] = 5;  因為使用參考所以可以改變其值
	if(i<0 || i>=n)                                      //用來改變index中的值
		exit(1);
	return m[i];                                            //回傳m[i]的參考即m[i]的記憶體位置 所以指派其他值給他就等於是改變其值
}
const MyVector & MyVector::operator=(const MyVector & v){
	if(this != &v){
		if(this->n != v.n){
			delete [] this->m;
			this->n = v.n;
			this->m = new double[this->n];
		}
		for(int i =0 ; i<n ; i++){
			this->m[i] = v.m[i];
		}
	}
	return *this;
}

const MyVector& MyVector::operator+=(const MyVector & v){
	if(this->n == v.n){
		for(int i=0 ; i<n ; i++)
			this->m[i] += v.m[i];
	}
	return *this;
}

const MyVector MyVector::operator+ (const MyVector & v){ //若回傳參考const MyVector& 則在函式結束後sum會消失則此參考也就參考不到任何東西
	MyVector sum(*this);  //宣告一個區域變數for物件變數 等於 自己的參數
	sum+=v;  //用剛剛overload的+=
	return sum;
}
const MyVector MyVector::operator+ (double d){
	MyVector sum(*this);
	for(int i=0 ; i<n ; i++){
		sum[i] += d;
	}
	return sum;
}

//  global one
const MyVector operator+(const MyVector& v, double d){
	MyVector sum(v);
	for(int i=0;i<v.n;i++)
		sum[i] += d;
	return sum;
}
const MyVector operator+(double d, const MyVector& v){
	return v+d;
}
const MyVector operator+(const MyVector& v1, const MyVector& v2){
	MyVector sum(v1);
	sum+=v2;
	return sum;
}
