#include<iostream>

using namespace std;

int main()
{
  int num;              
  cin>>num;                    //take number from user
  
  if( (num&1) == 1 )          // (num&1) is always  1 for every odd number as the LSB is always 1 
  {
    cout<<"ODD";
  }
   else {
         cout<<"EVEN";
        }
 
 return 0; 
}
