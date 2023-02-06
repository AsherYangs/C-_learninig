// Name        : dataStructure_graphSearch_in_DFS_stack.cpp

#include <iostream>
using namespace std;
#include "linkStack.h"
#include "sitf.h"
#include "graphSearch_stack.h"
int main() {
	linkStack ls;
	bool path[10][10] ={
			{0,1,0,1,0,0}, //s
			{1,0,1,0,1,0}, //1
			{0,1,0,0,0,0}, //2
			{1,0,0,0,0,0}, //3
			{0,1,0,0,0,1}, //4
			{0,0,0,0,0,1}  //t
	};

	bool path2[10][10] ={
			{0,1,1,0,0,0,0,0}, //0
			{1,0,0,0,0,0,0,0}, //1
			{1,0,0,1,0,1,0,0}, //2
			{0,0,1,0,1,0,0,0}, //3
			{0,0,0,1,0,0,0,0}, //4
			{0,0,1,0,0,0,1,0}, //5
			{0,0,0,0,0,1,0,1}, //6
			{0,0,0,0,0,0,1,0}  //7
	};


	cout<<findPath(path2,0,7,8,ls)<<endl;
	//need some in no road

	while(!ls.isEmpty()){
		cout<<ls.peek();
		ls.pop();
	}


	return 0;
}

----------------------------------------in findPath----------------------------------------

#include <iostream>
#include "sitf.h"
#include "linkStack.h"
#include<string>
using namespace std;


bool findPath(const bool matrix[][10], int from, int end, int maxsize, linkStack& ls);

bool findPath(const bool matrix[][10], int from, int end, int maxsize, linkStack& ls){
	bool found = false;
	ls.push(to_string(from)); //把起點放進stack中

	int i = 0;  //尋找第i個node有沒有下一條路可以走
	int ori = from; //原本的路
	int step = 0; //若有找到新的路就從[0][0]開始找 若沒有路了就從ori路的下一個位置開始找起

	for(i ; i<maxsize ; i++){
		for(int j = step ; j<maxsize ; j++){
			if(matrix[i][j] == true && j != ori){ //如果有路但是不能是回頭路
				ls.push(to_string(j)); //有路就把這條路放入stack中
				ori = i; //將原本的路設成i
				i = j-1; //並且將接下來要找的node的分支設成i，因為迴圈跑完i會加一 所以這邊減一
				step = 0; //若是找到新的路就要從一勘使開始找
				break;
			}else if(j<maxsize-1){
				continue;
			}else{
				if(ls.peek() == to_string(from)){ //如果找完都沒路 發現stack中還是原本的起點 代表沒路
					i = maxsize;
					break;
				}else{ //若不是起點就退回上一個點繼續找其他分支
					step = stoi(ls.peek()) + 1; //再把step設成原本找到node的下一個
					ls.pop(); //將這個死路pop掉
					i = stoi(ls.peek()) -1; //將i設成上一個node繼續找其他分支
				}
			}
		}
		if(ls.peek() == to_string(end)){ //如果終點被放入stack中最上面，則代表找到路了
			found = true;
			break;
		}
	}


	return found;
}
