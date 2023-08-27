#include<iostream>
using namespace std;


void Divide(float n1,float n2){
    try
    {
          if(n2==0){
                    throw n2;
          }
          else
          {
                    cout<<"Result of p/q : "<<n1/n2;
          }
        
    }
    catch(float n2)
    {
          cout<<"Denominator should not be equal to "<<n2<< '\n';
    }
}



int main(){
          float p,q;
          cout<<"p : ";
          cin>>p;
          cout<<"q : ";
          cin>>q;
          Divide(p,q);
          return 0;
}
