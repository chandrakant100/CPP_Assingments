#include<iostream>
#include<math.h>
using namespace std;
void roots(float &r1,float &r2,float a,float b,float d)
{
   r1=((-b)+sqrt(d))/2*a;
   r2=((-b)-sqrt(d))/2*a;

}
int main()
{
    float a,b,c,d;
    float r1,r2;

    cout<<"The quadratic equation is in the form:\nAx^2+Bx+C";

    start:
    cout<<"\nEnter the constants for A,B,C respectively:\n";
    cin>>a>>b>>c;
    d=(b*b)-4*a*c;
    if(d<0){
        cout<<"\nThe roots will be nagative\nPlease retry!!";
        goto start;
    }
    else
    {
        roots(r1,r2,a,b,d);     
    }

    cout<<"\nThe roots are:"<<r1<<" and "<<r2;
    

    return 0;
}