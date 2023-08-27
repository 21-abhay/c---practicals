#include <iostream>
using namespace std;

int main(){
	cout<<"Enter EOF key to stor enter numbers i.e., ctrl+d or any based on your device"<<endl;
	
	int b,x,y;
	cout<<"\nEnter Numbers for the set  : "<<endl;
	cout<<endl;
	cin>>x;
	int count=1;
	int min=0;
	
	while(cin>>y){
		b=min;
		if (y<x){
			min=y;
		}
		else {
			min=x;
		}
		x=min;
		
		if (b!=y){
			if (y<b){
				count=1;
			}
		}
		else {
			count+=1;
		}
	}
	
	cout<<"\Smallest number in the set is  :  "<<min<<endl;
	cout<<"\nNumber of times "<<min<<" occure in the sequence  : "<<count<<endl;
	
	
	return 0;
	
}
