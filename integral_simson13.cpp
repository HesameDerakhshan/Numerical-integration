#include<iostream>
using namespace std;

float f(float x)
{
return x*x*x;
}


int main()
{

float h, n;
cout << "Enter an even step number "<<endl;
cin>>n;

float a ,b;
cout << "Enter the range of integral:"<<endl;
cout<<"a= ";
cin >>a;
cout <<"b=";
cin>>b;


float L,K,M;
float I;
    
    h=(b-a)/n;       //initialize step size
    L= h/3*(f(a)+ f(b));

      if (n<=2)
      K=0;
    
      else
       {
        K=0;
        M=0;  
          for (int i=1 ;i<=(n-1);i=i+2)
        {
		K= K+(h*(4./3.)*f(a+i*h));
        }
        
         for (int i=2 ;i<=(n-1);i=i+2)
        {
		K= K+(h*(2./3.)*f(a+i*h));
        }
        
       }
       
I= L+ K+M;
cout <<endl;
cout<<"h="<<h<<endl <<"K="<< K << endl <<"L="<<L << endl <<"I= "<< I << endl ;


return 0;
}
