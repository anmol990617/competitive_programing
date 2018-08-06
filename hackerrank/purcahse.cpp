#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int main()
{
 int m,n,i,j;
 long int b;
 cin>>b>>n>>m;
 long int p[n]={0},sum=0;
 long int t[m]={0};
 for(i=1;i<=n;i++)
 {
  cin>>p[i];
 }
 for(i=1;i<=m;i++)
 {
  cin>>t[i];
 }
 sort(p,p+n+1);
 sort(t,t+m+1);
  
 for(i=n;i>0;i--)
 {
  for(j=m;j>0;j--)
  {
    if((p[i]+t[j])<b||(p[i]+t[j])==b)
   {
    if(sum<(p[i]+t[j]))
   {
     sum=p[i]+t[j];
    }
   }
 }
 }
 if(sum==0)
 {
  cout<<"-1";
 }
 else 
 {
  cout<<sum;
 }

return 0;
 }


 
 
