#include <bits/stdc++.h>
using namespace std ;

struct TimeInterval {
int start , end ;
} ;

bool intervalCompare ( TimeInterval x1, TimeInterval x2 )
{
return ( x1.start < x2.start ) ;
}
int main ()
{
vector < TimeInterval > v { { 5, 9 }, { 2, 8 }, { 3, 7 }, { 4, 7 } } ;

sort ( v.begin () , v.end () , intervalCompare ) ;
cout << " Here are the time intervals sorted by the start time : \n " ;
for ( auto i : v )
cout << " [ " << i.start << " , " << i.end << " ] " ;
return 0 ;
}
