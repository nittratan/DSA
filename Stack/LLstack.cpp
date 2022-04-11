#include<iostream>
using namespace std;
struct node
{
	int data;
	node* next;
};
class Stack
{
private:
	node* top;
public:
	Stack()
	{
		top = NULL;
	}
	void Push(int n)
	{
		node* temp = new node();
		temp->data = n;
		temp->next = NULL;
		if (top == NULL)
		{
			top = temp;
		}
		else
		{
			temp->next = top;
			top = temp;
		}
	}
	void Pop()
	{
		
		if (top == NULL)
		{
			cout << "Error,Stack is Empty!" << endl;
			return;
		}
		node* temp = top;
		top = top->next;
		delete temp;
	}
	void Top()
	{
		cout << "Top Of Stack: " << top->data << endl;
	}
	void Display()
	{
		node* t = top;
		cout << "Stack: ";
		while (t != NULL)
		{
			cout << t->data << " ";
			t = t->next;
		}
		cout << "\n";
	}
	void IsEmpty()
	{
		node* t = top;
		if (t == NULL)
		{
			cout << "Stack Is Empty!" << endl;
		}
		else
		{
			cout << "Stack Is Not Empty!" << endl;
			Display();
		}
	}
};
int main()
{
	Stack s;
	s.Push(1);
	s.IsEmpty();
	s.Pop();
	s.IsEmpty();

	return 0;
}