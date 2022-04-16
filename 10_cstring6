#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int cnt = 100;
	int word_len = 50;
	int sen_len = 1000;

	char url[sen_len];
	char delim[] = ".//";
	char word[cnt][word_len] = {0};
	int wordCnt = 0;
	cin>>url;

	char * start = strtok(url, delim);  //會將字串根據後面傳的參數做切割，找到要切割的位置會再放入 \0
	while(start != nullptr){
		strcpy(word[wordCnt], start);
		wordCnt++;
		start = strtok(nullptr, delim); //nullptr代表從上次\0的下一個記憶體位至開始繼續搜尋
	}

	for(int i=0; i<wordCnt; i++){
		cout<<word[i]<<endl;;
	}
	return 0;
}
