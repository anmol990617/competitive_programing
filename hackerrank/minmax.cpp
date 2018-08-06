#include<iostream>
using namespace std;
int main()
{
 
 long long int *temp;
 long long int i,j,swap,min=0,max=0;
 temp=new long long  int[5];
 for(i=0;i<5;i++)
 {
  cin>> temp[i];
 }
 for(i=0;i<4;i++)
 {
  for(j=0;j<4-i;j++)
  {
   if(temp[j]>temp[j+1])

    { 
     swap=temp[j];
     temp[j]=temp[j+1];
     temp[j+1]=swap;
     }
   }   
 }
 for(i=0,j=4;i<4;i++,j--)
 {
  min+=temp[i];
  max+=temp[j];
 }
 cout<<min<<" "<<max;
return 0;
}



 
