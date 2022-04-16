for(int a=2;a<=100;a++){
		bool answer=true;
		for(int b=2;b<=sqrt(a);b+=(b==2?1:2)){
			if(a%b==0){
				answer=false;
				break;
			}
		}
		if(answer){
			cout<<a<<"\t";
		}
	}


=======================      another way      =======================

#include <iostream>
#include "my.h"
using namespace std;

int main() {
	int n = 0;
	cin>>n;
	bool isPrime[10000] = {0};
	for(int i=0 ; i<n ; i++){
		isPrime[i] = true;
	}
	for(int i=2;i<=n;i++){
		if(isPrime[i] == true){
			cout<< i << "  ";
			ruleOutPrime(i , isPrime , n);
		}
	}
	return 0;
}

----------------------in header file---------------------

#include <iostream>
using namespace std;

void ruleOutPrime(int x, bool isPrime[] , int n);

void ruleOutPrime(int x, bool isPrime[] , int n){
	for(int i=1; x*i<n ; i++){
		isPrime[x*i] = false;
	}
}
