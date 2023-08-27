#include <iostream>
using namespace std;

int main(){
	cout<<"Enter EOF key to stor enter numbers i.e., ctrl+d or any based on your device"<<endl;
	
	int b,x,y;
	cout<<"\nEnter Numbers for the set  : "<<endl;
	cout<<endl;
	cin>>x;
	int count=0;
	int max=0;
	
	while(cin>>y){
		b=max;
		if (y>x){
			max=y;
		}
		else {
			max=x;
		}
		x=max;
		
		if (b!=y){
			if (y>b){
				count=1;
			}
		}
		else {
			count+=1;
		}
	}
	
	cout<<"\nGreatest number in the set is  :  "<<max<<endl;
	cout<<"\nNumber of times "<<max<<" occure in the sequence  : "<<count<<endl;
	
	
	return 0;
	
}
