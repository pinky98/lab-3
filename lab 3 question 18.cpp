#include <iostream>
using namespace std;

int main() {
	int cp ,sp, result;
	cout<<"enter cp and sp"<<endl;
	cin>>cp>>sp;
	result=sp-cp;
	if(result>=0)
	cout<<"profit = "<<result;
	else if(result<=0)
	cout<<"loss = "<<result;
	else
	cout<<"no profit or loss";
	// your code goes here
	return 0;
}
