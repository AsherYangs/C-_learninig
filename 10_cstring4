#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main() {

	/*
	char a[100] = "1234";
	cout<<atoi(a) * 2<<endl; //atoi將傳入的數字字串轉換成整數型態
	char b[100] = "-12.34";
	cout<<atof(b) /2 <<endl; //atof將傳入的數字字串轉換成double
	char c[100] = {0};
	itoa(123,c,2);  //itoa將你想要轉換成的整數傳入 並且給他一個存放的空間 可以指定轉換成多少進位
	cout<<c<<endl;
	itoa(123,c,10);
	cout<<c[2]<<" "<<c<<endl;
	*/

	/*
	//strcmp 比較兩個字串誰比較前面 一樣回傳0 str1比較前面回傳負數 str1比較後面回傳正數
	//strncmp 比較兩個字串的前n個字元
	char a[100] = "the";
	char b[100] = "they";
	char c[100] = "them";
	cout<<strcmp(a,b)<<endl;
	cout<<strcmp(b,c)<<" "<<strncmp(b,c,2)<<endl;
	*/

	/*
	//strcpy 將source的字串複製到dist中
	char a[100] = "watermelon";
	char b[100] = "orange";
	cout<<a<<endl;  //記憶體中為 w a t e r m e l o n \0
	strcpy(a,b);
	cout<<a<<endl; //記憶體中為 o r a n g e \0 l o n \0
	cout<<a+7<<endl; // 從第7個位置開始列印就會輸出lon

	char c[100] = "this is a book";
	char * ps = strstr(c, "is");
	while(ps != nullptr){
		strcpy(ps, "IS");
		*(ps+2) = ' ';  //若不加這行則書書會因為放了\0只會列印到thIS
		ps = strstr(ps+3,"is");
	}
	cout<<c<<endl;
	*/

	//strcat將傳入第二個參數接在第一個字串的後面(從第一個字串的\0開始取代)
	char a[100] ="watermelon";
	char b[100] = "orange";
	cout<<a<<endl;  //記憶體中 w a t e r m e l o n \0
	strcat(a,b);
	cout<<a<<endl; //記憶體中 w a t e r m e l o n o r a n g e \0
	//strncpy指定放入source的前n個字
	char c[15] ="watermelon";
	char d[100] = "orange";
	strncat(c,d, sizeof(c) - strlen(c) -1); //將c的陣列長度扣掉c的字串長度在扣掉一個\0的長度 就是d最多可以串幾個數字到c後面
	cout<<c<<endl;


	return 0;
}
