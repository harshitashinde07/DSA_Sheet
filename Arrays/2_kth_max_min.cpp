#include<iostream>
#include<algorithm>

using namespace std;

void kthminmax(int arr[],int n,int k)
{
    sort(arr,arr+n);
    
    cout<<k<<" min"<<arr[k-1]<<endl;
    cout<<k<<"  max"<<arr[n-k];
}


int main()
{
    int *arr;
    int n;
    cin>>n;
    arr = new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    kthminmax(arr,n,k);
   
}
