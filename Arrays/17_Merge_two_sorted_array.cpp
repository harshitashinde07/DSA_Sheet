#include<iostream>
#include<string>
#include<algorithm>
#include<limits>
using namespace std;


void merge(int arr1[],int arr2[],int n,int m)
{
    int i=n-1;
    int j=0;
    while(i>=0 && j<m)
    {
        if(arr1[i]>=arr2[j])
        {
             swap(arr1[i],arr2[j]);
             i--;
             j++;
        }
        else
            break;
        
    }

}

int main()
{
    int *arr1;
    int *arr2;
    int n;
    int m;
    cin>>n;
    cin>>m;
    cout<<"enter two sorted arrays"<<endl;
    arr1= new int[n];
    arr2 = new int[m];
    for(int i=0; i<n; i++)
    {
        cin>>arr1[i];
    }

    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }
    merge(arr1,arr2,n,m);
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
    for(int i=0;i<n;i++)
    {
        cout<<arr1[i]<<" ";
    }
    for(int j=0;j<m;j++)
        cout<<arr2[j]<<" ";



}