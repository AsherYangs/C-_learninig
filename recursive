#include <iostream>
#include "my.h"
using namespace std;

int main() {

	int n=5;
	cout<<factorial(n)<<endl;
	
	double x[7] = {8,6,22,44,7,5,30};
	cout<<max(x,7)<<endl;
	
	int i=9;
	cout<<fibonacci(i)<<endl;

	int disc = 10;
	char a ='A', b='B', c='C';
	hanoi(a,b,c,disc);

	return 0;
}

---------------------in header---------------------

#include <iostream>
using namespace std;

double max(double a[] , int len);
int factorial(int n);
int fibonacci(int i);
void hanoi(char start, char via, char end, int disc);

double max(double a[] , int len){
	if(len==1){
		return a[0];
	}
	double submax = max(a,len-1);
	if(a[len-1] > submax){
		return a[len-1];
	}
	return submax;
}

int factorial(int n){
	if(n==1){
		return 1;
	}else{
		return factorial(n-1)*n;
	}
}

int fibonacci(int i){
	if(i==1 || i==2){
		return 1;
	}
	else{
		return fibonacci(i-1) + fibonacci(i-2);
	}
}

void hanoi(char start, char via, char end, int disc){
	if(disc==1){
		cout<<"from "<<start<<" move to "<<end<<endl;  //如果剩下一個碟子 直接從起點搬到終點
	}
	else{
		hanoi(start,end,via,disc-1);  //若不是 先將起點n-1個碟子搬到中繼站
		cout<<"from "<<start<<" move to "<<end<<endl; // 最後那個剩下的直接從起點搬到終點
		hanoi(via,start,end,disc-1); //再將剩下的碟子從中繼站搬到終點
	}
}
