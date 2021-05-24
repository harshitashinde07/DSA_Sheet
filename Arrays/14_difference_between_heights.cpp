#include<iostream>
#include<algorithm>
#include<limits>
#include<math.h>

using namespace std;



int main()
{
    int *arr;
    int n;
    cin>>n;
    arr = new int[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"enter key"<<endl;
    int key;
    cin>>key;
    sort(arr,arr+n);
   
    int m=0;
    int mn=0;
    int result=0;
    result=arr[n-1]-arr[0];
   
    for(int i=1;i<n;i++)
    {
            if(arr[i]>=key)
            {
                m=max(arr[i-1]+key,arr[n-1]-key);
                mn = min(arr[i]-key,arr[0]+key);

                result=min(result,m-mn);
                
                
            }
            else
                continue;
    }
   cout<<result;
    


}

