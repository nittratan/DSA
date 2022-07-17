#include<iostream>
using namespace std;
int main()
{
    // char name[20];
    // cout<<"Enter Your Name ";
    // cin>>name;

    // cout<<"Your Name is "<<name;
    // return 0;

    char name[20];
    cout<<"Enter Your Name ";
    cin>>name;
    name[2]='\0';
    
    cout<<"Your Name is "<<name;
    return 0;
}