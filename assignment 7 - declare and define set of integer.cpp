#include<iostream>
#include<algorithm>
using namespace std;

class mySet {
          private:
                    int *arr;
                    int n;
          public:
                    mySet() {                                //   a.  Default Constructor to create an Empty Set 
                              n = 0;
                              arr = new int(0);
                    }
                    mySet(const mySet &s) {                  //   b.  Copy Constructor
                              n = s.n;
                              arr = s.arr;
                    }
                    ~mySet() {                               //   c.  Destructor
                              n = 0;
                              arr = new int(0);
                    }
     
                    void insert(int *arr,int n,int ele);      //   d.  function to add an element to the set
                    void remove(int *arr,int n,int ele);      //   e.  function to remove an element from the set
                    int count(int *arr,int n);                //   f.  function to count number of elements in the set
        
};

void mySet::insert(int *arr,int n,int ele){                   //    define insert function
          auto it = find(arr, arr+n, ele); //
	if(it == arr+n) {
	          int *newArr = new int(n+1);
	          copy(arr, arr+n, newArr);
                    delete[] arr;
                    arr = newArr;
                    arr[n] = ele;
                    n++;
          }

          for (int i = 0; i < n; ++i){
          	cout<<*(arr+i)<<" ";
	}
}

void mySet::remove(int *arr,int n,int ele) {                   //   defining remove function
          auto it = find(arr, arr+n, ele);   //
          if(it != arr+n) {
                    for(int i = it-arr; i < n-1; ++i) {
                              arr[i] = arr[i+1];
                    }
                    n--;
          }
          for (int i = 0; i < n; i++)
          {
            cout<<*(arr+i)<<" ";
          }
}

int mySet::count(int *arr,int n){                               //   defining count function
	for (int i = 0; i < n; i++)
          {
                    for (int j = i+1; j < n; j++)
                    {
                              if (*(arr+i)==*(arr+j))
                              {
                                        *(arr+j)=*(arr+(j+1));
                                        n--;
                              }
                    }
                            
          }
          return n;
}



int main(){
    mySet s;
    int num;
    cout<<"Enter the size of Set : ";
    cin>>num;
    int *array = new int[num];      // 
    cout<<"Enter the elements of the Set : \n";
    for (int  i = 0; i < num; i++)
    {
        cin>>*(array+i);   //  pointer offset notation
    }
    for (int i = 0; i < num; i++)
    {
        cout<<*(array+i)<<"  ";
    }
    cout<<endl;
    cout<<"\n========================================================================\n";
    cout<<"1.Add an element to the set.It must check for duplicates\n";
    cout<<"2.Remove an element from the set\n";
    cout<<"3.Count the number of element in the set\n";
    int ch;
    cout<<"what operation you want to perform : ";
    cin>>ch;
    switch (ch)
    {
    case 1:
        int el;
        cout<<"Enter the element you want to add : ";
        cin>>el;
        cout<<"Set : ";
        s.insert(array,num,el);
        break;
    case 2:
        int el2;
        cout<<"Enter the element you want to remove : ";
        cin>>el2;
        cout<<"Set : ";
        s.remove(array,num,el2);
        break;
    case 3:
        cout<<"Number of elements in the set are : "<<s.count(array,num); 
        break;
    default:
        cout<<" Wrong choice ";
        break;
    }
    return 0;
}
