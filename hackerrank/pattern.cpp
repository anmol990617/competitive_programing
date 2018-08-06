#include<iostream>
using namespace std;


int main()
{
 int n,i,j;
 cin>>n;
 char a[n][n];
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   if(i+j>=n-1)
   {
    a[i][j]='#';
   }
   else
   {
    a[i][j]=' ';
   }
  }
 }
 for(i=0;i<n;i++)
 {
 
  for(j=0;j<n;j++)
  {
   cout<<a[i][j];
  }
   cout<<endl;

}
}

