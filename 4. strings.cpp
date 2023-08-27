#include<iostream>
using namespace std;


void Return_add(char *str){
          for (int i = 0; *str !='\0'; i++)
          {
                    cout<<*str<<"      "<<&str+i<<endl;
                    str++;
          }
}

string Reverse(string str){
          string ans;
          for (int i = str.length(); i >= 0; i--)
          {
                    ans+=str[i];
          }
          return ans;
}

void Concatenate(string str1,string str2){
          cout<<"After the concatenation : "<<str1+str2;
}

void Compare(string str1,string str2){
          bool flag=false;
          for (int i = 0; i < str1.length(); i++)
          {
                    if (str1[i]==str2[i])
                    {
                              flag=true;
                    }
                    else
                    {
                              flag=false;
                              break;
                    }
          }
    
          if (flag==true)
          {
                    cout<<"Strings are equal";
          }
          else
          {
                    cout<<"Strings are not equal";
          }
}

int Length(char *str){
          int i=0;
          int count=0;
          for (int i = 0; *str != '\0'; i++)
          {
                    count++;
                    str++;
          }
          return count;
}

string L_to_U(string str){
          string ans;
          for (int i = 0; i < str.length(); i++)
          {
                    if (str[i]>='a'&&str[i]<='z')
                    {
                              ans+=str[i]-32;
                    }
          }    
          return ans;
}

void Input(string &str,string &str1){
          cout<<"Enter the string1 : ";
          cin>>str;
          cout<<"Enter the string2 : ";
          cin>>str1;
}

void Input2(string &str){
          cout<<"Enter the string : ";
          cin>>str;
}

void Again();

int main(){
          cout<<"\n===============================================================\n";
          cout<<"1.Show address of each character in string \n";
          cout<<"2.Concatenate two strings\n";
          cout<<"3.Compare two strings\n";
          cout<<"4.Calculate the length of the strings\n";
          cout<<"5.Convert all lowercase characters to uppercase\n";
          cout<<"6.Reverse the string \n";
          cout<<"===============================================================\n";
          string str1,str2;
          char str[20];
          char *str3=str;
          int num;
          cout<<"Enter your choice  : ";
          cin>>num;
          cout<<endl;
          switch (num)
         {
          case 1:
                    cout<<"Enter the string : ";
                    cin>>str;
                    Return_add(str3);
                    Again();
                    break;
          case 2:
                    Input(str1,str2);
                    Concatenate(str1,str2);
                    Again();
                    break;
          case 3:
                    Input(str1,str2);
                    Compare(str1,str2);
                    Again();
                    break;
          case 4:
                    cout<<"Enter the string : ";
                    cin>>str;
                    cout<<"Length of the string is : ";
                    cout<<Length(str3);
                    Again();
                    break;
          case 5:
                    Input2(str1);
                    cout<<"Upper Case : ";
                    cout<<L_to_U(str1);
                    Again();
                    break;
          case 6:
                    Input2(str1);
                    cout<<"Reversed string : ";
                    cout<<Reverse(str1);
                    Again();
                    break;
          default:
                    cout<<"Wrong Input";
                    Again();
                    break;
          }
          return 0;
}

void Again(){
          string str;
          cout<<"\nDo you want to do more operations - Y / N : ";
          cin>>str;
          cout<<"\n";
          if (str=="yes"||str=="y"||str=="Yes"||str=="YES"||str=="Y")
          {
                    main();
          }
          else
          {
                    exit(1);
        
          }
          cout<<endl;
}
