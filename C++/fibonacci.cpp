#include<iostream>
using namespace std;
int main()
{
	int n,a,b,next,i;
	
	cout<<"Enter Number : ";
	cin>>n;
	
	a = 0;
	b = 1; 
	next = 0;
	
	for(i=1; i<=n; i++)
	{
		cout<<next<<" ";
		a = b;
		b = next;
		next = a+b;
	}
	
}
