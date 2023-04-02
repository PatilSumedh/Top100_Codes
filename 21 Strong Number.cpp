// Stromngg number is any number following the given rule
// abcd... = a! + b! + c! + d! + ...

// Example = 145
// 145 = 1! + 4! + 5! = 1 + 24 + 120 = 145



#include<iostream>

using namespace std;

int factorial(int n){
	
	int fact = 1;
	for(int i=1;i<=n;i++){
		
		fact = fact*i;
	}
	
	return fact;
}

int snum(int num){
	
	int sum=0,temp,digit;
	
	temp = num;
	
	while(temp!=0){
		
		digit = temp%10;
		sum = sum+factorial(digit);
		temp/=10;
	}
	
	return sum==num;
}

int main(){
	
	int n;
	cin>>n;
	
	if(snum(n))
		cout<<n<<" is a Strong number";
	
	else
		cout<<n<<" is not a Strong number";
		
	
	return 0;
	
	
}
