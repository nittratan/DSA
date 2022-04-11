// Min Heap
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int,vector<int>,greater<int>> pq;
    pq.push(10);
    pq.push(15);
    pq.push(5);
    cout<<"Size = "<<pq.size()<<endl;
    cout<<"Top Element "<<pq.top()<<endl;
    while (!pq.empty())
    {
        /* code */
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
    cout<<"Size = "<<pq.size()<<endl;
    return 0;
    
}