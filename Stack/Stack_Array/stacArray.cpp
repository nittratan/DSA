#include<iostream>
using namespace std;
struct stacArray
{
    int *arr;
    int cap;
    int top;
    stacArray(int n)
    {
        cap=n;
        arr=new int[cap];
        top=-1;
    }
    void push(int x)
    {
        top++;
        arr[top]=x;
    }
    int pop()
    {
        int res=arr[top];
        top--;
    }
    int size()
    {
        return top+1;
    }
    int peek()
    {
        return arr[top];
    }
    bool isEmpty()
    {
        return (top==-1);
    }
    void display()
    {
        for(int i=top;i>=0;i--)
        {
            cout<<arr[i]<<" ";
        }
    }
};

int main()
{
    stacArray s(5);
    s.push(5);
    s.push(10);
    s.push(12);
    s.display();
    cout<<endl;
    cout<<s.size()<<endl;
    s.pop();
    cout<<s.size()<<endl;
    cout<<s.isEmpty()<<endl;
    return 0;
}