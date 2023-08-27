//calculate compound intrest using <math.h> .
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double p,r,t,ci,A;
	cout<<"enter the principle: ";
	cin>>p;
	cout<<"\nEnter the rate: ";
	cin>>r;
	cout<<"\nEnter the time: ";
	cin>>t;
	A=p*pow((1+r/100),t);
	ci=A-p;
	cout<<"\nCompound Interest : "<<ci<<endl;
	cout<<"\nTotal Amount: "<<A<<endl;
	
	return 0;
}




//compound interest using user defined function

/*
#include <iostream>
using namespace std;

double exponent(double a,int b);

int main(){
	double p,r,ci,a;
	int t;
	cout<<"Enter Principal Amount  =  ";
	cin>>p;
	cout<<"Enter rate (%)   =   ";
	cin>>r;
	cout<<"Enter time period (in year only integer)  =  ";
	cin>>t;
	cout<<"\nWe let Amount is compounded yearly"<<endl;
	double x;
	x=1+r/100;
	double exp=exponent(x,t);
	a=p*exp;
	cout<<"Compound interest   =  "<<a-p<<endl;
	cout<<"Total Amount  =  "<<a<<endl;
	
	return 0;
}

double exponent(double a,int b){
	double product=1;
	for (int i=1;i<=b;i++){
		product=product*a;
	}
	double result=product;
	return result;
}
*/
