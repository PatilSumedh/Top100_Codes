#include<iostream>
#include<bits/stdc++.h>
#include<math.h>

using namespace std;

int order(int num){
	
	int len = 0;
	
	while(num!=0){
		
		len++;
		num/=10;
	}
	return len;
}

void Armstrong(int low,int high){
	
	for(int i = low; i<=high;i++){
		
		int sum=0,digit,temp,len;
		
		temp = i;
		
		len = order(i);
		
		while(temp!=0){
			
			digit = temp%10;
			
			sum = sum + pow(digit,len);
			temp/=10;
		};
		
		if(sum==i){
			cout<<i<<" ";
		}
	}	
	
}


int main(){
	
	int low,high;
	cin>>low>>high;
	
	Armstrong(low,high);	
	return 0;
}
