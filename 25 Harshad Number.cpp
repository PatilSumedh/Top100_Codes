// Harshad number is any number following the given rule
// A Harshad number is a positive integer that is divisible by the sum of the digits of the integer. It is also called the Niven number.

//For Example : 153
//Sum of digits = 1 + 5 + 3 = 9

//153 is divisible by 9 so 153 is a Harshad Number.

#include<iostream>

using namespace std;

int isHarshad(int n){
	
	int sum = 0;
	int temp = n;
	
	while(temp!=0){
		
		sum = sum + temp%10;
		temp/=10;
		
	}
	
	return n%sum==0;
	
}

int main(){
	
	int n;
	cin>>n;
	
	if(isHarshad(n))
		cout<<n<<" is a Harshad Number";
		
	else
		cout<<n<<" is not Harshad's Number";

	return 0;
	
}

