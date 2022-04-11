// copy array in max heap
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    int arr[]={45,12,63,78,96,69};
    int n=sizeof(arr)/sizeof(int);
    priority_queue<int> pq(arr,arr+n);
    while (!pq.empty())
    {
        /* code */
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;

}