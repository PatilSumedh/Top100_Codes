// Abundant number is any number following the given rule
// Abundant number is an number in which the sum of the proper divisors of the number is greater than the number itself.

//For Example : 12
//Sum of digits = 1 + 2 + 3 + 4 + 6 = 16

//12 < 16 so 12 is a Abundant Number.

#include<iostream>

using namespace std;

int isAbundant(int n){
	
	int sum = 1;
	
	for(int i=2;i<n;i++){
		
		if(n%i==0){
			
			sum += i;
		}
	}
	
	return sum>n;
}

int main(){
	
	int n;
	cin>>n;
	
	if(isAbundant(n))
		cout<<n<<" is an Abundant number";
		
	else
		cout<<n<<" is not an Abundant Number";
}
