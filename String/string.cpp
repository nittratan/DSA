#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    //string str;
    // cin>>str;
    // cout <<str;

    // string str1(5,'a');
    // cout<<str1;

    // string str2 = "NITT";
    // cout<<str2;

    // string str3;
    // getline(cin,str3);
    // cout<<str3;

    //inbuilt function

    //append
    // string s1="fam";
    // string s2="ily";
    //s1.append(s2); s1 become family
    //cout<<s1;
    // cout<<s1+s2<<endl;
    
    // cout<<s1[2]<<endl;

    // string abc="jdsjklsdjkjs";
    // cout<<abc<<endl;
    // abc.clear();
    // cout<<abc<<endl;

    // compare
    // string s1="abc";
    // string s2="xyz";
    // cout<<s2.compare(s1)<<endl; // output 1 because lexigraphically s2 is greater than s1
    // string s1="abc";
    // string s2="abc";
    // if(s1.compare(s2)==0)
    //     cout<<"string are equal"<<endl;

    // if(!s1.empty())
    //     cout<<"string is not empty"<<endl;
    // s2.clear();
    // if(!s2.empty())
    //     cout<<"string is not empty"<<endl;
    // else
    //     cout<<"string is empty"<<endl;
    
    //erase function
    string s="Tiruchirappalli";
    // s.erase(4,3);
    // cout<<s<<endl;

    // find function
    cout<<s.find("palli")<<endl;
    s.insert(0,"nitt");
    cout<<s<<endl;

    // length
    // cout<<s.length()<<endl;
    // for(int i=0;i<s.length();i++){
    //     cout<<s[i]<<"  ";
    // }

    //substr sub-string function
    // string str=s.substr(4,19);
    // cout<<str<<endl;

    //stoi
    string s1="456";
    int x=stoi(s1);
    x++;
    cout<<x<<endl;
    //to_string
    cout<<to_string(x)+" 450"<<endl; // append

    //sort
    string xyz="sfafhwkhjdsa";
    sort(xyz.begin(),xyz.end());
    cout<<xyz<<endl;

    // reverse
    reverse(xyz.begin(),xyz.end());
    cout<<xyz<<endl;

    return 0;
}

