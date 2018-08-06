#include<iostream>
using namespace std;
int partition(int *p,int start, int end);
void quicksort(int *p,int start,int end);
int main()
{
  int n,i,j,swap,count=0;
 cin>>n;
  int temp[n];
 for(i=0;i<n;i++)
 {
  cin>>temp[i];
 }
 
 quicksort(temp,0,n-1);
 for(i=0;i<n;i++)
 {
  cout<<temp[i];
 }
return 0;
}

void quicksort(int temp[],int start,int end)
{
 if(start<end)
 {
  int pindex=partition(temp,start,end);
  quicksort(temp,start,pindex-1);
  quicksort(temp,pindex+1,end);
 }
}

int partition(int temp[],int start, int end)
{
 int pivot=temp[end];
 int pindex=start;
 for(int i=start;i<end;i++)
 {
  if(temp[i]<pivot)
  {
   int swap;
   swap=temp[i];
   temp[i]=temp[pindex];
   temp[pindex]=swap;
   pindex++; 
  }
 }
 int swap;
 swap=temp[end];
 temp[end]=temp[pindex];
 temp[pindex]=swap;

return pindex;
}

 
  

