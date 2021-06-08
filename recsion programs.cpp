#include<iostream>
using namespace std;
void printNandone(int n)
{
	if(n==0)
	{
		return;
	}
	cout<<n<<" ";
	printNandone(n-1);
}
void printoneandN(int n,int k=1) //recursion using tail function.
{
	if(n==0)
	{
		return;
	}
	cout<<k<<" ";
	printoneandN(n-1,k+1);
}
int getsum(int n)             //recursion using getsum 
{
	if(n==0)
	{
		return 0;
	}
	return n+getsum(n-1);
}
int getsumdigits(int n)      //recursion using getssumdigit
{
	if(n==0)
	{
		return 0;
	}
	return n%10+getsumdigits(n/10);
}
int main()
{
	int n;
	cin>>n;
//  printNandone(n);
//	printoneandN(n);
//	cout<<getsum(n);
	cout<<getsumdigits(n);
	return 0;
}
