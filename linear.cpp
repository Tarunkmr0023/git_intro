#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool linearsearch(int* a,int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            return true;
        }

    }
    return false;
}


int main()
{    
    clock_t time_req;
	int n;
	cin>>n;
	int* a = new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int key;
	cin>>key;   
    time_req = clock();
    linearsearch(a,n,key) ? cout<<"found by linear search"<<endl : cout<<"Not found by linear search"<<endl;
    time_req = clock() - time_req;
    cout << "Time by linear search: "<<(float)time_req << " seconds" << endl;
	return 0;
}
