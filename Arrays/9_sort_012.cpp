#include<iostream>
using namespace std;


int* sort012(int arr[],int n)
{
    int count0=0,count1=0,count2=0;
    int i;
    for(i =0;i<n;i++)
    {

            switch(arr[i])
                {
                    case 0:
                         count0++;
                         break;
                    case 1:
                         count1++;
                         break;
                    case 2:
                         count2++;
                         break;
                 }
    }

    i=0;
     while(count0>0)
     {
         arr[i]=0;
         i++;
         count0--;
     }
     while(count1>0)
     {
         arr[i]=1;
         i++;
         count1--;
     }
     while(count2>0)
     {
         arr[i]=2;
         i++;
         count2--;
     }

     return arr;

}

int main()
{
    int *arr;
    int n;
    cin>>n;
    arr = new int [n];
    cout<<"enter the elements in arrays only in 0's 1's 2's"<<endl;
    for(int i=0;i<n;i++)
    {
       cin>>arr[i]; 
    }
    sort012(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}