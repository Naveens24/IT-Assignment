//Average of 5 number using array

#include<iostream>
using namespace std;

int main()
{
    int sum , avg, arr[5] = {48, 6 , 18, 29, 13};
    
    // cout<<"array is: "<<arr[5];
    for(int i=0; i<5; i++)
    {
        sum += arr[i];
    }
    avg = sum/5;
    cout<<"Average of 5 number is : "<<avg;
    return 0;
}
