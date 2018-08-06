#include<iostream>
using namespace std;
#include<algorithm>

int main()
{ 
 int i,n,*temp, sum=0,count=0;
 cin>>n;
 temp=new int[n];
 for(i=0;i<n;i++)
 {
  cin>>temp[i];
 }

 sort(temp,temp+n);

 int x=temp[0];
 for(i=0;i<n;i++)
 {
  if(temp[i]==x)
  {
   count++;
   if(i==n-1)
   {
    sum+=count/2;
   x=temp[i];
   count=1;
  }
  }
  else if(temp[i]!=x ) 
  {
  
   sum+=count/2;
   x=temp[i];
   count=1;
  }
 }
 cout<<sum;
 delete[]temp;
 return 0;
}

