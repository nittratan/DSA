//C++ STL inbuilt function
#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    
    string str = "NIT Trichy";
  
    // using transform() function and ::toupper in STL
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout << str << endl;
  
    
    string sl = "Computer Applications";
  
    // using transform() function and ::tolower in STL
    transform(sl.begin(), sl.end(), sl.begin(), ::tolower);
    cout << sl << endl;
  
    return 0;
}