#include<iostream>
#include<stdlib.h>

using namespace std;
class array
{
    int arr[20];
    public:
        void insert(int);
        void searching(int);
        void sorting(int);
        void display(int);
};
void array::insert(int num)
{
    int i;
    cout<<"\nEnter the numbers:\n";
    for(i=0;i<num;i++)
        {
            cin>>arr[i];
        }
}
void array::searching(int num)
{
    int num1,i;
    cout<<"\nEnter the element to search:";
    cin>>num1;
    for(i=0;i<num;i++)
        if(*(arr+i)==num1)
                cout<<"\nThe element is present!!!! that is:"<<*(arr+i);                
}
void array::sorting(int num)
{
    int i,j,temp;

    cout<<"\nsorting in ascending order:";
    for(i=0;i<num;i++)
    for(j=0;j<num;j++)
        {
                if(arr[i]<arr[j])
                    {
                        temp=arr[j];
                        arr[j]=arr[i];
                        arr[i]=temp;
                    }
        }
}
void array::display(int num)
{
    int i;
    cout<<"\nThe array is:\n";
    for(i=0;i< num;i++)
        cout<<*(arr+i)<<" ";
}
int main()
{
    array obj;
    int num;
    start:
    cout<<"Enter the no of elements(less than 20):";
    cin>>num;
    if(num>20)
        {
            cout<<"\nYou entered number greater than 20!!";
            goto start;
        }
    obj.insert(num);
    obj.display(num);
    obj.searching(num);
    obj.sorting(num);
    obj.display(num);
    return 0;
}