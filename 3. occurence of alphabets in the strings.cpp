#include<iostream>
#include<string>
using namespace std;

void Occurance(string str){
    int len=str.length();
    //Converting every character to lowercase
    for (int i = 0; i < len; i++)
    {
        if (str[i]>='A'&&str[i]<='Z')
        {
            str[i]+=32;
        }
    }
    cout<<str<<endl;
    
    for (int i = 0; i < len; i++)   //anamika
    {
        int count=1;
        if (str[i])
        {
            for (int j = i+1; j < len; j++)
            {
                if (str[i]==str[j])
                {
                    count++;
                    str[j]='\0';
                }
            }
            cout<<str[i]<<"   "<<count<<endl;
        }
    }
    
    


        
}

int main(){
    string name;
    cout<<"Enter the string : ";
    cin>>name;
    Occurance(name);

    return 0;
}