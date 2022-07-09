#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
    string str="umbrellaSong";

    cout<< 'a'-'A'<<endl; // difference between upper and lower case
    // Convert into Upper Case
    for(int i=0;i<str.size();i++){
        if(str[i]>='a' && str[i]<='z')
            str[i]-=32;
    }
    cout<<str<<endl;

    // Convert into lower case

    for(int i=0;i<str.size();i++){
        if(str[i]>='A' && str[i]<='Z')
            str[i]+=32;
    }
    cout<<str<<endl;


    return 0;
}