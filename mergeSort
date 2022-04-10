#include <iostream>
#include "my.h"
using namespace std;

int main() {
	int ori[] = {5,2,9,3,7,5,1,20,36,4,14,10};
	int * ams = mergeSort(ori,12);
	for(int i =0;i<12;i++){
		cout<< ams[i]<< '\t';
	}
	return 0;
}

------------------------which in my.h------------------------

#include <string>
using namespace std;
int * mergeSort(int ori[], int len);

int * mergeSort(int ori[], int len){
    if(len ==1){
        return ori;
    }else if(len ==2){
        if(ori[0] > ori[1]){
            int temp = ori[0];
            ori[0] = ori[1];
            ori[1] = temp;
        }
    }else{
        int median = (1+len)/2;
        int l = median;
        int m =len-median;
        int * fp = mergeSort(ori, l);
        int * sp = mergeSort(ori+l, m);
        int * open = new int[len];


        for(int a=0;a<len;a++){  //4變數
          if( (*fp)<(*sp) ){
              open[a] = (*fp);
              fp += 1;
              l--;
              if(l==0)
                  break;
          }else{
              open[a] = (*sp);
              sp+=1;
              m--;
              if(m==0)
                  break;
          }
        }
        if(l==0){
            for(int q=0; q< m ; q++){
                open[len-m+q] = *(sp+q);  //4變數
            }
        }else if(m==0){
            for(int q=0; q< l ; q++){
                open[len-l+q] = *(fp+q);
            }
        }


        for(int i=0;i<len;i++){
          ori[i] = open[i];
        }
        open = NULL;
        delete [] open;
    }
    return ori;
}
