#include <iostream>
#include "my.h"
using namespace std;

int main() {
	int a[10] = {5,7,9,21,35,39,47,58,63,99};
	binarySearch(a , 0 , 9 , 47 , 10);
	return 0;
}

-----------------in header-----------------

#include <iostream>
using namespace std;

void binarySearch(int a[] , int startPoint , int endPoint , int findNumber , int len);


void binarySearch(int a[] , int startPoint , int endPoint , int findNumber , int len){
	if(len == 1 && findNumber == a[0]){
		cout<<" find "<<findNumber<<" and it is in the position 0"<<endl;
	}else{
		int median = (startPoint+endPoint)/2;
		if(findNumber == a[median]){
			cout<<" find "<<findNumber<<" and it is in the position "<<median<<endl;
		}else if(findNumber < a[median]){
			return binarySearch(a , startPoint , median ,findNumber , median-startPoint+1);
		}else{
			return binarySearch(a , median+1 , endPoint ,findNumber , endPoint-median+1);
		}
	}
}
