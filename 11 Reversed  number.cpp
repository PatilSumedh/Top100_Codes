#include <iostream>
using namespace std;

int main(){
	
	int num;
	
	cin>>num;
	
	int reversednum = 0;
	
	while(num!=0){
		int rem = num%10;
		reversednum = reversednum * 10 + rem;
		
		num /= 10;
	}
	
	cout<<reversednum;
}
