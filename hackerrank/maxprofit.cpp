#include<iostream>
using namespace std;

int main()
{
 long int *temp,*p,n,i,k,j,count=0,x;
 cin>>n;
 temp=new long int[n];
 p=new long int[n-2];
 for(i=0;i<n;i++)
 {
  cin>>temp[i];
 }
 for(i=0;i<n-1;i++)
 {
  p[i]=temp[i];
  for(j=i+1;j<n;j++)
  {
   if(temp[j]>temp[i])
   {
    count++;
    if(count<=3)
    {
     for(k=0;k<n-2;k++)
     {
      p[k]*=p[j];
     }
    }
    else
    {
      p[k]=0;
      break;
    }
   }
  }
 x=p[0];
 for(i=1;i<n-2;i++)
 {
  if(p[i]>x)
  {
   x=p[i];
  }
  else
  {
   continue;
  }
 }
}
 cout<<x;

 return 0;

 }

   
  
  
