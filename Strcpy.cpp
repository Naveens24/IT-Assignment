
#include<iostream.h>

#include<string.h>

int main()
{
char str1[50];
char str2[50];
int n;
cout<<"Type the word you want to copy : -    ";
gets(str1);
cout<<"how many times do you want to copy this word : -    ";
cin>>n;
cout<<"\n";
cout<<"\n****************************************************************\n";
for(int i=0;i<n;i++){
strcpy(str2,str1);
cout<<str2<<"\t";

 }
cout<<"\n****************************************************************\n\n";
return 0;
}
