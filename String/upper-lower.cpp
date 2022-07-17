#include<iostream>
using namespace std;

int main()
{
    // difference b/w upper and lower character
    cout<<'a'-'A'<<endl;

    //difference b/w character
    cout<<'c'-'a'<<endl;

    // Convert into upper case
    string str="nitt";
    for(int i=0;str[i]!='\0';i++){ // str.size()
        if(str[i]>='a' & str[i]<='z')
            str[i]-=32;
    }
    cout<<str<<endl;

    // Convert into upper case
    string str1="NITT";
    for(int i=0;i<str1.size();i++){ // str.size()
        if(str1[i]>='A' & str1[i]<='Z')
            str1[i]+=32;
    }
    cout<<str1<<endl;
    
    return 0;
}