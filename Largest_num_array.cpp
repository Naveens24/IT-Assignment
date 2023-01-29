#include <iostream>
using namespace std;
void findThreeLargestElements(int arr[3]){
   int max;
    max = 0 ;
   for(int i = 0; i < 3; i++){
      if (arr[i] > max){
         max = arr[i];
      }

   }
   cout<<endl<<" largest elements of the array is "<<max;
}
int main(){
   int arr[3] = {23, 22, 87};
   
   cout<<"The array is : ";
   for(int i = 0; i < 3; i++) 
      cout<<arr[i]<<"   "; 
   findThreeLargestElements(arr);
   
   return 0;
}
