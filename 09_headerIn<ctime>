#include <iostream>
#include <ctime>
using namespace std;

int main() {
	/*
	time_t a = time(NULL); //time_t是一個自訂一的型別
	cout<<a<<endl;

	char* b = ctime(&a);  //取得現在時間
	cout<<b<<endl;

	time_t c;
	time(&c);
	char* d = ctime(&c);
	cout<<d<<endl;
	*/
	/*
	time_t * e = new time_t;
	time(e);
	char* f = ctime(e);
	cout<<f<<endl;
	*/
	/*
	struct tm t = {0}; //結構初始化
	t.tm_year=2019-1900;  because it calculate from 1900
	t.tm_mon=12-1;
	t.tm_mday=5;
	cout<<t.tm_year + 1900<<"/"<<t.tm_mon + 1<<"/"<<t.tm_mday<<endl;
	*/

	/*
	time_t t = time(NULL);
	struct tm * pt = localtime(&t);
	cout<<pt->tm_year + 1900<<"/"<<pt->tm_mon + 1<<"/"<<pt->tm_mday<<endl;

	char * result = new char[30];
	strftime(result,30,"Now is :  %Y/%m/%d %H:%M:%S",pt);
	cout<<result<<endl;
	*/

	struct tm startday = {0};
	startday.tm_year=2019-1900;
	startday.tm_mon=11-1;
	startday.tm_mday=4;
	cout<<"start day is: "<<startday.tm_year + 1900<<"/"<<startday.tm_mon + 1<<"/"<<startday.tm_mday<<endl;

	struct tm finishday = {0};
	finishday.tm_year=2022-1900;
	finishday.tm_mon=3-1;
	finishday.tm_mday=3;
	cout<<"finishday day is: "<<finishday.tm_year + 1900<<"/"<<finishday.tm_mon + 1<<"/"<<finishday.tm_mday<<endl;

	time_t endtime = mktime(&startday);
	endtime += 86400*220;
	struct tm * enddate = localtime(&endtime);
	cout<<"end day is: "<<enddate->tm_year + 1900<<"/"<<enddate->tm_mon + 1<<"/"<<enddate->tm_mday<<endl;

	time_t dif1 = mktime(&startday);
	time_t dif2 = mktime(&finishday);
	int totaldays =(dif2-dif1);
	cout<<totaldays/86400<<endl;

	double d = difftime(dif2,dif1);
	double days = d/86400;
	cout<<days<<endl;

	return 0;
}
