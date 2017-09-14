#include <iostream>
using namespace std;

int main() {
	int n,first,last;
	cout<<"enter number";
	cin>>n;
	last=n%10;
	while(n>=10)
	n=n/10;
	first=n;
	cout<<"first digit= "<<first<<endl;
	cout<<"last digit ="<<last;
	// your code goes here
	return 0;
}
