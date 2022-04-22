#include <iostream>
using namespace std;
#include "circle.h"
int main() {
	/*
	circle * pc1;
	circle * pc2 = new circle;
	pc1 = new circle();

	cout<<pc1<<"、"<<pc2<<endl;
	cout<<"------------------"<<endl;
	delete pc2;  //先釋放掉原本使用的記憶體位置在指派新的
	pc2=pc1;
	cout<<pc1<<"、"<<pc2<<endl;
	cout<<"------------------"<<endl;

	circle c;
	circle * pc3 = &c;
	cout<<&c<<"、"<<pc3<<endl;
	cout<<"------------------"<<endl;
	*/
	/*
	circle * pc1 = new circle();
	pc1->r = 10;
	cout<<pc1->getg()<<endl;
	cout<<pc1->geta()<<endl;

	circle c;
	c.r=20;

	int i = pc1->compare2(&c);
	cout<<i<<endl;

	circle * pc2 = new circle();
	pc2->r = 30;
	int i2 = pc1->compare2(pc2);
	cout<<i2<<endl;
	*/

	circle * pc1 = new circle();
	pc1->r = 10;

	circle c;
	c.r=123;
	pc1->copy2(&c);
	cout<<c.r<<endl;

	circle * pc2 = new circle();
	pc1->copy3(pc2);
	cout<<pc2->r<<endl;

	circle * pc3 = new circle();
	int i = pc1->compare2(pc1->copy3(pc3));
	cout<<i<<endl;

	delete pc1;
	delete pc2;
	delete pc3;

	return 0;
}

------------------------  in my.h  ------------------------


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
		pc->r=100;
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
};
