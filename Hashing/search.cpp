#include<iostream>
using namespace std;
#define MAX 1000
bool hashTable[MAX+1][2];

// search 
bool searchElement(int key)
{
    if(key>0){
        if(hashTable[key][0]== true)
            return true;
        else
            return false;
    }
    else
    {
        key=abs(key);
         if(hashTable[key][1]== true)
            return true;
        else
            return false;
    }
}
void insert(int arr[],int n)
{
    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            hashTable[arr[i]][0]=1;
        }
        else{
            hashTable[abs(arr[i])][1]=1;
        }
    }
}
int main()
{
    int arr[]={3,9,110,-500,600,-400,200};
    int n=sizeof(arr)/sizeof(int);
    insert(arr,n);

    cout<<searchElement(-500)<<endl;

    cout<<searchElement(500)<<endl;
    return 0;
}