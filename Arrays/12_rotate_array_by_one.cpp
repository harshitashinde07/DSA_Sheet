#include<iostream>
using namespace std;

void rotate(int arr[],int n)
{
    int i=n-1;
    int temp=arr[n-1];
    while(i>0)
    {
        arr[i]=arr[i-1];
        i--;

    }

     arr[0]=temp;
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
    rotate(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}