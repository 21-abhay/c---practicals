#include<iostream>
using namespace std;


// void Duplicate(int *arr,int num){
//     for (int i = 0; i < num; i++)
//     {
//         for (int j = i+1 ; j < num; j++)
//         {
//             if (arr[j]==arr[i])
//             {
//                 arr[j]=arr[j+1];
//                 num--;
//             }   
//         }
//     }
//     for (int k = 0; k < num; k++)
//     {
//         cout<<arr[k]<<" ";
//     }
// }

int main(){
    int num;
    cout<<"Enter the numbers of elements you want to add in the array : ";
    cin>>num;
    int array[num];
    cout<<"Enter the elements of the array  :  \n";
    for (int i = 0; i < num; i++)
    {
        cin>>array[i];
    }  
    for (int i = 0; i < num; i++)
    {
        for (int j = i+1 ; j < num; j++)
        {
            if (array[i]==array[j])
            {
                while (j<num)
                {
                    array[j]=array[j+1];
                    j++;
                }
                num--;
            }  
        }
    }
    for (int k = 0; k < num; k++)
    {
        cout<<array[k]<<" ";
    } 
    return 0;
}