#include<iostream>
using namespace std;


// integers are n+1= from 1 to n

void duplicateInt(int arr[],int n)
{
    int m=-1;
    int y;
    for(int i=1;i<=n;i++)
    {
        int x= arr[i];
        if(x<0)
           x =abs(x);
        else
            y=x;
        if(arr[x]>0)
        {
            arr[x]=arr[x]*m;
        }
        else if(arr[x]<0)
        {
            arr[x]=arr[x]*m;
            cout<<x<<" ";
        }
    }
}


int main()
{
    int *arr;
    int n;
    cin>>n;
    arr = new int[n];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    
   duplicateInt(arr,n);
    
}

// duplicate less time 
/*      if (arr[abs(arr[i])] >= 0)
            arr[abs(arr[i])] = -arr[abs(arr[i])];
         else
             cout << abs(arr[i]) << " ";*/