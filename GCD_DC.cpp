#include<bits/stdc++.h>
using namespace std;
int a[1000];
int gcd(int a,int b)
{
	if(a==0)
		return b;
	return gcd(b%a,a);
}
int dc(int p,int q)
{
	if(p<q)
	{
		int m=(p+q)/2;
		int x=dc(p,m);
		int y=dc(m+1,q);
		return gcd(x,y);
	}
	else return a[p];
}
int main()
{
	int n;
	cout<<"enter the number of elements";
	cin>>n;
cout<<"enter the elements";
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}

	int p=0;
	int q=n-1;
	cout<<"gcd is ";
	cout<<dc(p,q)<<endl;
		return 0;
}
