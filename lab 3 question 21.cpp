#include <iostream>
using namespace std;

int main() {
	float unit,amt,total amt,sur charge;
	cout<<"enter unit"<<endl;
	cin>>unit;
	if(unit<=50)
	{
		amt=unit*0.5;
	}
	else if(unit<=150)
	{
		amt=25+((unit-50)*0.75);
	}
	else if(unit<=250)
	
	{
		 amt = 100 + ((unit-150) * 1.20);
	}
	else {
        amt = 220 + ((unit-250) * 1.50);
    }
    surcharge=amt*0.20;
    totalamt=amt+surcharge
    cout<<"electricity bill=";
	
	
	
		return 0;
}
