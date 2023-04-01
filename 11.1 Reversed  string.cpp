#include <iostream>
#include <bits/stdc++.h>

using namespace std;

string getReverse(string num){
	
	string rev = num;
	
	reverse(rev.begin(),rev.end());		
	return rev;
}

int main(){
	
	string w;
	
	cin>>w;
		
	cout<<"Reversed string is :"<<getReverse(w);
	
	return 0;
}
