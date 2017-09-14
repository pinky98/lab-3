#include <iostream>
using namespace std;
 
int main() {
	int n,z,r=0;
	cout<<" enter the number";
	cin>>n;
	z=n;
	while(n!=0)
	{
		r=r*10+n%10;
		n=n/10;
	}
	if(z==r)
	{
		cout<<"it is a palindrome ";
	}
	else{
		cout<<"it is not a palindrome";
	}
	// your code goes here
	return 0;
}
