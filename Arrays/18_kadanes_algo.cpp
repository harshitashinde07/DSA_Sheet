#include<iostream>
#include<algorithm>
#include<limits>

using namespace std;


int main()
{
    int *arr;
    int n;
    cin>>n;
    arr = new int[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int start=arr[0];
    int maxim= arr[0];
    for(int i=1;i<n;i++)
    {
        start= max(arr[i],start+arr[i]);

        if(maxim<start)
            maxim=start;
    }
    cout<<maxim;
}