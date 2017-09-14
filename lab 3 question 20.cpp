#include <iostream>
using namespace std;

int main() {
	float basic,gross,hra,da;
	cout<<"enter basic";
	cin>>basic;
	if(basic<=10000)
	{
        da  = basic * 0.8;
        hra = basic * 0.2;
    }
    else if(basic <= 20000)
    {
        da  = basic * 0.9;
        hra = basic * 0.25;
    }
    else
    {
        da  = basic * 0.95;
        hra = basic * 0.3;
    }

    /* Calculate gross salary */
    gross = basic + hra + da;
    cout<<"gross is"<<gross;
	
	
	// your code goes here
	return 0;
}
