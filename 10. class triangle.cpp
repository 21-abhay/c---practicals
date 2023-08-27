#include<iostream>
using namespace std;

class Triangle{
    private:
        float height;
        float base;
    public:
          Triangle(float h,float b){
                    height=h;
                    base=b;
          }
          void get_Sides(void){
                    cout<<"Height of a triangle "<<height<<endl;
                    cout<<"Base of a triangle "<<base<<endl;
          }
          float Area(Triangle &a){
                    float area;
                    area=0.5*(a.height*a.base);
                    return area;
          }
          float Area(){         
                    float area;
                    area=0.5*(height*base);
                    return area;
          }

        // = Operator Overloading

          void operator =(Triangle t){
                    height=t.height;
                    base=t.base;
          }

        // == Operator Overloading 

          bool operator ==(Triangle t){
                    if (height==t.height&&base==t.base)
                    {
                              return true;
                    }
                    else{
                              return false;
                    }
          }
};


int main(){
    Triangle t1(24,12);
    Triangle t2(22,8);
    
    //Calling Area function by passing object of a class as a parameter 
    float area1=t1.Area(t2);
    t2.get_Sides();
    cout<<"Area    : "<<area1<<endl;
    cout<<endl;

    //calling Area funciton without any parameter
    float area2=t1.Area();
    t1.get_Sides();
    cout<<"Area   : "<<area2<<endl;
    cout<<endl;


    cout<<"Sides odd triangle t1 before overloading = operator \n";
    t1.get_Sides();

    cout<<"\nAfter Overloading ' = ' operator \n";
    t1=t2;
    t1.get_Sides();
    cout<<"Area   : "<<t1.Area()<<endl;

    
    Triangle t3(26,16),t4(26,16);
    cout<<"\nAfter Overloading ' == ' operator \n\n";
    cout<<"Area1  : "<<t3.Area()<<endl;
    cout<<"Area2  : "<<t4.Area()<<endl;
    if (t3==t4)
    {
        
        cout<<"Area of triangles are equal "<<endl;
    }
    else
    {
        cout<<"Area is not equal"<<endl;
    }
    return 0;
}
