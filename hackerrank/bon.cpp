#include<iostream>
using namespace std;

int main()
{
 long int *temp,i,sum=0,n,k,b;
 cin>>n>>k; 
 temp=new long int[n];
 
 for(i=0;i<n;i++)
 {
  cin>>temp[i];
 }
 cin>>b;
 for(i=0;i<n;i++)
 {
  if(i!=k)
  {
   sum+=temp[i];

  }
  else if(i==k)
  {
   continue;
  }
 }

 if((sum/2)==b)
 {
  cout<<"Bon Appetit";
 }
 else
 {
 cout<<b-(sum/2);
 }
 delete[]temp;
 return 0;
 
}
 
