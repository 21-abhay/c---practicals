#include <iostream>
using namespace std;

int exp(int n){
	int exp=1;
	for(int i=1;i<=n;i++){
		exp*=n;
	}
	return exp;
}

int main(){
	int n;
	cout<<"Enter number of terms in the sequence , n = ";
	cin>>n;
	double sum1=0;
	double sum2=0;
	double exp1=1;
	double exp2=1;
	
	double term1,term2,r;
	cout<<endl;
	for(int i=1;i<=n;i++){
		r=i/2;
		if (r==0){
			exp1=exp(i);
			cout<<i<<". "<<"Denominator  :-  "<<exp1;
			term1=1/exp1;
			cout<<"     term = "<<term1;
			sum1+=term1;
			//cout<<"     sum  = "<<sum1<<endl;
			cout<<endl;
			
		}
		else{
			exp2=exp(i);
			cout<<i<<". Denominator :-  "<<exp2;
			term2=1/exp2;
			cout<<"     term = "<<term2;
			sum2+=term2;
			//cout<<"     sum  = "<<sum2<<endl;;
			cout<<endl;
		}
	}
	double sum=sum2-sum1;
	cout<<"\nFinal Result of "<<n<<"-term sequence  =  "<<sum;
}
