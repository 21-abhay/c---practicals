#include <iostream>
using namespace std;

int linear_search(int a[],int n);
int elements();

int main(){
	int x;
	cout<<"Enter number of elements in array  : ";
	cin>>x;
	cout<<endl;
	int arr[x];
	cout<<"Enter elemets for array  :- "<<endl;
	// Array formation
	for (int i=0;i<x;i++){
		cin>>arr[i];
	}
	cout<<endl;
	cout<<"array is :-   ";
	// print Array
	for (int i=0;i<x;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl<<endl;
	
	int num;
	cout<<"Enter number, want to search  :  ";
	cin>>num;
	cout<<endl;
	int check=-1;
	//Searching the element in the Array
	for (int i=0;i<x;i++){
		if (arr[i]==num){
			cout<<num<<" is at index value "<<i<<" of array"<<endl;
			check+=1;
		}
	}
	if (check==-1){
		cout<<num<<" is not in the array";
	}
	cout<<endl;
	return 0;
}
