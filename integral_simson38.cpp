#include<iostream>
using namespace std;

float f(float x)
{
return x*x;
}


int main()
{

float h, n;
cout << "Enter step number "<<endl;
cin>>n;

float a ,b;
cout << "Enter the range of integral:"<<endl;
cout<<"a= ";
cin >>a;
cout <<"b=";
cin>>b;


float L,K;
float I;
    
    h=(b-a)/n;       //initialize step size
    L= h*(3/8)*(f(a)+ f(b));

      if (n<=2)
      K=0;
    
      else
       {
        K=0;  
          for (int i=1 ;i<=(n-1);i++)
        {
		K= K+(h*(9/8)*f(a+i*h));
        }
       }
I= L+ K;
cout <<endl;
cout<<"h="<<h<<endl <<"K="<< K << endl <<"L="<<L << endl <<"I= "<< I << endl ;


return 0;
}
