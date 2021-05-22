#include<iostream>
using namespace std;

class minmax
{
    public:
     int min;
     int max;

    void minmaxelemnt(int arr[],int n)
    {
       if(arr[0]>arr[1])
       {
           max=arr[0];
           min=arr[1];

       }
       else if(arr[0]<arr[1])
       {
           min=arr[0];
           max=arr[1];
       }

       for(int i=2;i<n;i++)
       {
           if(min>arr[i])
           {
               min=arr[i];
           }
           else if(max<arr[i])
           {
               max=arr[i];
           }
       }
       cout<<min<<" "<<max;
    }

};
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
    minmax m;
    m.minmaxelemnt(arr,n);
   
}