#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next=NULL;
    }
};
struct MyStack
{
    Node *head;
    int size;
    MyStack()
    {
        head=NULL;
        size=0;
    }
    void push(int x)
    {
        Node *temp=new Node(x);
        temp->next=head;
        head=temp;
        size++;
    }
    int pop()
    {
        if(head==NULL)
        {
            return 0;
        }
        int res=head->data;
        Node *temp=head;
        head=head->next;
        delete(temp);
        size--;
        return res;
    }
    int sizeofStack(){
         return size; 
    }
    bool isEmpty(){ return head==NULL; }
    int peek(){
        if(head==NULL)
            return 0;
        return head->data;
    }
    void Display()
    {
        struct Node *p;
        p=head;
        while(p!=NULL)
        {
        printf("%d ",p->data);
        p=p->next;
        }
        printf("\n");
    }
};
int main()
{
    MyStack st;
    st.push(20);
    st.push(10);
    st.push(20);
    st.push(10);
    cout<<st.sizeofStack()<<endl;
    st.Display();
    st.pop();
    cout<<st.sizeofStack()<<endl;
    return 0;
}
