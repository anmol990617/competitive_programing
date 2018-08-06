#include<iostream>
using namespace std;

int main()
{
 int *temp,i,k,n,t,count;
 cin>>t;
 for(k=0;k<t;k++)
 { 
  count=0;
  cin>>n;
  temp=new int[n];
  for(i=0;i<n;i++)
  {
   cin>>temp[i];
  }
  for(i=0;i<n-1;i++)
  {
   if(temp[i]>temp[i+1])
   {
    count++;
   }
  else
  {
   continue;
  }
 }
 if(count>1)
 {
  cout<<"NO"<<endl;
 }
 else
 {
  cout<<"YES"<<endl;
 }
}

return 0;
}

  
