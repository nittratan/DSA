#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    string str="adjjakdakaakssggzz";
    int freq[26]; // count array
    for(int i=0;i<26;i++)
        freq[i]=0;
    
    for(int i=0;i<str.size();i++)
        freq[str[i]-'a']++;
    int maxF=0;
    char ans='a';
    for(int i=0;i<26;i++){
        if(freq[i]>maxF){
            maxF=freq[i];
            ans=i+'a';
        }
    }
    cout<<maxF<<" "<<ans<<endl;
    return 0;
}