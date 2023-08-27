#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"How many numbers you want to add in 1st array : ";
    cin>>num;

    cout<<"Enter the elements of the 1st array : \n";
    int array1[num];
    for (int i = 0; i < num; i++)
    {
        cin>>array1[i];
    }

    int num2;
    cout<<"How many numbers you want to add in the 2nd array: ";
    cin>>num2;

    int array2[num2];
    cout<<"Enter the elements of the 2nd array : \n";
    for (int i = 0; i < num2; i++)
    {
        cin>>array2[i];
    }  
    
    int final_array[num+num2];
    int k=0;
    int j=0;
    int i=0;
    while (i<num&&j<num2)
    {
        if (array1[i]<array2[j])
        {
            final_array[k]=array1[i];
            k++;
            i++;
        }
        else
        {
            final_array[k]=array2[j];
            k++;
            j++;
        }
    }
    while (i<num)
    {
        final_array[k]=array1[i];
        k++;
        i++;
    }
    while (j<num2)
    {
        final_array[k]=array2[j];
        k++;
        j++; 
    }
    int total=num+num2;
    cout<<"Merged and ordered array  :  ";
    cout<<"[ ";
    for (int m = 0; m < total; m++)
    {
        cout<<final_array[m];
        if (m<total-1){
        cout<<" , ";
        }
    }
    cout<<" ]";
    return 0;
}