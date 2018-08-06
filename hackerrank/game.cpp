#include<iostream>
using namespace std;

int main()
{
 int n,*temp,count=0,sum=0;
 long int i;
 cin>>n;
  temp=new int[n];
 for(i=0;i<n;i++)
 {
  cin>>temp[i];
 }
  
 long int x;
 x=temp[0];
 for(i=1;i<n;i++)
 {
  if(temp[i]>x)
  {
   x=temp[i]; 
   count++;
  }
  else
  {
   continue;
  }
 }
 long int z;
 z=temp[0];
 for(i=1;i<n;i++)
 {
  if(temp[i]<z)
  {
   z=temp[i];
   sum++;
   }
  else 
  {
   continue;
  }
 }
 cout<<count<<" "<<sum;
 return 0;
}

