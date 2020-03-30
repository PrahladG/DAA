#include<bits/stdc++.h>
using namespace std;

#define SIZE 10000

int position(int arr[],int size,int val)
{
	int i;
	for(i=0;i<size;i++)
	{
		if(arr[i]==val)
			return i;
	}
}

int main()
{
	int arr[SIZE]={-1};
	int i=0,e=0;
	cout<<"Enter the members of the array"<<endl;
	for(i=0;i<SIZE;i++)
	{
		if(e==0)
			cin>>arr[i];
		if(arr[i]==-1)
			break;
	}
	cout<<"First -1 is found at "<<position(arr,SIZE,-1)+1<<" position"<<endl;
}
