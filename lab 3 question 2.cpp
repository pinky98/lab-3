#include <iostream>
using namespace std;

int main() {
	int a,b,c;
	cout<<"enter the numbers \n";
	cin>>a>>b>>c;
	if(a>b &&  a>c)
	{
		cout<<"a is largest";
		
	}else if(b>a && b>c){
		cout<< "b i largest ";
		
	}else{
		cout<< "cis largest ";
	}
	// your code goes here
	return 0;
}
