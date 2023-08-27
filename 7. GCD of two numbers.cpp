#include <iostream>
using namespace std;


int main(){
	int x,y;
	cout<<"Enter the First number  :  ";
	cin>>x;
	cout<<"Enter the Second number :  ";
	cin>>y;
	int a,b;
	a=x;
	b=y;
	int r,d;
	
	while (r!=0){
		r=x%y;
		if (r!=0){
	                    x=y;
		          y=r;
	          }
	}
	
	cout<<"\n GCD of "<<a<<" and "<<b<<"  =  "<<y;
	return 0;
}
