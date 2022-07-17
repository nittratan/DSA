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
int main()
{
    char name[20];
    cout<<"Enter Your Name ";
    cin>>name;
    cout<<"Length of String = "<<getLength(name)<<endl;
    return 0;
}