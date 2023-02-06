#include <iostream>
using namespace std;
#include "my.h"

int main() {

	/*
	struct circle circlea;
	circlea.r = 10;
	setr(&circlea , -1);

	circlea.h = 20;
	circlea.g = cg(circlea);  //在使用者端即可以使用struct的變數名稱當參數
	circlea.a = ca(circlea);
	circlea.v = cv(circlea);
	cout<<circlea.g<<endl;
	cout<<circlea.a<<endl;
	cout<<circlea.v<<endl;
	*/

	/*
	struct circle circlea;
	setall(&circlea,10,20);
	cout<<circlea.g<<endl;
	cout<<circlea.a<<endl;
	cout<<circlea.v<<endl;

	struct circle * pa = new struct circle;
	setall(pa,100,200);
	cout<<pa->g<<endl;
	cout<<pa->a<<endl;
	cout<<pa->v<<endl;

	circle *pb = nullptr;   //若宣告空指標，沒有指向一個地方自然無法到記憶體中去取值
	setall(pb,1,2);  //所以執行此函式不會動
	if(pb != nullptr){
		cout<<pb->g<<endl;
		cout<<pb->a<<endl;
		cout<<pb->v<<endl;
	}
	*/

/*
	struct circle circlea;
	struct circle circleb;
	setall(&circlea,10,20);
	setall(&circleb,10,20);
	cout<<cc(circlea,circleb)<<endl;
	//cout<<cc(&circlea,&circleb)<<endl;

	struct circle * p1 = new struct circle;
	struct circle * p2 = new struct circle;
	setall(p1,10,20);
	setall(p2,10,20);
	cout<<cc(*p1,*p2)<<endl;
*/

	struct circle c1;
	setall(&c1,10,20);

	struct circle c2 = copyc(c1);
	cout<<ca(c1)<<endl;
	cout<<ca(c2)<<endl;

	struct circle * c3 = new struct circle;
	copyc(&c1,c3);
	cout<<cc(c1, *copyc(&c1,c3))<<endl;
	cout<<ca(*c3)<<endl;

	setr(&c1,100);
	copyc(c1,c2);
	cout<<cc(c1,copyc(c1,c2))<<endl;
	cout<<ca(c2)<<endl;
	
	return 0;
}

--------------------------- in my.h ---------------------------

#include <iostream>
using namespace std;

struct circle{
	int r;
	int h;
	double g;
	double a;
	double v;
};

double cg(struct circle c); //用struct變數當參數
double ca(struct circle c);
double cv(struct circle c);

void setr(struct circle * c, int r); //用指標當參數才能改變傳進來的值
void seth(struct circle * c, int h);
void setg(struct circle * c);
void seta(struct circle * c);
void setv(struct circle * c);
void setall(struct circle * c, int r ,int h);

//int cc(struct circle c1,struct circle c2);
//int cc(struct circle * c1,struct circle * c2);
int cc(struct circle & c1,struct circle & c2);

struct circle copyc(struct circle c1);
//void copyc(struct circle * c1,struct circle * c2);
struct circle * copyc(struct circle * c1, struct circle * c2);
struct circle & copyc(struct circle & c1, struct circle & c2);

double cg(struct circle c){
	return c.r*2*3.14159;
}
double ca(struct circle c){
	return c.r*c.r*3.14159;
}
double cv(struct circle c){
	return c.a*c.h;
}

void setr(struct circle * c, int r){
	if(c == nullptr){    //若傳進來為空指標則需要中斷函式
		return;
	}
	if(r>=1 && r<=10000){
		c->r = r;
	}else{
		c->r = 1;
	}
	setg(c);
	seta(c);
}
void seth(struct circle * c, int h){
	if(c == nullptr){
		return;
	}
	if(h>=1 && h<=10000){
		c->h = h;
	}else{
		c->h = 1;
	}
	setv(c);
}
void setg(struct circle * c){
	if(c == nullptr){
		return;
	}
	c->g = c->r*2*3.14159;
}
void seta(struct circle * c){
	if(c == nullptr){
		return;
	}
	c->a = c->r * c->r *3.14159;
}
void setv(struct circle * c){
	if(c == nullptr){
		return;
	}
	c->v = c->a * c->h ;
}
void setall(struct circle * c, int r ,int h){
	if(c == nullptr){
		return;
	}
	setr(c,r);
	seth(c,h);
}
/*
int cc(struct circle c1,struct circle c2){
	if(c1.r >c2.r){
		return 1;
	}else if(c1.r <c2.r){
		return -1;
	}else{
		if(c1.h>c2.h){
			return 1;
		}else if(c1.h<c2.h){
			return -1;
		}else{
			return 0;
		}
	}
}
*/
/*
int cc(struct circle * c1,struct circle * c2){  //若用指標宣告，當傳進來的值是nullptr那麼會不知道要回傳什麼，所以需要傳進來一個已經存在的(參考)
	if(c1->r >c2->r){
		return 1;
	}else if(c1->r <c2->r){
		return -1;
	}else{
		if(c1->h>c2->h){
			return 1;
		}else if(c1->h<c2->h){
			return -1;
		}else{
			return 0;
		}
	}
}
*/
int cc(struct circle & c1,struct circle & c2){
	if(c1.r >c2.r){
		return 1;
	}else if(c1.r <c2.r){
		return -1;
	}else{
		if(c1.h>c2.h){
			return 1;
		}else if(c1.h<c2.h){
			return -1;
		}else{
			return 0;
		}
	}
}

struct circle copyc(struct circle c1){
	struct circle c2;
	setall(&c2,c1.r,c1.h);
	return c2;
}
/*
void copyc(struct circle * c1,struct circle * c2){
	setall(c2,c1->r,c1->h);
}
*/
struct circle * copyc(struct circle * c1, struct circle * c2){
	setall(c2,c1->r,c1->h);
	return c2;
}

struct circle & copyc(struct circle & c1, struct circle & c2){
	setall(&c2,c1.r,c1.h);
	return c2;
}
