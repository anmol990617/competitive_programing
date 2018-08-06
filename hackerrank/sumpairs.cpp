#include<iostream>
using namespace std;

int main()
{
 int n,*temp,k,count=0;
 cin>>n>>k;
 int i,j;
 temp=new int[n];
 for(i=0;i<n;i++)
 {
  cin>>temp[i];
 }
 for(i=0;i<n;i++)
 {
  
  for(j=0;j<n;j++)
  {
   if(i<j)
   {
    if((temp[i]+temp[j])%k==0)
    {
     count++;
    }
   }
   else
   {
    continue;
   }
  }
 }
 cout<<count;
 return 0;
}

    
