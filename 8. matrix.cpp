#include"iostream"
#include"process.h"
#include"stdlib.h"

using namespace std;
class matrix
{
    public:
    void sumofmatrix(void);
    void productofmatrix(void);
    void transposeofmatrix(void);
    //Exception for Addition of the matrices
    bool Addition_Ex(int row1,int row2,int col1,int col2){
            try
            {
                if(row1==row2&&col1==col2){
                    return true;
                }
                else
                {
                    throw false;
                }
                
            }
            catch(bool res)
            {
                return res;
            }
        }
    //Exception for the multiplication of matrices
    bool Product_Ex(int col1,int row2){
            try
            {
                if(row2==col1){
                    return true;
                }
                else
                {
                    throw false;
                }
                
            }
            catch(bool res)
            {
                return res;
            }
        }

};
void matrix::sumofmatrix(void)
{
     int a[10][10],b[10][10],c[10][10];
     int i,j,m,n,p,q;
     //Input rows and columns of matrices A[m][n] and B[p][q].
     cout <<"\nInput row & column of matrix-A \n" ;
     cin >> m >> n ;
     cout <<"\nInput row & column of matrix-B \n" ;
     cin >> p >> q ;
     if(Addition_Ex(m,p,n,q))            //Check if matrix can be added
        cout << "Matrices cannot be added\n";
     else{
         cout << "Matrices cannot be added\n";
         exit (0);
     }
     cout << "\nInput matrix-A \n" ;
     for(i= 0; i<m; i++)
     { for(j= 0; j<n ;j++)
      cin>> a[i][j];
      }
      cout<<"\nInput matrix-B \n";     //Loop to accept matrix B.
      for(i=0 ;i<p ;i++)
      { for(j=0 ; j<q; j++)
       cin>> b[i][j];
       }
    for(i=0;i<m;i++)
    { for(j= 0;j<n;j++)
     c[i][j]=a[i][j] + b[i][j];
     }
     cout<< "\nThe sum of two matrices is: \n";
     for(i=0;i<m;i++)
     { cout << "\n" ;
      for(j=0;j<n;j++)
      cout <<"   "<< c[i][j];
     }
}
void matrix::productofmatrix(void)
{
     int A[10][10],B[10][10],C[10][10],i,j,m,n,p,q,ip ;
    cout << "Input row & column of A matrix :\n" ;
    cin>> m >> n ;
    cout << "Input row & column of B matrix :\n" ;
    cin>> p >> q ;
    if(Product_Ex(n,p)) 
    cout << "Matrices can be multiplied.";
    else{
        cout <<"Matrices can not be multiplied."; exit(0);
       }
       cout<<"\nInput matrix-A :\n";
       for(i=0;i<m;++i)
       {
           for(j=0;j<n;++j)
          cin>> A[i][j];  }
          cout<<"\nInput matrix-B :\n";
       for(i=0;i<p;++i)
       {
           for(j=0;j<q;++j)
          cin>> B[i][j];  }
         for(i=0;i<m;++i)
          for(j=0;j<q;++j)
          { C[i][j]= 0 ;
          for(ip= 0;ip<n;++ip)
            C[i][j]+=(A[i][ip] * B[ip][j]);
            }
            cout<<"\nProduct of A & B matrices : ";
            for(i=0 ;i<m;++i)
            { cout <<"\n";
            for(j=0;j<q;++j)
            cout << C[i][j] << " ";
            }
}
void matrix::transposeofmatrix(void)
{
     int A[3][3],B[3][3],i,j;
cout<< "\nEnter the elements of a matrix : \n";
for(i=0;i<3;i++)
for(j=0;j<3;j++)
cin>>A[i][j];
cout << "\nGiven matrix is :";
for(i=0; i<3 ;i++)
{ cout <<"\n";
 for(j=0;j<3;j++)
 cout<<A[i][j]<<" ";
 }
 cout << "\nTranspose of a given matrix is :" ;
 for(i=0;i<3;i++)
 { cout <<"\n";
 for(j=0;j<3;j++)
 { B[i][j]= A[j][i];
 cout << B [i][j]<<" ";
 }
 }
}

int main()
{
    system("cls");
    int choice;
    char ch;
    cout<<"1.Addition \n";
    cout<<"2.Multiplication\n ";
    cout<<"3.Transpose \n";
    do
    {
    cout<<"Enter your choice : ";
    cin>>choice;
    switch(choice)
    {
        case 1: matrix m1;
               m1.sumofmatrix();
               break;
        case 2: matrix m2;
             m2.productofmatrix();
             break;
        case 3:matrix m3;
               m3.transposeofmatrix();
               break;
        default:cout<<"wrong choice";            
                       
    }
    cout<<"\n Do tou want to continue(Y/N) : ";
    cin>>ch;
     } while (ch=='y'||ch=='Y');
     return 0;
}