#include<iostream>
#include<math.h>
using namespace std;


int main(){
	
	int n;
	cin>>n;
	
	bool isPerfectSq = true;
	
	if(ceil((double) sqrt(n))!= floor((double) sqrt(n)))
		isPerfectSq = false;

	string result = isPerfectSq ? " is perfect square":" is not a perfect square";
	
	cout<<n<<result;
	
	return 0;
	
}
