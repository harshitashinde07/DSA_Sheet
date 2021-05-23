#include<iostream>
#include<algorithm>

using namespace std;

void unionofarrays(int arr1[],int arr2[],int n,int m)
{
     int i=0;
    int j=0;
    while(i<n && j<m)
    {
         if(arr1[i]<arr2[j])
            {
             cout<<arr1[i]<<" ";
              i++;
            }
            else if(arr2[j]<arr1[i])
            {
                cout<<arr2[j]<<" ";
                j++;
            }
            else 
            {
                cout<<arr2[j]<<" ";
                i++;
                j++;
              
            }
        
    }
    while(i<n)
    {
        cout<<arr1[i]<<" ";
        i++;
    }
    while(j<m)
    {
        cout<<arr2[j]<<" ";
        j++;

    }
     cout<<endl;


}

void intersectionofArray(int arr1[],int arr2[],int n,int m)
{
    int i=0;
    int j=0;
    while(i<n && j<m)
    {
        if(arr1[i]<arr2[j])
            i++;
        else if(arr2[j]<arr1[i])
            j++;
        else
        {
           
            cout<<arr2[j]<<" ";
            i++;
            j++;
        }
    }
}


int main()
{
    int arr1[]={5,6,2,1,4};
    int arr2[]={2,1,10,9,5};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    int m=sizeof(arr2)/sizeof(arr2[0]);
    // int* arr1;
    // int *arr2;
    // cout<<"size of first array"<<endl;
    // int n;
    // cin>>n;
    // cout<<"size of sceond array"<<endl;
    // int m;
    // cin>>m;
    // arr1 = new int[n];
    // arr2= new int[m];
    // for(int i=0;i<n;i++)
    // {
    //     cin>>arr1[i];
    // }
    // for(int j=0;j<m;j++)
    // {
    //     cin>>arr2[j];
    // }
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
    unionofarrays(arr1,arr2,n,m);
    intersectionofArray(arr1,arr2,n,m);

    
}
