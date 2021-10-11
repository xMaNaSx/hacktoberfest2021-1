#include<iostream>
using namespace std;
int main(){
 //APPROACH - 1 ......Print number from 1 to 20
    for(int i = 1; i<=20; i++){
        if(i % 3 == 0 && i % 5 == 0){
            cout<<"FizzBuzz"<<endl;
        }
        else if(i % 3 == 0){
            cout<<"Fizz"<<endl;
        }
        else if(i % 5 == 0){
            cout<<"Buzz"<<endl;
        }
        else{
            cout<<i<<endl;
        }
    }
    
  // APPROACH -2....Print number from 21 to 50
    for(int i=21; i<=50; i++)
    {
        if(i % 3 == 0){
             cout<<"Fizz";
        }
        if(i % 5 == 0){
             cout<<"Buzz";
        }else {
             cout<<i;
              }
        
        cout<<endl;
     }
    
    return 0;
}





