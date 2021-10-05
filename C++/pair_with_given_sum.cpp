/*  Famous interview question to find if an integer array consists pair having sum equal to any given number
    By Ratan R. Ojha
    Optimal solution O(n)  */

#include <bits/stdc++.h>

using namespace std;

#define read(type) readInt<type>() 
#define ll long long
#define nL "\n"
#define pb push_back
#define mk make_pair
#define pii pair<int, int>
#define a first
#define b second
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define umap unordered_map
#define uset unordered_set
#define MOD 1000000007
#define imax INT_MAX
#define imin INT_MIN
#define exp 1e9
#define sz(x) (int((x).size()))

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int _arr[]={37, -2, 47, -15, -11, -13, 10, 16, 3, 41, 23, -20, -18, 42, 40};
    int giv_n=25, count=0;
    umap<int,int> um;
    int _size=sizeof(_arr)/sizeof(int);
    for(int i=0; i<_size; i++){
        int temp=giv_n-_arr[i];
        if(um[temp]==0){
            um[_arr[i]]++;
        }
        else{
            count+=um[temp];
            um[_arr[i]]++;
        }
    }
    cout<<count<<nL;
    return 0;
}

