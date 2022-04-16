#include <iostream>
#include "my.h"
using namespace std;

int main() {
	int a[] = {5,6,3,9,11,2,8,4};
	insertionSort(a,8,0);
	return 0;
}

-----------------in header-----------------

#include <iostream>
using namespace std;

void insertionSort(int a[], int len, int indexCutoff);


void insertionSort(int a[], int len, int indexCutoff){
	bool isLittle = true;
	for(int i=0;i<=indexCutoff;i++){
		if(a[indexCutoff+1]>a[i]){
			isLittle = false;
			break;
		}
	}
	if(isLittle){    //如果是最小的將它放在第一個
		int temp = a[indexCutoff+1];
		for(int i=0;i<=indexCutoff;i++){
			a[indexCutoff-i+1] =a[indexCutoff-i];
		}
		a[0] = temp;
	}else{  //如果在中間找出在哪裡插進去 剩下的往後移動
		int b=0;
		bool change = false;
		for(int i=0;i<=indexCutoff;i++){
			if(a[indexCutoff+1]<a[i]){
				b=i;
				change = true;
				break;        //若找到位置就跳出去
			}
		}
		if(change){       //將每個都往後移動
			int temp = a[indexCutoff+1];
			for(int i=0;i<=indexCutoff-b;i++){
				a[indexCutoff-i+1] =a[indexCutoff-i];
			}
			a[b] = temp;
		}

	}

	if(indexCutoff+1 < len){
		insertionSort(a,len,indexCutoff+1);
	}else{
		for(int i=0;i<len;i++){
			cout<<a[i]<<"\t";
		}
	}
}

------------------ another way  ------------------

void IS_KLC(int a[], const int n){
	if(n>1){
		IS_KLC(a+1,n-1);
		int num1 = a[0];
		int i=1;
		for(; i<n; i++){
			if(a[i]<num1){
				a[i-1] = a[i];
			}
			else{
				break;
			}
		}
		a[i-1] = num1;
	}
}
