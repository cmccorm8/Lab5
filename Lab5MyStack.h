// Lab5MyStack.h
//Chance McCormick
//COSC 2030
//10/21/2018

#ifndef LAB5MYSTACK_H
#define LAB5MYSTACK_H


#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include<list>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::stack;
using std::vector;
using std::list;





string stringReversal1(string input);
string stringReversal2(string input);
string stringReversal3(string input);
string stringReversal4(string input);


#define size 100
class MyStack
{
private:
	
	
	//vector<char> mystack;
	list<char> mystack;
public:
	//int top = -1;
	 //int maxSize = size;
	

	bool isEmpty() const;
	void push(char& c);
	char pull();
	
};





#endif
