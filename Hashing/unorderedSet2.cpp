#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
    unordered_set<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(20);
    s.insert(20); // No duplicate allowed 
    for(auto it=s.begin();it!=s.end();it++)
        cout<<(*it)<<" ";
    // find() function 
    /*
        the find() function find if an element is present of not
        if the element is present then it return iterator to that
        element (iterator is address of element).
        If element is not present then it return end iterator 
    */
    if(s.find(15)!=s.end())
        cout<<"\nPresent "<<*(s.find(15))<<endl;
    else
        cout<<"\nNot Present"<<endl;

    // count() function
    /* the count() function is subsititue of find function  
        if element is present it return 1 otherwise return 0
    */
    if(s.count(25))
        cout<<"\nPresent "<<endl;
    else
        cout<<"\nNot Present"<<endl;

    // erase() function
    /*  
        erase() function is used to remove an item or range of items
    */
    auto it=s.find(10);
    s.erase(it);
     
    cout<<"\nSize = "<<s.size()<<endl;
    s.clear();
    cout<<"\nSize = "<<s.size()<<endl;

    cout<<"Empty Function "<<s.empty();
    return 0;

}