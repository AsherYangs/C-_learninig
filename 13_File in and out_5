#include <iostream>
using namespace std;
#include <fstream>
int main() {
	//fstream fs("test.txt");   //建立物件 使用建構式
	//cout<<fs.is_open()<<endl;  //看檔案是否開啟
	//fs.close();

	/*
	fstream * pfs = new fstream("test.txt");
	while(true){
		int i = pfs->get();  //取得檔案字元
		if(i== -1){    //檔案的結尾是EOF 基本上是-1
			break;
		}
		cout<<static_cast<char>(i);
	}
	pfs->close();
	*/

	/*
	fstream * pfs = new fstream("test.txt");
	char c;
	while(!pfs->get(c).eof()){   //eof 判斷是不是檔案的最後
		cout<<c;
	}
	*/
	/*
	fstream * pfs = new fstream("test.txt");
	char * c = new char[100];
	while(!pfs->getline(c, 100).eof()){    //getline讀取一列
		cout<<c<<endl;
	}
	*/
	fstream * pfs = new fstream("test.txt");
	char * c = new char[100];
	while(!pfs->eof()){
		*pfs>>c;  //讀到空格就結束
		cout<<c<<endl;
	}


	return 0;
}

-------------------------in test.txt-------------------------

Hello Word!
01 Yang 18
02 Ben 19
03 Sam 17
