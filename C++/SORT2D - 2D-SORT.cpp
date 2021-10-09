//link to the problem:https://www.spoj.com/problems/SORT2D/
//Given n points in a two dimensional space, sort all the points in ascending order.
//(x1,y1) > (x2,y2) if and only if (x1>x2)  or    (x1==x2 && y1<y2)
//Input Specification:
//The first line consists of an integer t, the number of test cases. Then for each test case the first line consists of an integer n, the number of points. 
//Then the next n lines contains two integers xi, yi  which represents the point.
//Output Specification:
/*For each test case print the sorted order of the points.
Input Constraints:
1<=t<=10
1<=n<=100000
- 10^9<=co-ordinates<=10^9
Sample Input:
1
5
3 4
-1 2
5 -3
3 3
-1 -2
Sample Output:
-1 2
-1 -2
3 4
3 3
5 -3*/
#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int>x1,pair<int,int>x2){
   if(x1.first>x2.first) return 0;
   else if(x1.first==x2.first){
      if(x1.second>x2.second) return 1;
      else return 0;
   }
   else return 1;
}
int main(){
   int t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;
      vector<pair<int,int>> v(n);
      for(int i=0;i<n;i++){
       cin>>v[i].first>>v[i].second;
      }
      sort(v.begin(),v.end(),comp);
      for(int i=0;i<n;i++){
        cout<<v[i].first<<" "<<v[i].second<<"\n";
      }
   }
}
