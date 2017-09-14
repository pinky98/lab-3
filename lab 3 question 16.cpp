#include <iostream>
using namespace std;

int main() {
	int a,b,c;
	cout<<"enter a,b,c";
	cin>>a>>b>>c;
	if(a==b&&b==c)
	cout<<"triangle is equilateral";
	else if(a==b&&b!=c)
	cout<<"triangle is isoceles";
	else
	cout<<"tiangle is scalene";
	// your code goes here
	return 0;
}
