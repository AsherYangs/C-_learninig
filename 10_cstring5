#include <iostream>
#include <cstring>
#include "my.h"
using namespace std;

int main() {
	char name[4][10] = {"Jhon", "Mikasa", "Eren", "Armin"};
	char * ptr[4] = {name[0], name[1], name[2], name[3]};

	/*
	for(int i =0; i<4 ; i++){
		for(int j=0; j<4 - i -1; j++){
			if(strcmp(name[j], name[j+1] ) > 0){
				swapName(name[j], name[j+1]);
			}
		}
	}
	for(int i=0;i<4;i++){
		cout<<name[i]<<" ";
	}
	*/
	/* use pointer */
	for(int i =0; i<4 ; i++){
		for(int j=0; j<4 - i -1; j++){
			if(strcmp(ptr[j], ptr[j+1] ) > 0){
				swapPtr(ptr[j], ptr[j+1]);
			}
		}
	}
	for(int i=0;i<4;i++){
		cout<<ptr[i]<<" ";
	}
	return 0;
}

-----------------------  in my.h  -----------------------

#include <iostream>
#include <cstring>
using namespace std;

void swapName(char * n1, char * n2);
void swapPtr(char *& n1, char *& n2);

void swapName(char * n1, char * n2){
	char temp[10];
	strcpy(temp,n1);
	strcpy(n1,n2);
	strcpy(n2,temp);
}

void swapPtr(char *& p1, char *& p2){  //若不加& 這裡的指標是區域變數 函式結束後就消失
	char * temp = p1;
	p1 = p2;
	p2 = temp;
}
