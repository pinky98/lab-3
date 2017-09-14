#include <iostream>
using namespace std;

int main() {int x,y,p=1;
	cout<<"enter a number"<<endl;
	cin>>x;
	while(x!=0)
	{
	
	y=x%10;
	p=p*y;
	x=x/10;
	}
	cout<<"product is "<<p;
	// your code goes here
	return 0;
}
