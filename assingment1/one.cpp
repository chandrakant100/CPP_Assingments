#include<iostream>
using namespace std;
float volume(float length=0,float breadth=0,float height=0)
{
        float vol;
        vol=(length*breadth*height);

        return vol;
}
int main()
{   
    float len,breadth,height,vol;

    cout<<"\nEnter the length of the box:";
    cin>>len;
    cout<<"\nEnter the breadth of the box:";
    cin>>breadth;
    cout<<"\nEnter the height of the box:";
    cin>>height;

    vol=volume(len,breadth,height);

    cout<<"\nThe volume of the box is:"<<vol;

   return 0; 
}