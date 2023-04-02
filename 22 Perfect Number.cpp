// Perfect number is any number following the given rule
// Addition of divisor of given number

// Example = 28
// 145 = 1 + 2 + 4 + 7 + 14 = 28


#include<iostream>

using namespace std;

int perNum(int n){

	int sum = 0;
	
	for(int i=1;i<n;i++){
		
		if(n%i==0){
			
			sum+=i;
		}
	}	
	
	return sum==n;
}


int main(){
	
	int n;
	
	cin>>n;
	
	if(perNum(n))
		cout<<n<<" is a Perfect number";
		
	else
		cout<<n<<" is not a Perfect nuumber";
	
	return 0;

}
