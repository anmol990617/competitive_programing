#include<iostream>
using namespace std;

int main()
{
 int s,t,a,b,m,n,*temp,*p,count=0,sum=0;
 int i,x,z;
 cin>>s>>t>>a>>b>>m>>n;
 temp=new int[m];
 p=new int[n];
 for(i=0;i<m;i++)
 {
  cin>>temp[i];
 }
 for(i=0;i<n;i++)
 {
  cin>>p[i];
 }
 for(i=0;i<m;i++)
 {
  x=temp[i]+a;
  if(x>=s && x<=t)
  {
   count++;
  }
 }
 for(i=0;i<n;i++)
 {
  z=p[i]+b;
  if(z>=s && z<=t)
  {
   sum++;
  }
 }
 cout<<count<<endl<<sum;
 return 0;
 }

 
