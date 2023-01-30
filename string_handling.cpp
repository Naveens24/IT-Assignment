#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
char str1[100];
char str2[100];
cout<<"Enter your name :- ";
gets(str1);
cout<<"Confirm your name :- ";
gets(str2);
int res=strcmp(str1,str2);
cout<<"\n-------------------------------------------------------------\n";
if(res==0)

cout<<"\n*****Your name is correct.*****\n";
else
cout<<"\nYour name is not correct please correct your name. \n\n";
cout<<"\n-------------------------------------------------------------\n";
return 0;
}
