#include <iostream>
#include "my.h"
using namespace std;

int main() {
	int nodeCnt = 5;
	bool adjacent[10][10] ={
			{1,1,0,0,1},{1,1,1,0,0},{0,1,1,1,0},{0,0,1,1,1},{1,0,0,1,1}
	};
	int dist[10]={0};
	int source = 0;

	distFromSource(adjacent, dist, nodeCnt, source);

	cout<<"the complete result: "<<endl;
	for(int i=0;i<nodeCnt;i++){
		cout<<dist[i]<<"  " ;
	}
	return 0;
}

----------------------------- in my.h -----------------------------

#include <iostream>
using namespace std;

void distFromSource(const bool adjacent[][10], int dist [], int nodeCnt, int source);

void distFromSource(const bool adjacent[][10], int dist [], int nodeCnt, int source){
	for(int i=0;i<nodeCnt;i++){
		dist[i] = nodeCnt;
	}
	dist[source] = 0;
	int curDist = 1;
	int complete = 1;

	while(complete<nodeCnt){
		for(int i=0;i<nodeCnt;i++){
			if(dist[i]==curDist-1){
				for(int j=0;j<nodeCnt;j++){
					if(adjacent[i][j] == true && dist[j] == nodeCnt){
						dist[j] = curDist;
						complete++;
					}
				}
			}
		}
		curDist++;
	}
}
