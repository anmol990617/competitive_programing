#include<iostream>
using namespace std;

int main()
{
 long int i,j,x1,v1,x2,v2,z=0,a,b,d;
 cin>>x1>>v1>>x2>>v2;
 if(x1>x2)
 {
  if(v2-v1==0 || v1-v2<0) 
  {
   cout<<"NO";
   exit(1);
  }
  
 else
 {
  d=x1;
 }
}
 else 
 {
  d=x2;
 }

 for(i=d;i<100000;i++)
 {
  if(i%v1==0 && i%v2==0)
  {
   a=i-x1;
   b=i-x2;
   if(a/v1==b/v2)
   {
    z++;
   }
   else
   {  
    continue;
   }
  }
 }
 if(z>0)
 {
  cout<<"YES";
 }
 else
 {
  cout<<"NO";
 }
return 0;
}

 
