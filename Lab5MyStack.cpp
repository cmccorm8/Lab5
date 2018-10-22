//Lab5MyStack.cpp
//Chance McCormick
//COSC2030
//10/21/2018


#include "Lab5MyStack.h"


bool MyStack::isEmpty() const
{
	/*if (top < 0)
	{
		return top;
	}*/

	bool data = mystack.empty();
	return data;
}

void MyStack::push(char & c)
{
	/*if (top == maxSize)
	{
		cout << "Stack is full" << endl;
		
	}
	else 
	{
		//listArray[top++] = c;
		c = top++;
	}*/
	mystack.push_back(c);
	
}

char MyStack::pull()
{
	/*if (top < 0)
	{
		cout << "Stack is empty" << endl;
	}
	else
	{
		top--;
	}
	return top;*/
	char temp = mystack.back();
	mystack.pop_back();
	return temp;



}








