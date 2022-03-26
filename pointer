/*
 * 指標.cpp
 *
 *  Created on: 2022年2月24日
 *      Author: Sheep
 */
#include<iostream>
using namespace std;

int main(){
	int a;
	a=8;
	cout<<a<<endl;
	int * p;  //宣告指標
	p=&a;  //& => 把a記憶體位置指派給p
	cout<<p<<endl;

	*p =10; //前面加*代表指標管理記憶體位置中的值
	cout<<*p<<endl;
	cout<<a<<endl;  //因為*p管理的是a記憶體中的值 所以*p改變就等於a改變了

	int * r;
	r=new int; //宣告一個新的存取整數的記憶體位值配給r
	*r = 100; //將100指派給r的位置
	cout<<r<<endl;
	cout<<*r<<endl;

	int * s =r; //將r的記憶體位置指派給s
	*s = 200;
	cout<<*r<<endl;

	delete r; //delete刪除 new所新增的記憶體位置
	cout<<r<<endl;
	cout<<*r<<endl;
	cout<<s<<endl;
	cout<<*s<<endl;  // 指向同一個記憶體位置的指標 若有一個delete其他就都會一起釋放

	int * const m = new int; //固定記憶體位置
	*m = 100;
	*m = 200;
	cout<<*m<<endl;
	delete m;
	//m = new int; //const只表示唯讀的 不能再指派新的位置給他

	const int * n =r; //固定記憶體中所存取的值
	//*n =100; //所以無法更動裡面的值 需要再宣告的時候就配好
	cout<<*n<<endl;
	*s = 150;
	n = s; //但依舊可以指派新的記憶體位置給n
	cout<<*n<<endl;

	return 0;
}



