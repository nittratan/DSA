#include<iostream>
using namespace std;
int getLength(char ch[])
{
    int len=0;
    for(int i=0;ch[i]!='\0';i++)
    {
        len++;
    }
    return len;
}
void reverseString(char str[],int n)
{
    int s=0;
    int e=n-1;
    while (s<e)
    {
        /* code */
        swap(str[s++],str[e--]);
    }
    
}
int main()
{
    char name[20];
    cout<<"Enter Your Name ";
    cin>>name;
    int n=getLength(name);
    reverseString(name,n);
    cout<<name;
    return 0;
}