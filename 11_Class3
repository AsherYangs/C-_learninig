#include <iostream>
using namespace std;
#include "circle.h"
int main() {
	/*
	circle c1;
	c1.r=10;
	circle & rc1 = c1;
	cout<<rc1.geta()<<endl;
	*/

	/*
	circle c1,c2;
	c1.r = 10;
	c2.r = 10;
	cout<<c1.compare(c2)<<endl;
	cout<<c1.compare2(&c2)<<endl; //指標可以給NULL但執行會錯誤
	cout<<c1.compare3(c2)<<endl; //參考需要給一個已經存在的變數
	*/
	/*
	circle c1,c2,c3;
	c1.r=20;
	c3=c1.copy4(c2); //回傳後的值就已經是參考 不需要再宣告一個參考去接應
	cout<<c1.compare3(c1.copy4(c2))<<endl;
	cout<<c3.r<<endl;
	*/

	/*
	circle *pc1 = new circle();
	pc1->r=10;

	circle *& rpc1 = pc1; //指標參考是要指派一個已存在的指標
	rpc1->r=100;
	cout<<pc1->geta()<<endl;
	*/
	/*
	circle c1;
	c1.r=10;
	circle * pc1 = new circle();
	pc1->r=20;
	cout<<c1.compare4(pc1)<<endl;
	*/
	/*
	circle c1;
	circle * pc1 = new circle();
	c1.r=10;
	cout<<c1.compare4(c1.copy5(pc1))<<endl;
	*/
	return 0;
}

--------------------------  in my.h  --------------------------


#include <iostream>
using namespace std;

class circle{
private: //可寫可不寫，定義在private中的變數不能修改 只能透過public中變數去修改
	double g;
	double a;
	double v;
public:
	int r;
	int h;
	double getg(){
		return r*2*3.14;
	}
	double geta(){
		return r*r*3.14;
	}
	double getv(){
		return geta() * h;
	}
	int compare(circle c){
		int i=0;
		if(r>c.r){
			i=1;
		}else if(r<c.r){
			i=-1;
		}
		c.r=100;
		return i;
	}
	int compare2(circle * pc){
		int i=0;
		if(r>pc->r){
			i=1;
		}else if(r<pc->r){
			i=-1;
		}
		return i;
	}
	int compare3(circle & rc){
		int i=0;
		if(r>rc.r){
			i=1;
		}else if(r<rc.r){
			i=-1;
		}
		return i;
	}
	int compare4(circle *& rpc){
		int i=0;
		if(r>rpc->r){
			i=1;
		}else if(r<rpc->r){
			i=-1;
		}
		return i;
	}
	circle copy(){
		circle c;
		c.r = r;
		return c;
	}
	void copy2(circle * c){
		c->r=r;
	}
	circle * copy3(circle * pc){
		pc->r=r;
		return pc;
	}
	circle & copy4(circle & rc){
		rc.r=r;
		return rc;
	}
	circle *& copy5(circle *& rpc){
		rpc->r=r;
		return rpc;
	}
};
