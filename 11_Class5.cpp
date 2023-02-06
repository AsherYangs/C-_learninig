#include <iostream>
using namespace std;
#include "my.h"
void f(A a1, A a2, A a3){
	A a4;
}
int main() {
	A a1,a2,a3;
	cout<<endl;
	cout<<"------------"<<endl;
	f(a1,a2,a3);
	return 0;
}

-----------------  in my.h  -----------------

#include <iostream>
using namespace std;
class A{
	int i = 0;
public:
	A() { cout<<"A"; }
	A(const A&a) { cout<<"a"; }  //copy constrctor 每當copy一個物件的時候就會自動呼叫
};
