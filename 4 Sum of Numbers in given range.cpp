#include <iostream>
using namespace std;

int main(){
	
	int num1,num2;
	int sum = 0;
	
	cin>>num1>>num2;
	if(num1>num2){
		return 0;
	}
	else{
		for(int i=num1;i<=num2;i++){
			
			sum+=i;			
		}
	}	
	
	cout<<sum;
}
