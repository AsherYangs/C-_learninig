#include <iostream>
#include <cctype>
using namespace std;

int main() {

	char c = 0;  //將大寫轉小寫
	while(cin>>c){
		if(65<=c && c<=90){
		cout<<static_cast<char>(c+32);
		}else{
			cout<<c;
		}
		cout<<endl;
		cout<<static_cast<char>(tolower(c)); //將大寫轉小寫in <cctype> tolower's output is number so have to cast to char
	}
	return 0;
}
