#include<iostream>
#include<stack>
#include<string>
#include<algorithm>

using namespace std;

//without extra space
struct Intervals
{
    int start,end;
};

  bool compareInterval(Intervals i1, Intervals i2)
{
    return (i1.start < i2.start);
}

void merge(Intervals arr[],int n)
{
  

    sort(arr,arr+n,compareInterval);
    stack<Intervals> s;
    s.push(arr[0]);
    // int maxi;
 

    for(int i=1;i<n;i++)
    {
           Intervals top= s.top();
        if(top.end<arr[i].start)
            s.push(arr[i]);
        else if(top.end>=arr[i].start)
        {
            s.pop();
            arr[i].end=max(top.end,arr[i].end);
            s.push(top);

        }
    }
    while(!s.empty())
    {
        Intervals t=s.top();
        cout<<t.start<<" "<<t.end<<" ";
        s.pop();

    }


}


int main()
{
    Intervals arr[] =  { {6,8}, {1,9}, {2,4}, {4,7} };
    int n= sizeof(arr)/sizeof(arr[0]);
    merge(arr,n);


}


