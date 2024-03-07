#include <iostream>
using namespace std;

int arr[100000];

void quicksort(int p,int q)
{
    int i,j;
    if(p>=q)
    {
        return;
    }
    for(i=p,j=p+1;j<=q;j++)
    {
        if(arr[j]<arr[p])
        {
            swap(arr[i],arr[j]);
            i++;
        }
    }
    swap(arr[p],arr[i]);
    quicksort(p,i-1);
    quicksort(i+1,q);
}

int main() 
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    quicksort(0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
