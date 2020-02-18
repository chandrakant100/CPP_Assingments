#include<iostream>
using namespace std;
int sum(int *arr,int num)
{
    int sum=0;
    cout<<"\nThe sum of elements of the array are:\n";
    for(int i=0;i<num;i++)
        sum+=*(arr+i);

    return sum;
}
int sum(int *arr,int num,char ch)
{
    int sum=0;
    if(ch=='E')
    {
    for(int i=0;i<num;i+=2)
        sum+=*(arr+i);
    }
    else if(ch=='O')
    {
        for(int i=1;i<num;i+=2)
        sum+=*(arr+i);
    }
    return sum;    
}
int main()
{
    int arr[20],num,su1,su2;
    char ch;
    
    cout<<"\nEnter the number of elements of the array(less than 20):";
    cin>>num;

    cout<<"\nEnter the elements of the array:\n";
    for(int i=0;i<num;i++)
        cin>>arr[i];

    cout<<"\nThe elements of the array are:\n";
    for(int i=0;i<num;i++)
        cout<<*(arr+i)<<" ";    
     
    su1=sum(arr,num);

    cout<<"\nThe sum of all elements of the array is:"<<su1;

    cout<<"\nEnter 'E' to print the Even elements or Enter 'O' to print the odd elements:";
    fflush(stdin);
    cin>>ch;
    if(ch=='E'){
        su2=sum(arr,num,ch);
        cout<<"\nThe sum of EVEN position elements is:"<<su2;
    }
    else
    {
         su2=sum(arr,num,ch);
        cout<<"\nThe sum of ODD position elements is:"<<su2;
    }
    
    
    return 0;
}