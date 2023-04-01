// Armstrong number is any number following the given rule
// abcd... = a^n + b^n + c^n + d^n + ...
// Where n is the order(length/digits in number)

// Example = 153 (order/length = 3)
// 153 = 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153

// Example = 1634 (order/length = 4)
// 1634 = 1^4 + 6^4 + 3^4 + 4^4 = 1 + 1296 + 81 + 256 = 1634

// number of digits in a number is order


#include<iostream>
#include<bits/stdc++.h>
#include<math.h>

using namespace std;

int order(int num){
	int len = 0;
	
	while(num){
		
		len++;
		num /= 10;
	}
	
	return len;
}

bool isArmstrong(int num,int len){
	
	int sum = 0, temp, digit;
	
	temp = num;
	
	while(temp!=0){
		
		digit = temp%10;
		
		sum = sum + pow(digit,len);
		temp/=10;
	}
	
	return num==sum;
}


int main(){
	
	int num,len;
	
	cin>>num;
	
	len = order(num);
	
	if(isArmstrong(num,len))
		cout<<num<<" is an Armstrong number";
		
	else
		cout<<num<<" is not an Armstrong number";
	
	return 0;
}



