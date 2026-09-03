#include<iostream>
using namespace std;

int main()
{
    int arr[8]={7,2,3,4,5,6,8,9},avg,sum=0;
    
    for(int i=0; i<8; i++)
    {
        sum = sum+arr[i];
        avg = sum/8;
    }
    cout<<" Average is : ";
    for(int i=0; i<8; i++)
    {
        if(avg<arr[i])
        {
            cout<<arr[i]<<endl;
        }
    }

    return 0;
}