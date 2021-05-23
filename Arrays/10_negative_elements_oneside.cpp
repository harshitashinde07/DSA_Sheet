#include<iostream>
using namespace std;


void neg(int arr[],int n,int start)
{
    int i=0;
    while(i<n)
    {
        if(arr[i]<0)
        {
            if(start!=i)
            {

                
                // int temp;
                // temp=arr[start];
                // arr[start]=arr[i];
                // arr[i]=temp;
                swap(arr[start],arr[i]);
               
               
            }
           start++;
        }
        i++;
        //     else if(arr[start]>0)
        //     {
                
        //         // int temp;
        //         // temp=arr[start];
        //         // arr[start]=arr[i];
        //         // arr[i]=temp;
        //         swap(arr[start],arr[i]);
               
        //     }
            
        // }
        // else
        //     i++;
    }
   

}

int main()
{
    int arr[]={-1,6,7,-3,-4};
    int n=sizeof(arr)/sizeof(arr[0]);
    neg(arr,n,0);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}