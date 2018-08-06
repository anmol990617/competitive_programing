#include<iostream>
using namespace std;
#include<iomanip>


int main()
{
  
 int s;
  float *temp,p=0,n=0,z=0;
  float d1,d2,d3;
 cin>>s;

 temp=new float[s];
 for(int i=0;i<s;i++)
 {
  cin>>temp[i];
 }
 for(int i=0;i<s;i++)
 {
  if(temp[i]<0)
  { 
   n++;
  } 
  else if(temp[i]>0)
  {
   p++;
  }
  else
  {
   z++;
  }
 }
 cout<<p<<" "<<n<<" "<<z<<endl;
 d1=p/s;
 d2=n/s;
 d3=z/s;
 cout<<fixed<<setprecision(6)<<d1<<endl;
 cout<<fixed<<setprecision(6)<<d2<<endl;
 cout<<fixed<<setprecision(6)<<d3<<endl;
return 0;
}

