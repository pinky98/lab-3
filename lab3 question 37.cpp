#include <iostream>
using namespace std;

int main() {int x,rev=0,rem;
	cout<<"enter a number"<<endl;
	cin>>x;
	while(x>0)
	{
	
	rem=x%10;
	
	x=x/10;
	rev=rev*10+rem;
	
	}
	cout<<"rev order "<<rev;
	// your code goes here
	return 0;
}
