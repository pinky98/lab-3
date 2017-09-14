#include <iostream>
using namespace std;
 
int main() {
	int a,b,c,d,e,f,g;
	cout<<"sub 1 \n";
	cin>>a;
	cout<<"sub 2\n";
	cin>>b;
	cout<<"sub 3\n";
	cin>>c;
	cout<<"sub 4\n";
	cin>>d;
	cout<<"sub 5\n";
	cin>>e;
	cout<<"max marks\n";
	cin>>f;
	g=(a+b+c+d+e)/f*100;
	if(g>=90)
	cout<<"grade a \n";
	else if(g>=80)
	cout<<"grade b \n";
	else if(g>=70)
	cout<<"grade c \n";
	else if(g>=60)
	cout<<"grade d \n";
	else if(g>=50)
	cout<<"grade e \n";
	else
	cout<<"grade f";
 
	// your code goes here
	return 0;
}

