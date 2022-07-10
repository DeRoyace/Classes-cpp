#include <iostream>
#define SIZE 100
using namespace std;

class StackProgram
{
	int top = -1;
	int st[SIZE];

public:
	StackProgram()
	{
		top = -1;
	}
	void push(int);
	void pop();
	int peep();
	void display();
	void chocie();
};

void StackProgram::push(int v)
{
	if (top == SIZE - 1)
	{
		cout << "Stack is full!\nCannot insert element " << v << endl;
		return;
	}
	st[++top] = v;
}

void StackProgram::pop()
{
	if (top == -1)
	{
		cout << "Stack is empty!" << endl;
		return;
	}
	cout << "Popped element is " << st[top--] << endl;
}

int StackProgram::peep()
{
	if (top == -1)
	{
		cout << "Stack is empty!" << endl;
		return -1;
	}
	return st[top];
}

void StackProgram::display()
{
	if (top == -1)
	{
		cout << "Stack is empty!" << endl;
		return;
	}
	cout << "Stack elements are:" << endl;
	for (int i = top; i >= 0; i--)
	{
		cout << st[i] << endl;
	}
}

void StackProgram::chocie()
{
	int ch;
	cout << "1: Insert elements" << endl;
	cout << "2: Delete topmost element" << endl;
	cout << "3: Delete all elements" << endl;
	cout << "4: Check topmost element" << endl;
	cout << "5: Display stack elements" << endl;
	cout << "6: Terminate the program" << endl;
	cout << "Enter your choice: ";
	cin >> ch;
	cout << endl;
	switch (ch)
	{
	case 1:
		cout << "Enter element to be inserted: ";
		int e;
		cin >> e;
		push(e);
		break;

	case 2:
		pop();
		break;

	case 3:
		top = -1;
		break;

	case 4:
		if (peep() != -1)
			cout << "Topmost element is " << peep() << endl;
		break;

	case 5:
		display();
		break;

	case 6:
		exit(0);
		break;

	default:
		cout << "Invalid choice entered." << endl;
		chocie();
	}
}

int main()
{
	StackProgram sp;
	while (true)
	{
		sp.chocie();
		cout << "------------------------------" << endl;
	}
	return 0;
}