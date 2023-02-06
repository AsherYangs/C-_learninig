#include <iostream>
using namespace std;
#include "CShape.h"
#include "CCircle.h"
#include "CRectangle.h"

void doubleShape(CShape *);
int main() {
	CCircle c;
	c.setRadius(10);
	doubleShape(&c);
	cout<<c.getArea()<<endl;

	CRectangle r; //不同物件轉換不同動態指標會失敗 其值為0
	r.setValues(10,5);
	doubleShape(&r);
	cout<<r.getArea()<<endl;
	return 0;
}

void doubleShape(CShape * pcs){
	CCircle * pcc = dynamic_cast<CCircle *>(pcs); //將父類別pcs的指標轉型成子類別CCircle的指標
	if(pcc!=0){
		pcc->setRadius(pcc->getRadius() * 2);
		return;
	}

	CRectangle * pcr = dynamic_cast<CRectangle *>(pcs);
	if(pcr!=0){
		pcr->setValues(pcr->getLength()*2 , pcr->getWidth()*2);
		return;
	}
}

------------------------------in CShape.h------------------------------

class CShape {
public:
	CShape();
	virtual ~CShape();

	double getArea() const {
		return area;
	}

	double getGirth() const {
		return girth;
	}

	virtual void showInfo();

protected:

	void setArea(double area) {
		this->area = area;
	}
	void setGirth(double girth) {
		this->girth = girth;
	}


private:
	double girth;
	double area;
};

------------------------------in CShape.cpp------------------------------

#include <iostream>
using namespace std;
#include "CShape.h"

CShape::CShape() {
	// TODO Auto-generated constructor stub
	girth = 0;
	area = 0;

}

CShape::~CShape() {
	// TODO Auto-generated destructor stub
}
void CShape::showInfo(){
	cout<<"CShape's area : "<<getArea()<<endl;
	cout<<"CShape's girth : "<<getGirth()<<endl;
}

------------------------------in CRectangle.h------------------------------

#include "CShape.h"

class CRectangle: public CShape {
public:
	CRectangle();
	virtual ~CRectangle();

	int getLength() const {
		return length;
	}

	void setValues(int length,int width) {
		this->length = length;
		this->width = width;
		setArea(length*width);
		setGirth((length+width)*2);
	}

	int getWidth() const {
		return width;
	}

	virtual void showInfo();

private:
	int length;
	int width;
};

------------------------------in CRectangle.cpp------------------------------

#include <iostream>
using namespace std;
#include "CRectangle.h"

CRectangle::CRectangle() {
	// TODO Auto-generated constructor stub
	length=0;
	width=0;
}

CRectangle::~CRectangle() {
	// TODO Auto-generated destructor stub
}

void CRectangle::showInfo() {
	cout<<"CRectangle's area : "<<getArea()<<endl;
	cout<<"CRectangle's girth : "<<getGirth()<<endl;
}

------------------------------in CCircle.h------------------------------
#include "CShape.h"

class CCircle: public CShape {
public:
	CCircle();
	virtual ~CCircle();

	int getRadius() const {
		return radius;
	}

	void setRadius(int radius) {
		this->radius = radius;
		setArea(radius*radius*3.14);
		setGirth(radius*2*3.14);
	}

	virtual void showInfo();

private:
	int radius;
};

------------------------------in CCircle.cpp------------------------------

#include <iostream>
using namespace std;
#include "CCircle.h"

CCircle::CCircle() {
	// TODO Auto-generated constructor stub
	radius = 0;
}

CCircle::~CCircle() {
	// TODO Auto-generated destructor stub
}

void CCircle::showInfo() {
	cout<<"CCircle's area : "<<getArea()<<endl;
	cout<<"CCircle's girth : "<<getGirth()<<endl;
}
