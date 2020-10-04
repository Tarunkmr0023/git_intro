#include<iostream>
#include<ctime>
using namespace std;
long long linear_search(long long* a,int n,int key)
{
   for(long long i=0;i<n;i++)
   {
       if(a[i]==key)
       {
           return i;
       }
   }
   return -1;
}
long long Binary_search(long long* a,int n,int key)
{
    long long low=0;
    long long high=n-1;
   while(low<=high)
   {
       long long mid=(low+high)/2;
       if(a[mid]==key)
       {
           return mid;
       }
        else if(a[mid]>key)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
   }
   return -1;
}
int main()
{
    long long n=10000000;
    long long* arr=new long long[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=i+356;
    }
    cout<<arr[9999999]+5<<endl;
    long long key;
    cin>>key;

    //Start time
    clock_t time_req;
    time_req = clock();

    cout<<key<<" is present at index "<<linear_search(arr,n,key)<<endl;

    time_req = clock()- time_req;
    cout << "Time taken for linear search: "<< (float)time_req/CLOCKS_PER_SEC << " seconds" << endl;
    //end time

    //Start time
    time_req = clock();

    cout<<key<<" is present at index "<<Binary_search(arr,n,key)<<endl;

    time_req = clock()- time_req;
    cout << "Time taken for binary1 search: "<< (float)time_req/CLOCKS_PER_SEC << " seconds" << endl;
    //end time
    return 0;
}
