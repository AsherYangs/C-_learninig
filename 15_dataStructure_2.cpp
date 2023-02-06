// bag use linked-list to implete

#include <iostream>
using namespace std;
#include<string>
#include<vector>
#include "NTlinkedbag.h"
#include "NTbaginterface.h"

int main() {
	NTbaginterface * bp = new NTlinkedbag();
	bp->add("aa");
	bp->add("ab");
	bp->add("ac");
	bp->add("ad");
	bp->add("ae");
	cout<<bp->contains("aa");
	return 0;
}

---------------------in  "NTlinkedbag.h"---------------------

#include "NTbaginterface.h"
#include <iostream>
#include "NTnode.h"
#include<vector>
#include<string>

class NTlinkedbag: public NTbaginterface {
	NTnode * headPtr;
	int itemCount;

	NTnode * getPointerTo(const string& anEntry) const;
public:
	NTlinkedbag();
	NTlinkedbag(const NTlinkedbag& aBag);
	virtual ~NTlinkedbag();

	int getCurrentSize() const;
	bool isEmpty() const;
	bool add(const string& newEntry);
	bool remove(const string& anEntry);
	void clear();
	int getFrequencyOf(const string& anEntry);
	bool contains(const string& anEntry) const;
	void print() const;

	vector<string> toVector() const;
};

---------------------in  "NTlinkedbag.cpp"---------------------

#include "NTlinkedbag.h"

NTlinkedbag::NTlinkedbag():
headPtr(nullptr), itemCount(0)
{
}

NTlinkedbag::NTlinkedbag(const NTlinkedbag& aBag){
	itemCount = aBag.itemCount;
	NTnode * origChainPtr = aBag.headPtr;
	if(origChainPtr == nullptr)
		headPtr = nullptr;
	else{
		headPtr = new NTnode();
		headPtr->setItem(origChainPtr->getItem());
		NTnode * newChainPtr = headPtr;
		while(origChainPtr != nullptr){
			origChainPtr = origChainPtr->getNext();
			string nextItem = origChainPtr->getItem();
			NTnode * newNodePtr = new NTnode(nextItem);
			newChainPtr->setNext(newNodePtr);
			newChainPtr = newChainPtr->getNext();
		}
		newChainPtr->setNext(nullptr);
	}
}

NTlinkedbag::~NTlinkedbag() {
	clear();
}

bool NTlinkedbag::isEmpty() const{
	return itemCount == 0;
}

int NTlinkedbag::getCurrentSize() const{
	return itemCount;
}

bool NTlinkedbag::add(const string& newEntry){ //將新的node放在第一個，
	NTnode * newNodePtr = new NTnode(); //new出一個新的node
	newNodePtr->setItem(newEntry); //將傳入的東西去setitem
	newNodePtr->setNext(headPtr);//將指標指向原本的第一個node
	headPtr = newNodePtr;
	itemCount++;
	return true;
}

vector<string> NTlinkedbag::toVector() const{//將node中的item放入vector陣列中
	vector<string> bagContents;
	NTnode * curPtr = headPtr;
	while(curPtr != nullptr){
		bagContents.push_back(curPtr->getItem());
		curPtr = curPtr->getNext();
	}
	return bagContents;
}

bool NTlinkedbag::remove(const string& anEntry){
	NTnode * entryNodePtr = getPointerTo(anEntry); //用getPointerTo找到要刪除的item的位置
	bool canRemoveItem = !isEmpty() && (entryNodePtr != nullptr);
	if(canRemoveItem){
		entryNodePtr->setItem(headPtr->getItem());//將目前headPtr的值覆蓋到要刪除的位置上
		NTnode * nodeDeletePtr = headPtr;//建立一個nodeDeletePtr指向headPtr
		headPtr = headPtr->getNext(); //將headPtr指向下一個Node
		delete nodeDeletePtr; //在刪除nodeDeletePtr
		nodeDeletePtr = nullptr;
		itemCount--;
	}
	return canRemoveItem;
}

NTnode * NTlinkedbag::getPointerTo(const string& anEntry) const{
	bool found = false; //預設找不到
	NTnode * curPtr = headPtr; //建立一個curPtr從第一個指標開始找
	while(!found && (curPtr != nullptr)){
		if(anEntry == curPtr->getItem()) //從第一個指標item取出來看是不是要找的東西
			found = true; //如果是 found變成true會跳出迴圈
		else
			curPtr = curPtr->getNext(); //若不是就往下一個指標找 直到碰到空指標為止
	}
	return curPtr;
}

bool NTlinkedbag::contains(const string& anEntry) const{
	return (getPointerTo(anEntry) != nullptr);
}

int NTlinkedbag::getFrequencyOf(const string& anEntry){
	int frequency = 0;
	NTnode * curPtr = headPtr;
	while(curPtr != nullptr){
		if(anEntry == curPtr->getItem())
			frequency++;
		curPtr = curPtr->getNext();
	}
	return frequency;
}

void NTlinkedbag::clear(){
	NTnode * nodeToDeletePtr = headPtr;
	while(headPtr != nullptr){
		headPtr = headPtr->getNext();
		delete nodeToDeletePtr;
		nodeToDeletePtr = headPtr;
	}
	itemCount = 0;
}

void NTlinkedbag::print() const{
	NTnode * printPtr = headPtr;
	while(printPtr != nullptr){
		cout<<printPtr->getItem()<<", ";
		printPtr = printPtr->getNext();
	}
}

---------------------in  "Node.h"---------------------

#include<string>
using namespace std;
class NTnode {
	string item; //node需要有item
	NTnode * next; //以及指向下一個node的指標
public:
	NTnode();
	virtual ~NTnode();
	NTnode(const string& anItem);
	NTnode(const string& anItem, NTnode * nextNodePtr);
	void setItem(const string& anItem);
	void setNext(NTnode * nextNodePtr);
	string getItem() const;
	NTnode * getNext() const;
};

---------------------in  "Node.cpp"---------------------

#include "NTnode.h"

NTnode::NTnode():next(nullptr)
{
}

NTnode::~NTnode() {
	// TODO Auto-generated destructor stub
}

NTnode::NTnode(const string& anItem):item(anItem), next(nullptr)
{
}

NTnode::NTnode(const string& anItem, NTnode * nextNodePtr)
:item(anItem), next(nextNodePtr)
{
}

void NTnode::setItem(const string& anItem){
	item = anItem;
}

void NTnode::setNext(NTnode * nextNodePtr){
	next = nextNodePtr;
}

string NTnode::getItem() const{
	return item;
}

NTnode * NTnode::getNext() const{
	return next;
}
