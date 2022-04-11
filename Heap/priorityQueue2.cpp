// Max Heap

#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int> pq;
    pq.push(5);
    pq.push(10);
    pq.push(30);
    pq.push(20);
    pq.push(35);
    pq.push(40);
    pq.push(15);
    cout<<"Size = "<<pq.size()<<endl;

    while (!pq.empty())
    {
        /* code */
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
    pq.push(10);
    pq.push(20);
    pq.pop();
    cout<<"Size = "<<pq.size()<<endl;
    return 0;
}
