#include <iostream>
using namespace std;

int main() {
	int x,y,s=0;
	cout<<"enter a number"<<endl;
	cin>>x;
	while(x!=0)
	{
	
	y=x%10;
	s=s+y;
	x=x/10;
	}
	
	cout<<"sum is "<<s;
	
	// your code goes here
	return 0;
}
