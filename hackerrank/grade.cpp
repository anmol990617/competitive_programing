#include<iostream>
using namespace std;

int main()
{
 int *temp,i,j,z,x,n;
 cin>>n;
 temp=new int[n];
 for(i=0;i<n;i++)
 {
  cin>>temp[i];
 }
 for(i=0;i<n;i++)
 {
  if(temp[i]>=38)
  {
  for(j=1;j<22;j++)
  {
   if(temp[i]>5*j)
   {
    continue;
   }
   else
   {
    z=5*j;
    x=z-temp[i];
    if(x<3)
    {
     temp[i]=z;
    }
   }
  }
}

  else
  {
   continue;
  }
}
 for(i=0;i<n;i++)
 {
  cout<<temp[i]<<endl;
 }


return 0;
}

