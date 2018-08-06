#include<iostream>
using namespace std;

int main()
{
 int n,*temp,d,m,i,count=0,j,sum;
 cin>>n;
 temp=new int[n];
 
 for(i=0;i<n;i++)
 {
  cin>>temp[i];
 }
 cin>>d>>m;
 for(i=0;i<n;i++)
 {
  j=i;
  sum=0;
  while(j<i+m)
  {
   sum+=temp[j];
   if(j==i+m-1)
   {
    if(sum==d)
    {
     count++;
    }
   }
   j++;
   }
 }
 cout<<count;

return 0;
}


