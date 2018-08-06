#include<iostream>
#include<cstring>
using namespace std;
int main()
{
 int q,l;
 cin>>q;
 for(l=0;l<q;l++)
 {
	int a,b,c,i,j;
	cin>>a>>b>>c;
	int d=c-b;
	int e=c-a;
	if(d<0)
	{
		d=-1*d;
	}
	else if(e<0)
	{
		e=-1*e;
	}
	else if(d<0&&e<0)
	{
		d=d*-1;	
		e=e*-1;
	}

     
	 if(d>e)
	 {
		cout<<"Cat A";
	 }
	 else if(e>d)
	 {
		cout<<"Cat B"<<"\n";
	 }
	 else
	 {
		cout<<"Mouse C"<<"\n";
	 }
	
 }
return 0;
}
