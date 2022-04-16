#include <iostream>
using namespace std;

int main() {
	/*
	int LEN = 10;
	char s[LEN] ={0};
	int n=0;
	do{
		cin>>s[n];
		n++;
	}while(s[n-1] != '#' && n<LEN);
	for(int i=0;i<n-1;i++){
		cout<<s[i];
	}
	*/

	/*
	char a[100] = {0};
	while(cin.getline(a,100)){
		int i = 0;
		int spaceCount = 0;

		while(a[i] != '\0'){
			if(a[i] == ' '){
				spaceCount++;
			}
			i++;
		}
		cout<<spaceCount;
	}
	*/
	char a[100] = {0};
	while(cin.getline(a,100)){
		int i = 0;
		int f = 0;
		int spaceCount = 0;

		while(a[i] != '\0'){
			if(a[i] == ' ' && f==0){
				spaceCount++;
				f=1;
			}
			if(f==1 && a[i] != ' '){
				f=0;
			}
			i++;
		}
		cout<<spaceCount;
	}



	return 0;
}
