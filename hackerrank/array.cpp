#include<iostream>
using namespace std;

int main()
{
 int n,i,j,sum=0,add=0;
 cin>>n;
 int temp[n][n];
 for(i=0;i<n;i++)
  {
   for(j=0;j<n;j++)
    {
     cin>>temp[i][j];
    }
  }
 for(i=0;i<n;i++)
 { 
  for(j=0;j<n;j++)
  {
   
   if(i-j==0)

   {
    sum+=temp[i][j];
   }
  
   else
   {
    continue;
   }
  }
}
 for(i=0;i<n;i++)
 { 
  for(j=0;j<n;j++)
  {
   if(i+j==n-1)
   {
    add+=temp[i][j];
   } 
   else
    {
     continue;
    }  
 }
} 
if(sum>add)
{
cout<<sum-add;
}
else
{
cout<<add-sum;
}
return 0;
}

