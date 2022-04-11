#include<iostream>
using namespace std;
class Heap
{
    public:
        int arr[100];
        int size;
        Heap()
        {
            arr[0]=-1;
            size=0;
        }
        void Insert(int data)
        {
            size=size+1;
            int i=size;
            arr[i]=data;
            while(i>1)
            {
                int parent=i/2;
                if(arr[parent]<arr[i]){
                    swap(arr[parent],arr[i]);
                    i=parent;
                }
                else
                    return ;
            }
        }
        void Delete()
        {
            if(size==0)
            {
                cout<<"Nothing to delete"<<endl;
                return ;
            }
            arr[1]=arr[size];
            size--;

            // set root node its coreect position
            int i=1;
            while (i<size)
            {
                /* code */
                int leftIdx=2*i;
                int rightIdx=2*i+1;

                if(leftIdx< size && arr[i]<arr[leftIdx]){
                    swap(arr[i],arr[leftIdx]);
                    i=leftIdx;
                }
                else if(rightIdx<size && arr[i]<arr[rightIdx]){
                    swap(arr[i],arr[rightIdx]);
                    i=rightIdx;
                }
                else{
                    return ; 
                }
                    
            }
            
        }
        void display()
        {
            for(int i=1;i<=size;i++)
                cout<<arr[i]<<" ";
        }
};
void heapify(int arr[],int n,int i)
{
    int large=i;
    int left=2*i;
    int right=2*i+1;

    if(left<n && arr[large]<arr[left]){
        large=left;
    }
    if(large<n && arr[large]<arr[right]){
        large=right;
    }
    if(large!=i){
        swap(arr[large],arr[i]);
        heapify(arr,n,large);
    }
}
int main()
{
    Heap obj;
    obj.Insert(50);
    obj.Insert(55);
    obj.Insert(53);
    obj.Insert(52);
    obj.Insert(54);
    obj.display();
    cout<<endl;
    obj.Delete();
    obj.display();

    cout<<endl;
    int arr[6]={-1,54,53,55,52,50};
    int n=5;
    for(int i=n/2;i>0;i--)
    {
        heapify(arr,n,i);
    }
    cout<<"after heapify the array"<<endl;
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<"  ";
    }
    return 0;
}