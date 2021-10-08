#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int countunique(int i,int j,int n,int m){
	if((i>=n)||(j>=m))
	return 0;
	if((i==n-1)||(j==m-1))
	return 1;
	
	return countunique(i+1,j,n,m)+countunique(i,j+1,n,m);
}

int main(){
	int i=0,j=0,n=3,m=7;
	int p=countunique(i,j,n,m);
	cout<<p;
}
