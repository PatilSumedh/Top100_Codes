#include<iostream>
using namespace std;

int main(){
	
	int num;
	
	cin>>num;
	
	bool isPrime = true;
	int count = 0;
	if(num<2){
		isPrime = false;
	}
	
	else{
		for(int i=2;i<num;i++){
			
			if(num%i==0)
				isPrime = false;
				break;
		}
	}
	
	string result = isPrime ? "Prime":"Not Prime";
	cout<<num<<" is "<<result;
}
