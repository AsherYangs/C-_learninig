// the stack data structure

#include <iostream>
using namespace std;
#include<stdexcept>
#include "ArrayBased.h"
#include "StackInterface.h"
int main() {

	StackInterface<int> * as = new ArrayBased<int>();
	as->push(4);
	as->push(11);
	as->pop();

	try{
		cout<<as->peek()<<endl;
		as->pop();
		cout<<as->peek()<<endl;
	}catch(logic_error e){
		cout<<"empty!!";
	}
	return 0;
}

------------------------- in "StackInterface.h" -------------------------

template<typename ItemType>
class StackInterface {
public:
	StackInterface();
	virtual ~StackInterface();

	virtual bool isEmpty() const = 0;
	//檢查stack是否為空，是回傳true否則回傳false

	virtual bool push(const ItemType& newEntry) = 0;
	//加一個東西到這個stack的最上面

	virtual bool pop() = 0;
	//移除stack最上面(最後放入) 的東西

	virtual ItemType peek() const = 0;
	//回傳stack最上面的東西
};

template<typename ItemType>
StackInterface<ItemType>::StackInterface() {
	// TODO Auto-generated constructor stub

}

template<typename ItemType>
StackInterface<ItemType>::~StackInterface() {
	// TODO Auto-generated destructor stub
}

------------------------- in "ArrayBased.h" -------------------------

#include "StackInterface.h"
#include<iostream>
#include<stdexcept>

const int MAX_STACK = 999;

template<typename ItemType>
class ArrayBased: public StackInterface<ItemType> {
	ItemType items[MAX_STACK];
	int top;
public:
	ArrayBased();
	virtual ~ArrayBased();
	bool isEmpty() const;
	bool push(const ItemType& newEntry);
	bool pop();
	ItemType peek() const;
};

template<typename ItemType>
ArrayBased<ItemType>::ArrayBased():top(-1)
{
}

template<typename ItemType>
ArrayBased<ItemType>::~ArrayBased() {
	// TODO Auto-generated destructor stub
}

template<typename ItemType>
bool ArrayBased<ItemType>::isEmpty() const{
	return top<0;
}

template<typename ItemType>
bool ArrayBased<ItemType>::push(const ItemType& newEntry){
	bool result = false;
	if(this->top < MAX_STACK-1){
		top++;
		this->items[top] = newEntry; //可能需要運算多載
		result = true;
	}
	return result;
}

template<typename ItemType>
bool ArrayBased<ItemType>::pop(){
	bool result = false;
	if(!this->isEmpty()){
		top--;
		result = true;
	}
	return result;
}

template<typename ItemType>
ItemType ArrayBased<ItemType>::peek() const{
	if(!this->isEmpty())
		return items[top];
	else
		throw logic_error("...");
		//return -1;
}

------------------------- in "LinkedStack.h" -------------------------

#include <iostream>
#include "StackInterface.h"
#include "Node.h"
using namespace std;

template<typename ItemType>
class LinkedStack: public StackInterface<ItemType> {
	Node<ItemType> * topPtr;
public:
	LinkedStack();
	LinkedStack(const LinkedStack<ItemType>& aStack);
	virtual ~LinkedStack();

	bool isEmpty() const;
	bool push(const ItemType& newItem);
	bool pop();
	ItemType peek() const;
};

template<typename ItemType>
LinkedStack<ItemType>::LinkedStack():topPtr(nullptr)
{
	// TODO Auto-generated constructor stub
}

template<typename ItemType>
LinkedStack<ItemType>::LinkedStack(const LinkedStack<ItemType>& aStack){
	Node<ItemType> * origChainPtr = aStack.topPtr;
	if(origChainPtr == nullptr)
		this->topPtr = nullptr;
	else{
		topPtr = new Node<ItemType>();
		topPtr->setItem(origChainPtr->getItem());
		Node<ItemType> * newChainPtr = topPtr;

		while(origChainPtr->getNext() != nullptr){
			origChainPtr = origChainPtr->getNext();
			ItemType nextItem = origChainPtr->getItem();
			Node<ItemType> * newNodePtr = new Node<ItemType>(nextItem);
			newChainPtr->setNext(newNodePtr);
			newChainPtr = newChainPtr->getNext();
		}
		newChainPtr->setNext(nullptr);
	}
}

template<typename ItemType>
LinkedStack<ItemType>::~LinkedStack() {
	// TODO Auto-generated destructor stub
	while(!isEmpty())
		pop();
}

template<typename ItemType>
bool LinkedStack<ItemType>::isEmpty() const{
	return topPtr == nullptr;
}

template<typename ItemType>
bool LinkedStack<ItemType>::push(const ItemType& newItem){
	Node<ItemType> * newNodePtr = new Node<ItemType>(newItem, topPtr);
	topPtr = newNodePtr;
	return true;
}

template<typename ItemType>
bool LinkedStack<ItemType>::pop(){
	bool result = false;
	if(!isEmpty()){
		Node<ItemType> * nodeToDeletePtr = topPtr;
		topPtr = topPtr->getNext();
		delete nodeToDeletePtr;
		result = true;
	}
	return result;
}

template<typename ItemType>
ItemType LinkedStack<ItemType>::peek() const{
	if(!this->isEmpty())
		return topPtr->getItem();
	else
		//throw logic_error("...");
		return -1;
}
