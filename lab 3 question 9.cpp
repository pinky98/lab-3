#include <iostream>
using namespace std;
 
int main() {
	char ch;
	cout<<"enter the character";
	cin>>ch;
	 if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
	 cout<<"it is an alp";
	 else if(ch >= '0' && ch <= '9')
	 cout<<"it is a digit ";
	 else
	 cout<<"it is a spl char";
	// your code goes here
	return 0;
} 
