#include <iostream>
using namespace std;
#include "my.h"
int main() {
	/*   此種方式建立的陣列記憶體不能釋放因為不是new建立的
	int count;
	cout<<"輸入學生人數: ";
	cin>>count;

	int score[count];
	for(int i=0;i<count;i++){
		cout<<"輸入學生成績";
		cin>>score[i];
	}

	double total;
	for(int i=0;i<count;i++){
		total+=score[i];
	}
	double ave = total/count;

	cout<<"平均分數為: "<<ave<<endl;
	*/

/*
	int classnumber;
	cout<<"輸入班級數量: ";
	cin>>classnumber;

	double * ave = new double[classnumber];

	for(int j=0;j<classnumber;j++){
		int count;
		cout<<"輸入學生人數: ";
		cin>>count;

		int * score = new int [count];
		for(int i=0;i<count;i++){
			cout<<"輸入學生成績";
			cin>>score[i];
		}

		double total =0;
		for(int i=0;i<count;i++){
			total+=score[i];
		}
		ave[j] = total/count;
		delete score;
	}
	for(int j=0;j<classnumber;j++){
		cout<<ave[j]<<endl;
	}
	*/

	int classnumber;  //用函式取代程式碼
	cout<<"輸入班級數量: ";
	cin>>classnumber;

	double * ave = new double[classnumber];

	for(int j=0;j<classnumber;j++){
		int count;
		cout<<"輸入學生人數: ";
		cin>>count;

		int * score = new int [count];
		for(int i=0;i<count;i++){
			cout<<"輸入學生成績";
			cin>>score[i];
		}


		ave[j] = getave(score,count);
		delete score;
	}
	for(int j=0;j<classnumber;j++){
		cout<<ave[j]<<endl;
	}

	return 0;
}

-----------------------  in my.h   -----------------------

#include <iostream>
using namespace std;

double getave(int score[], int length);

double getave(int score[], int length){
	double total =0;
	for(int i=0;i<length;i++){
		total+=score[i];
	}

	return total/length;
}
