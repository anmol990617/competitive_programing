#include<iostream>
using namespace std;

#include<cstring>

int main()
{
 long int n,x=0;
 char *ptr;
 cin>>n;
 long int count=0;
 long int up=0,down=0;

 ptr=new char[n];
 long int i;
 for(i=0;i<n;i++)
 {
  cin>>ptr[i];
 }
 
 for(i=0;i<n;i++)
 {
  if(ptr[i]=='U')
  {
   up++; 
  }
 else
 {
  down++;
 }
 if(down>up)
 {
  x=1;
 }

 if(x==1)
 {
   if((down-up)==0)
   {
    count++;
    down=0;
    up=0;
    x=0;
   }
  }
 }
 
 cout<<count;
return 0;
}

