#include <iostream>
using namespace std;

int getReverse(int num,int rev){
	
	if(num==0)
		return rev;
		
	
	int rem = num%10;
		
	rev = rev*10 + rem;
	
	return getReverse(num/10,rev);
}

int main(){
	
	int num;
	int rev=0;
	
	cin>>num;
	
	int revnum = getReverse(num,rev);
	
	if(num == revnum)
		cout<<"The number is palindrome";
	
	else
		cout<<"It is not a palindrome";
}
