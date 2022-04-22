#include <iostream>
using namespace std;
#include "circle.h"

int main() {
	circle c1;  //在物件導向中 物件可以存取資料跟運算資料(存取函式)
	c1.r = 10;
	cout<<c1.getg()<<endl;

	circle c2;
	c2.r = 20;
	cout<<c2.getg()<<endl;
	cout<<c1.getg()<<endl;

	cout<<"-------------------"<<endl;

	c1=c2;  //只有物件內的資料成員的值複製一份 記憶體位置並沒有改變
	cout<<c1.getg()<<endl;

	cout<<"-------------------"<<endl;

	int i = c1.compare(c2);
	if(i==0){
		cout<<"一樣大"<<endl;
	}else if(i>0){
		cout<<"c1 is bigger"<<endl;
	}else{
		cout<<"c2 is bigger"<<endl;
	}

	cout<<"-------------------"<<endl;

	circle c3 = c2.copy();
	cout<<c3.getg()<<endl;


	return 0;
}

------------------in my.h------------------

#include <iostream>
using namespace std;

class circle{
public:
	int r;
	int h;
	double g;
	double a;
	double v;
	double getg(){
		return r*2*3.14159;
	}
	int compare(circle c){
		if(r>c.r){
			return 1;
		}else if(r<c.r){
			return -1;
		}else{
			return 0;
		}
	}
	circle copy(){
		circle c;
		c.r=r;
		return c;
	}
};
