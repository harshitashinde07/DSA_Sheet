#include<iostream>
#include<math.h>
#include<algorithm>
#include<limits>

// #include<bits/stdc++.h>



using namespace std;


int maxSubarray(int arr[],int n)
{
    int max_positive_segment=arr[0];
    int max_sum=arr[0];
    for(int i=1;i<n;i++)
    {
         max_positive_segment = max(max_positive_segment + arr[i],arr[i]);
        
        if(max_sum < max_positive_segment)
            max_sum=max_positive_segment;

    }
    return max_sum;
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
    sort(arr,arr+n);
    cout<<maxSubarray(arr,n);
}