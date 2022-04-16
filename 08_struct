#include <iostream>
using namespace std;

struct circle{  //可以宣告複合型別的變數
	int r;
	int h;
	double g;
	double a;
	double v;
}v1,v2, //用結構circle宣告變數 這個變數可以存放結構內的每個型別的值
*pa,*pb=new struct circle, //宣告指標
&re1=v1, *&re2=pb;
int main() {

	v1.r =10;
	cout<<v1.r<<endl;
	v2.r=20;
	cout<<v2.r<<endl;
	struct circle v3; //在main中宣告變數的方法
	v3.r=30;
	cout<<v3.r<<endl;
	cout<<"-----------------以下指標----------------------"<<endl;
	pa = new struct circle; //宣告指標要配一個新的記憶體空間給他
	pa->r=40;
	cout<<pa->r<<endl;
	pb->r=50;
	cout<<pb->r<<endl;
	struct circle * pc = new struct circle;
	pc->r=60;
	cout<<pc->r<<endl;
	cout<<"-----------------以下參考----------------------"<<endl;
	re1.r=70;
	cout<<re1.r<<endl;
	re2->r=80;
	cout<<re2->r<<endl;
	struct circle & re3 =v3;
	re3.r=90;
	cout<<re3.r<<endl;
	struct circle *& re4=pc;
	re4->r=100;
	cout<<re4->r<<endl;

	circle c1;
	c1={2,3,5};
	c1.v = 55;
	cout<<c1.r<<" "<<c1.h<<" "<<c1.g<<" "<<c1.a<<" "<<c1.v<<endl;

	return 0;
}
