// Lab5Driver.cpp
//Chance McCormick
//COSC 2030
//10/21/2018
// Recieved help from Carlton Wilcox

#include "Lab5MyStack.h"

int main()
{
	MyStack Stack;
	cout << "================1===============" << endl;
	cout << "'Reverse the input' has been reversed:" << stringReversal1(" Reverse the input ") << endl;
	cout << "================2===============" << endl;
	cout << "'Reverse the input' has been reversed:" << stringReversal2(" Reverse the input ") << endl;
	cout << "================3===============" << endl;
	cout << "'Reverse the input' has been reverse:" << stringReversal3(" Reverse the input ") << endl;
	cout << "================4===============" << endl;
	cout << "'Reverse the input' has been reverse:" << stringReversal4(" Reverse the input ") << endl;
	system("pause");
	return 0;
}

string stringReversal1(string input)
{
	stack<char> Stack1;
	string reverseIT;
	string output;
	for (int i = 0; i < input.length(); i++)
	{
		Stack1.push(input[i]);
	}

	while (!Stack1.empty())
	{
		reverseIT = Stack1.top();
		output.push_back(Stack1.top());
		Stack1.pop();
	}
	return output;
}

string stringReversal2(string input)
{
	vector<char> Stack2;
	string reverseIT;
	string output;
	for (int i = 0; i < input.length(); i++)
	{
		Stack2.push_back(input[i]);
	}

	while (!Stack2.empty())
	{
		reverseIT = Stack2.back();
		output.push_back(Stack2.back());
		Stack2.pop_back();
	}
	return output;
}
string stringReversal3(string input)
{
	list<char> Stack3;
	string reverseIT;
	string output;
	for (int i = 0; i < input.length(); i++)
	{
		Stack3.push_back(input[i]);
	}

	while (!Stack3.empty())
	{
		reverseIT = Stack3.back();
		output.push_back(Stack3.back());
		Stack3.pop_back();
	}
	return output;
}
 string stringReversal4(string input)
{
	
	 MyStack Stack4;
		string reverseIT;
		string output;
		for (int i = 0; i < input.length(); i++)
		{
			Stack4.push(input[i]);
		}

		while (!Stack4.isEmpty())
		{
			reverseIT = Stack4.pull();
			output.append(reverseIT);

		}
		return output;
	

}



