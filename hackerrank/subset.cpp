#include<iostream>
#include<algorithm>
#include<list>
using namespace std;

int main()
{
 int m,n,i,j,x,y,z,count=0,k=0,q=0,l=0;
 cin>>m>>n;
 int a[m], b[n];
 for(i=0;i<m;i++)
 {
  cin>>a[i];
 }
 for(i=0;i<n;i++)
 {
  cin>>b[i];
 }
 sort(a,a+m);
 sort(b,b+n);

 
 
 if(a[0]<b[0] || a[0]==b[0])
 {
  x=a[0];
 }
 else
 {
  x=b[0];
 }
 
 if(a[m-1]>b[n-1] || a[m-1]==b[n-1]) 
 {
  y=a[m-1];
 }
 else
 {
  y=b[n-1];
 }
 z=y-x;
 
  int c[z-1];
 for(i=x;i<=y;i++)
 {
  for(j=0;j<m;j++)
  {
   
   if(i%a[j]==0 )
   {
    l++;
    if(l==m)
    {c[k]=i;
    k++;
    l=0;
    break;
    }
   }
   else 
   {
    continue;
   }
  } 
 }
 for(i=0;i<k;i++)
 {
  cout<<c[i]<<" ";
 }
                   
 for(i=0;i<k;i++)
 {
  for(j=0;j<n;j++)
  {
   if(b[j]%c[i]==0)
   {
    q++;
    cout<<endl<<"q is"<<c[i];
    if(q==n)
    {
     count++;
     q=0;
     continue;
    }
   }
   else 
   {
    break;
   }
  }
 }

 cout<<endl<<count;

 

 return 0;
}


