#include<iostream>
#include<stdlib.h>

using namespace std;
class number
{
    int num;
    public:
        void getinfo();
        void add(number &,number &);
        void sub(number &,number &);
        void divi(number &,number &);
        void mul(number &,number &);
        void display();
};
void number::getinfo()
{
    int num1;
    cout<<"Enter the number:";
    cin>>num1;
}
void number::add(number &obj2,number &obj3)
{
    num=obj2.num+obj3.num;
}
void number::sub(number &obj2,number &obj3)
{
    num=obj2.num-obj3.num;
}
void number::mul(number &obj2,number &obj3)
{
    num=obj2.num*obj3.num;
}
void number::divi(number &obj2,number &obj3)
{
    num=obj2.num/obj3.num;
}
void number::display()
{
    cout<<num;
}
int main()
{
    number obj1,obj2,obj3;
    
    int num3;
    obj1.getinfo();
    obj2.getinfo();
    cout<<"\n------ENTER THE NUMBER TO PERFORM THE CASES------\n";
    cout<<"1.add\n2.subtract\n3.division\n4.multiplucation\n";
    cin>>num3;
    switch(num3)
        {
            case 1: obj3.add(obj1,obj2);
                    cout<<"\nThe sum is:";
                    obj3.display();
                    break;
            case 2: obj3.sub(obj1,obj2);
                    cout<<"\nThe subtraction is:";
                    obj3.display();
                    break;
            case 3: obj3.mul(obj1,obj2);
                    cout<<"\nThe divion is:";
                    obj3.display();
                    break;
            case 4: obj3.divi(obj1,obj2);
                    cout<<"\nThe multiplication is:";
                    obj3.display();
                    break; 
            default:
                    printf("ERROR");              
        }
    
    return 0;
}