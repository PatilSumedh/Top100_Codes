// Autommorphic number is any number following the given rule
// An Automorphic number is a special number, whose’s square ends with the same digits as the number itself

// Example = 6 
// 6^2 = 36 , 5^2 = 25, 376^2 = 141376


#include <iostream>
#include <math.h>

using namespace std;

int amNum(int n){
	
	int square = n * n;

	while(n!=0){
		
		if(n%10 != square%10){
			return 0;
		}
		
		n/=10;
		square/=10;
	}
	
	return 1;
}

int main(){
	
	int n;
	
	cin>>n;
		
	string result = amNum(n) ? " is an Automorphic Number":" is not an Automorphic Number";
	
	cout<<n<<result;
	
	return 0;
}
