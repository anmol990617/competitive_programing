#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
 long int n,i,j,*temp,*p,count;
  cin>>n;
 temp=new long int[n];
 p=new long int[6];

 for(i=0;i<n;i++)
 {
  cin>>temp[i];
 }
 for(i=1;i<=5;i++)
 {
  j=0;
  count=0;
  while(j<=n-1)
  {
   if(temp[j]==i)
   {
    count++;
    p[i]=count;
    j++;
   }
   else
   {
    j++;
   }
  }
 }

long int  x=p[1];
long int y;
for(i=1;i<=5;i++)
 {
  if(p[i]>x)
  {
   y=i;
  }
  else
  {
   continue;
  }
 }
 cout<<y;

return 0;
}
  
