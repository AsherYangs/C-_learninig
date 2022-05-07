// bag data structure

#include <iostream>
using namespace std;
#include<string>
#include "ArrayBag.h"
#include "BagInterface.h"


int main() {

	ArrayBag ab1;
	cout<<ab1.getCurrentSize()<<endl;
	ab1.add("aa");
	cout<<ab1.getCurrentSize()<<endl;

	BagInterface * BI = new ArrayBag();
	cout<<BI->getCurrentSize()<<endl;
	BI->add("aa");
	BI->add("cc");
	BI->add("ee");
	cout<<BI->getCurrentSize()<<endl;
	return 0;
}

-----------------------------in "BagInterface.h"-----------------------------

#include<string>
using namespace std;

class BagInterface { //定義bag中的所以行為，宣告來給子類別繼承用，所以會是純虛擬函數(虛擬類別)
public:
	BagInterface();
	virtual ~BagInterface();
	virtual int getCurrentSize() const = 0;
	virtual bool isEmpty() const = 0;
	virtual bool add(const string& newEntry) = 0;
	virtual bool remove(const string& anEntry) = 0;
	virtual void clear() = 0;
	virtual int getFrequencyOf(const string& anEntry) = 0;
	virtual bool contains(const string& anEntry) const = 0;
	virtual void print() const = 0;
};

-----------------------------in "ArrayBag.h"-----------------------------

#include<string>
#include <iostream>
using namespace std;
#include "BagInterface.h"

class ArrayBag: public BagInterface { //用array資料型態來執行這個bag中函式(以靜態array)
private:
	static const int DEFAULT_CAPACITY = 6; //定義array中可以放多少資料
	string item[DEFAULT_CAPACITY];
	int itemCount;  //現在有幾個東西
	int maxItem;  //最大有多少

	int getIndexOf(const string& target) const;
public:
	ArrayBag();
	virtual ~ArrayBag();
	int getCurrentSize() const;
	bool isEmpty() const;
	bool add(const string& newEntry);
	bool remove(const string& anEntry);
	void clear();
	int getFrequencyOf(const string& anEntry);
	bool contains(const string& anEntry) const;
	void print() const;
};

-----------------------------in "ArrayDynamicBag.h"-----------------------------

#include "BagInterface.h"
#include<string>
#include <iostream>
using namespace std;

class ArrayDynamicBag: public BagInterface {
private:
	static const int DEFAULT_CAPACITY = 6; //定義array中可以放多少資料
	string * item;
	int itemCount;  //現在有幾個東西
	int maxItem;  //最大有多少
	int getIndexOf(const string& target) const;
public:
	ArrayDynamicBag();
	virtual ~ArrayDynamicBag();
	int getCurrentSize() const;
	bool isEmpty() const;
	bool add(const string& newEntry);
	bool remove(const string& anEntry);
	void clear();
	int getFrequencyOf(const string& anEntry);
	bool contains(const string& anEntry) const;
	void print() const;
};

-----------------------------in "BagInterface.cpp"-----------------------------

#include "BagInterface.h"

BagInterface::BagInterface() {
	// TODO Auto-generated constructor stub

}

BagInterface::~BagInterface() {
	// TODO Auto-generated destructor stub
}

-----------------------------in "ArrayBag.cpp"-----------------------------

#include "ArrayBag.h"

ArrayBag::ArrayBag():itemCount(0), maxItem(ArrayBag::DEFAULT_CAPACITY)
{
	// TODO Auto-generated constructor stub
}

ArrayBag::~ArrayBag() {
	// TODO Auto-generated destructor stub
}

int ArrayBag::getCurrentSize() const{
	return itemCount;
}
bool ArrayBag::isEmpty() const{
	return itemCount==0; //若現在沒東西回傳true
}
void ArrayBag::print() const{
	for(int i =0; i<itemCount ; i++)
		cout<<item[i]<<", ";
	cout<<endl;
}
bool ArrayBag::add(const string& newEntry){ //假設這個array的資料都是一個接一個中間沒有空著
	bool hasRoomToAdd = (itemCount<maxItem); //若還有空間即可繼續存入
	if(hasRoomToAdd){
		item[itemCount] = newEntry;
		itemCount++;
	}
	return hasRoomToAdd;
}
int ArrayBag::getIndexOf(const string& target) const{
	bool found = false;
	int result = -1;
	int searchIndex = 0;
	while(!found && (searchIndex<itemCount)){ //linear search
		if(item[searchIndex] == target){
			found = true;
			result = searchIndex;
		}else{
			searchIndex++;
		}
	}
	return result;
}
bool ArrayBag::remove(const string& anEntry){
	int locatedIndex = getIndexOf(anEntry); //先去getIndexOf搜尋要刪除的東西是第幾個
	bool canRemoveItem = (locatedIndex>-1); //只要locatedIndex大於-1，代表有找到
	if(canRemoveItem){
		itemCount--; //刪除後將陣列中個數減一個
		item[locatedIndex] = item[itemCount]; //把陣列最後一個數字丟到被移除的那個位置
	}
	return canRemoveItem;
}
bool ArrayBag::contains(const string& anEntry) const{
	return getIndexOf(anEntry)>-1;
}
void ArrayBag::clear(){
	itemCount = 0;
}
int ArrayBag::getFrequencyOf(const string& anEntry){
	int frequency = 0;
	int curIndex = 0;
	while(curIndex<itemCount){
		if(item[curIndex] == anEntry)
			frequency++;
		curIndex++;
	}
	return frequency;
}

-----------------------------in "ArrayDynamicBag.cpp"-----------------------------

#include "ArrayDynamicBag.h"

ArrayDynamicBag::ArrayDynamicBag():itemCount(0), maxItem(DEFAULT_CAPACITY)
{
	// TODO Auto-generated constructor stub
	item = new string[DEFAULT_CAPACITY];
}

ArrayDynamicBag::~ArrayDynamicBag() {
	// TODO Auto-generated destructor stub
	delete [] item;
}

int ArrayDynamicBag::getCurrentSize() const{
	return itemCount;
}
bool ArrayDynamicBag::isEmpty() const{
	return itemCount==0; //若現在沒東西回傳true
}
void ArrayDynamicBag::print() const{
	for(int i =0; i<itemCount ; i++)
		cout<<item[i]<<", ";
	cout<<endl;
}
bool ArrayDynamicBag::add(const string& newEntry){ //
	bool hasRoomToAdd = (itemCount<maxItem); //
	if(!hasRoomToAdd){
		string * oldArray = item;
		item = new string[2*maxItem];
		for(int index=0 ; index<maxItem ; index++)
			item[index] = oldArray[index];
		delete [] oldArray;
		maxItem = 2*maxItem;
	}
	item[itemCount] = newEntry;
	itemCount++;
	return true;
}
int ArrayDynamicBag::getIndexOf(const string& target) const{
	bool found = false;
	int result = -1;
	int searchIndex = 0;
	while(!found && (searchIndex<itemCount)){ //linear search
		if(item[searchIndex] == target){
			found = true;
			result = searchIndex;
		}else{
			searchIndex++;
		}
	}
	return result;
}
bool ArrayDynamicBag::remove(const string& anEntry){
	int locatedIndex = getIndexOf(anEntry); //先去getIndexOf搜尋要刪除的東西是第幾個
	bool canRemoveItem = (locatedIndex>-1); //只要locatedIndex大於-1，代表有找到
	if(canRemoveItem){
		itemCount--; //刪除後將陣列中個數減一個
		item[locatedIndex] = item[itemCount]; //把陣列最後一個數字丟到被移除的那個位置
	}
	return canRemoveItem;
}
bool ArrayDynamicBag::contains(const string& anEntry) const{
	return getIndexOf(anEntry)>-1;
}
void ArrayDynamicBag::clear(){
	itemCount = 0;
}
int ArrayDynamicBag::getFrequencyOf(const string& anEntry){
	int frequency = 0;
	int curIndex = 0;
	while(curIndex<itemCount){
		if(item[curIndex] == anEntry)
			frequency++;
		curIndex++;
	}
	return frequency;
}
