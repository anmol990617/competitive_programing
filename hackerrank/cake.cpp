#include<iostream>
using namespace std;

int main()
{ 
 long int i,j=0,x;
 long int n;
 cin>>n;
 long int *temp;
 temp=new long int[n];
 for(i=0;i<n;i++)
 {
  cin>>temp[i];
 }
 x=temp[0];
 for(i=0;i<n;i++)
 {
  if(temp[i]>x)
  {
   x=temp[i];
   j=1;
  }
 else if (temp[i]==x)
  {
  j++;
  }
  else
  {
   continue;
  }
 }
 cout<<j;
 delete []temp;
return 0;
 }
