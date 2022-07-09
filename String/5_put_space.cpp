// (i) Put a single space between these words
// (ii) Convert the uppercase letters to lowercase.
// Note: The first character of the string can be both uppercase/lowercase.

// Input:
// s = "BruceWayneIsBatman"
// Output: bruce wayne is batman
// Explanation: The words in the string are
// "Bruce", "Wayne", "Is", "Batman".

#include<bits/stdc++.h>
using namespace std;

string stringspace(string s)
{
        // your code here
        
        // Brute Force
        
        // string res="";
        // int n=s.size();
        // for(int i=0;i<n;i++){
        //     char ch=s[i];
        //     if(i==0 and (ch>='A' && ch<='Z')) // for first character only
        //         res+=tolower(ch);
        //     else if(ch>='a' and ch<='z')
        //         res+=ch;
        //     else if(ch>='A' && ch<='Z'){
        //         res+=' ';
        //         res+=tolower(ch);
        //     }
        // }
        // return res;
        
        string ans="";
        for(int i=0;i<s.length();i++){
            if(isupper(s[i])){
                s[i]=tolower(s[i]);
                if(i!=0)ans+=" ";  // for do not add space at first
            }
            ans+=s[i];
        }
        return ans;
}
int main()
{
	string str = "BruceWayneIsBatman";
	cout <<stringspace(str) << endl;
    
    return 0;
}