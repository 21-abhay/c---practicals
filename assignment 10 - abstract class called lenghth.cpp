#include<iostream>
using namespace std;

class Length{
    protected:
        float length;
    public:
        virtual void print() = 0;
};

class MetricLength : public Length{
    float metriclength;
    public:
        MetricLength(float l){
            length = l;
        }
        float convert_to_cm(){
            metriclength = length/10;
            return metriclength;
        }
        float convert_to_m(){
            metriclength = length/100;
            return metriclength;
        }
        void print(){
            cout<<"Length in mm is :"<<length<<endl;
            cout<<"Length in cm is : "<<convert_to_cm()<<endl;
            cout<<"Length in  m is : "<<convert_to_m()<<endl;
        }
};

class EnglishLength : public Length{
    float englishlength;
    public:
    EnglishLength(float l){
            length = l;
        }
        float convert_to_inch(){
            englishlength = length/25.4;
            return englishlength;
        }
        float convert_to_feet(){
            englishlength = length/305;
            return englishlength;
        }
        float convert_to_yard(){
            englishlength = length/904;
            return englishlength;
        }
        void print(){
            cout<<"Length in mm is     :"<<length<<endl;
            cout<<"Length in inches is : "<<convert_to_inch()<<endl;
            cout<<"Length in feets  is : "<<convert_to_feet()<<endl;
            cout<<"Length in yards  is : "<<convert_to_yard()<<endl;
        }
};



int main(){
    cout<<"Metric-Length : \n";
    MetricLength l1(1000);
    l1.print();
    cout<<"\nEnglish-Lenght  : \n";
    EnglishLength l2(1000);
    l2.print();
    return 0;
}
