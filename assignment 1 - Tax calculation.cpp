//ASSIGNMENT

#include <iostream>
using namespace std;

//defining constants
const double low = 0000000.00;
const double high= 1000000.00;

const double limit1= 10000.00;
const double limit2= 20000.00;
const double limit3= 30000.00;
const double limit4= 40000.00;
const double limit5= 50000.00;

const double r1= 02;
const double r2= 05;
const double r3= 07;
const double r4= 10;
const double r5= 15;

const double deduct= 1000.00;

//Declare funtions
double bracketTax(double tax_inc, double start, double stop, int rate);
void get_data( double& inc, double& taxpaid, int& num_dep);
void calc_tax(double inc, double taxpaid, int num_dep, double& tax_inc, double& tax, double& taxdue );
void print(double inc, double tax_inc, int num_dep, double tax, double taxpaid, double taxdue);

//MAIN
int main()
{
	int num_dep;
	double taxdue;
	double taxpaid;
	double inc;
	double tax_inc;
	double tax;
	
	get_data(inc, taxpaid, num_dep);
	calc_tax(inc, taxpaid, num_dep, tax_inc, tax, taxdue );
	print(inc, tax_inc, num_dep, tax, taxpaid, taxdue);
	
	return 0;
}

//Tax for brackets
double bracketTax(double tax_inc, double start, double stop, int rate)
{
	double tax;
	if (tax_inc<=start)
	  tax=0.0;
	else 
	  if (tax_inc <= stop)
	      tax=(tax_inc-start)*(rate/100.00);
	  else
	      tax=(stop-start)*(rate/100.00);
	      
	return tax;
}

//Get income data
void get_data( double& inc, double& taxpaid, int& num_dep)
{
	cout<<"Enter your total income: ";
	cin>>inc;
	cout<<"Enter tax already paid: ";
	cin>>taxpaid;
	cout<<"Enter the number of dependents: ";
	cin>>num_dep;
	cout<<endl;
	
	return;
}

//Calculate Taxes
void calc_tax(double inc, double taxpaid, int num_dep, double& tax_inc, double& tax, double& taxdue )
{
	tax_inc=inc-(num_dep*deduct);
	tax=bracketTax(tax_inc, low, limit1, r1)
	+bracketTax(tax_inc, limit1, limit2,r2)
	+bracketTax(tax_inc, limit2, limit3,r3)
	+bracketTax(tax_inc, limit3, limit4,r4)
	+bracketTax(tax_inc, limit4, high, r5);
	taxdue= tax-taxpaid;
	return;	
}

//Print Information
void print(double inc, double tax_inc, int num_dep, double tax, double taxpaid, double taxdue) 
{
	cout<<"\n---------------TAX BILL DETAILS-------------------\n";
	cout<<endl;
	cout<<"Total Income           : "<<inc<<endl;
	cout<<"Number of Dependents   : "<<num_dep<<endl;
	cout<<"Taxable Income         : "<<tax_inc<<endl;
	cout<<"Total Tax              : "<<tax<<endl;
	cout<<"Tax already paid       : "<<taxpaid<<endl;
	if (taxdue>0)
	  cout<<"Tax due                : "<<taxdue<<endl;
	else
	  cout<<"Refund                 : "<<-taxdue<<endl;
	
	return;
}



