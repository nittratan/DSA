#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
    unordered_set<int> s;
    s.insert(7);
    s.insert(5);
    s.insert(9);
    s.insert(16);
    s.insert(5);
   
    for (int X:s)
    {
        /* code */
        cout<<X<<" ";
    }
    cout<<"\nSize = "<<s.size()<<endl;
    return 0;
}