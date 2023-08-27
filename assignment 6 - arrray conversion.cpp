#include <iostream>
using namespace std;

int main(){
	int r,c;
	cout<<"Enter number of row in 2-D array     =  ";
	cin>>r;
	cout<<"Enter number of Column in 2-D array  =  ";
	cin>>c;
	
	cout<<endl;
	int arr[r][c];
	cout<<endl;
	//form 2-D array by taking elements from user
	cout<<"Enter elements for 2-D array  :-  "<<endl;
	for (int i=0; i<r;i++){
		for (int j=0;j<c;j++){
			int t;
			cin>>arr[i][j];
		}
	}
	cout<<endl;
	//print 2-D array formed by user innitially 
	cout<<"2-D arrray  :-"<<endl;
	cout<<endl;
	for (int i=0;i<r;i++){
		for (int j=0;j<c;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	
	int x=r*c;
	cout<<"Number of elements in 1-D array  =  "<<x<<endl;
	int arr1[x];
	
	//converting 2-D array into 1-d array
	for (int i=0;i<r;i++){
		for (int j=0;j<c;j++){
			int y=i*c;
			arr1[y+j]=arr[i][j];
		}
	}
	cout<<endl;
	//print 1-D array converted innitially
	cout<<"1-D array  :-  "<<endl;
	cout<<endl;
	for (int i=0;i<x;i++){
		cout<<arr1[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}
