// ConsoleApplication11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;




class MyFirstClass 
{
public:
	MyFirstClass();
	int getItems(int x, int y);
	void printItems();
	~MyFirstClass();
     
private:

	int myNumberOne;
	int myNumberTwo;
	

};

MyFirstClass::MyFirstClass()
{
	
	

}

int MyFirstClass::getItems(int x, int y)
{
	
	myNumberOne = x;
	myNumberTwo = y;
	return x , y; 
}

void MyFirstClass::printItems()
{

	cout << "My Two Numbers Are " << myNumberOne << " And " << myNumberTwo << endl;
	   
	

}

MyFirstClass::~MyFirstClass()
{

}


class MySubClassOne 
{

public:

	MySubClassOne();
	int getInfomation(int a, int b);
	void showInformation();
	
	
	
private:
	int subNumOne;
	int subNumTwo;
	int subSum;
	int subMinus;
	int subMulti;
	int subDivide;

};






int main()
{
	
	int numOne;
	int numTwo;
	cout << "Enter A Number: ";
	cin >> numOne;
	cout << "Enter Another Number: ";
	cin >> numTwo;
	cout << endl;
	
	
	
	MyFirstClass myObject;
	myObject.getItems(numOne,numTwo);
	myObject.printItems();

	MyFirstClass *myPointer;
	myPointer = &myObject;
	myPointer->printItems();

	cout << endl;
	MySubClassOne myObj;
	myObj.getInfomation(numOne, numTwo);
	myObj.showInformation();
	
	
	
	

    
}

MySubClassOne::MySubClassOne()
{
}

int MySubClassOne::getInfomation(int a, int b)
{
	subNumOne = a;
	subNumTwo = b;
	subSum = a + b;
	subMinus = a - b;
	subMulti = a * b;
	subDivide = a / b;
	
	return subSum;
}

void MySubClassOne::showInformation()
{


	cout << subNumOne << " + " << subNumTwo << " = " << subSum  << endl;
	cout << subNumOne << " - " << subNumTwo << " = " << subMinus << endl;
	cout << subNumOne << " x " << subNumTwo << " = " << subMulti << endl;
	cout << subNumOne << " / " << subNumTwo << " = " << subDivide << endl;

}
