// use stack to do calculator

#include <iostream>
using namespace std;
#include "sitf.h"
#include "arrayStack.h"
#include "calculatorWithStack.h"
#include<string>

int main() {
	//calculate with stack only in " +,-,* "
	arrayStack as1;
	arrayStack as2;
	string s1 = "13*4-5*5-27+5*2";

	pushOper(as1, as2, s1);
	cout<<answer(as1,as2);
	return 0;
}
---------------------- in "sitf.h" ----------------------

#include <iostream>
using namespace std;
#include<string>
class sitf {
public:
	sitf();
	virtual ~sitf();

	virtual bool isEmpty() const = 0;
	//檢查stack是否為空，是回傳true否則回傳false

	virtual bool push(const string& newEntry) = 0;
	//加一個東西到這個stack的最上面

	virtual bool pop() = 0;
	//移除stack最上面(最後放入) 的東西

	virtual string peek() const = 0;
	//回傳stack最上面的東西
};

sitf::sitf() {
	// TODO Auto-generated constructor stub

}

sitf::~sitf() {
	// TODO Auto-generated destructor stub
}

---------------------- in "arrayStack.h" ----------------------

#include "sitf.h"
#include<iostream>
#include<stdexcept>

const int MAX_STACK = 999;

class arrayStack: public sitf {
	string items[MAX_STACK];
	int top;
public:
	arrayStack();
	virtual ~arrayStack();
	bool isEmpty() const;
	bool push(const string& newEntry);
	bool pop();
	string peek() const;
};

arrayStack::arrayStack():top(-1)
{
}

arrayStack::~arrayStack() {
	// TODO Auto-generated destructor stub
}

bool arrayStack::isEmpty() const{
	return top<0;
}

bool arrayStack::push(const string& newEntry){
	bool result = false;
	if(this->top < MAX_STACK-1){
		top++;
		this->items[top] = newEntry; //可能需要運算多載
		result = true;
	}
	return result;
}

bool arrayStack::pop(){
	bool result = false;
	if(!this->isEmpty()){
		top--;
		result = true;
	}
	return result;
}

string arrayStack::peek() const{
	if(!this->isEmpty())
		return items[top];
	else
		//throw logic_error("...");
		return "empty";
}

---------------------- in "calculatorWithStack.h" ----------------------

#include <iostream>
using namespace std;
#include<string>
#include "sitf.h"
#include "arrayStack.h"

void pushOper(arrayStack& s1, arrayStack& s2, const string& token);
int answer(arrayStack& s1, arrayStack& s2);

void pushOper(arrayStack& s1, arrayStack& s2, const string& token){
	size_t maxLen = token.size(); //token長度
	//cout<<maxLen<<endl;

	while(maxLen > 0){  //判斷token是否還有東西
		static int i = 0; //token's index
		if(token.compare(i,1,"+") == 0 || token.compare(i,1,"-") == 0 || token.compare(i,1,"*") == 0){//判斷是否為運算式
			static int k = 0;
			int pushPri = 0;

			if(token.compare(i,1,"+") == 0 || token.compare(i,1,"-") == 0) //判斷要放進去的運算式優先順序
				pushPri = 1;
			else
				pushPri = 2;

			int stackPri = 0;
			string operInStack = s2.peek(); //取出目前在s2中的運算式
			if(operInStack == "empty")
				stackPri = -1;
			else if(operInStack == "+" || operInStack == "-") //判斷stack中運算式優先順序
				stackPri = 1;
			else
				stackPri = 2;

			while(pushPri <= stackPri){
				int result = 0;
				string takeOp = s2.peek();
				s2.pop();

				int num1 = stoi(s1.peek());
				s1.pop();
				int num2 = stoi(s1.peek());
				s1.pop();

				if(takeOp == "+")
					result = num2+num1;
				else if(takeOp == "-")
					result = num2-num1;
				else
					result = num2*num1;

				s1.push(to_string(result));

				operInStack = s2.peek();
				if(operInStack == "empty")
					stackPri = -1;
				else if(operInStack == "+" || operInStack == "-") //判斷stack中運算式優先順序
					stackPri = 1;
				else
					stackPri = 2;
			}
			s2.push(token.substr(i, 1));
			k++;
		}
		else{
			size_t put = token.find_first_of("+-*", i);

			if(put!=string::npos){
				s1.push(token.substr(i, put-i));
				i = put-1;
				maxLen = maxLen - (put - i) +1;
			}
			else{
				s1.push(token.substr(i));
				break;
			}
		}
		i++;
		maxLen--;
		//cout<<"i is: "<<i<<endl;
	}
}


int answer(arrayStack& s1, arrayStack& s2){
	int result = 0;
	while(!s2.isEmpty()){
		string op = s2.peek();
		s2.pop();
		int num1 = stoi(s1.peek());
		s1.pop();
		int num2 = stoi(s1.peek());
		s1.pop();
		if(op == "+")
			result = num2+num1;
		else if(op == "-")
			result = num2-num1;
		else
			result = num2*num1;
		s1.push(to_string(result));
	}
	return result;
}
