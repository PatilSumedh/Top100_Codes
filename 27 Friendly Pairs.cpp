// Friendly Pairs is following the given rule
// Two numbers num1 & num2 are friendly pairs if the following holds true -

// Eg. (Sum of divisors of 6)/6= (Sum of divisors of 28)/28

// (1+2+3)/6 = (1+2+4+7+14)/28
// 1=1
// 6 & 28 are friendly pairs

#include<iostream>
using namespace std;

int getSum(int n){
	
	if(n==0){
		return n;
	}
	
	int sum = 1;
	
	for(int i=2;i<n;i++){
		
		if(n%i==0)
			sum+=i;
	}
	
	return sum;
}


int isFriendlyPair(int num1, int num2){
	
	int n1,n2;
	
	n1 = getSum(num1)/num1;
	n2 = getSum(num2)/num2;
	
	return n1==n2;
	
}

int main(){
	
	int num1,num2;
	
	cin>>num1>>num2;
	
	if(isFriendlyPair(num1,num2))
		cout<<num1<<" and "<<num2<<" are friendly pairs";
		
	else
		cout<<num1<<" and "<<num2<<" are not friendly pairs";
		
	return 0;
}
