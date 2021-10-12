/* Check whether the string contains redundant braces 
eg-> ((A)) 
OUTPUT: Yes,it contains redundant braces*/

#include<bits/stdc++.h>
using namespace std;

int check(string s){
	stack<char>st;
	for(int i=0;i<s.size();i++){
		if(s[i]=='(' || s[i]=='+' || s[i]=='-' || s[i]=='/' || s[i]=='*'){
			st.push(s[i]);
		}
		else if(s[i]==')'){
			if(st.top()=='('){
				return true;
			}
			else{
				while(st.top()!='(' && !st.empty()){
					st.pop();
				}
				st.pop();
			}
		}
	}
	return false;
}

int main(){
	string s;
	cin>>s;
	if(check(s)){
		cout<<"Yes,it contains redundant braces";
	}
	else{
		cout<<"No redundant braces";
	}
}
