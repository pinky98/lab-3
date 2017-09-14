#include <iostream>
using namespace std;

int main() {int n,first,last,sum;
	cout<<"enter number";
	cin>>n;
	last=n%10;
	while(n>=10){
	n=n/10;}
	first=n;
	sum = first+last;
	cout<<"sum ="<<sum;
	
	// your code goes here
	return 0;
}
