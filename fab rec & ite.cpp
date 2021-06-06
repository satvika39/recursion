#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//login for finding fibanocci series using recursion
int fibonacci(int n)
{
	if((n==1)||(n==0))
	{
		return n;
	}
	else
	{
		return fibonacci(n-1)+fibonacci(n-2);
	}
	
}
int main()
{
	int n;
	int i=0;
	cout<<"enter n value:";
	cin>>n;
	cout<<"\nFibonacci series:";
	while(i<n)
	{
		cout<<" "<<fibonacci(i);
		i++;
	}
	
	//logic using iterative
	int n1=0,n2=1,n3,number;
	cout<<"enter the number of elements:";
	cin>>number;
	cout<<n1<<" "<<n2<<" "; //printing 0 and 1
	for(i=2;i<number;i++)   //loop starts from 2 because 0 and 1 are already printed
	{
		n3=n1+n2;
		cout<<n3<<" ";
		n1=n2;
		n2=n3;
	}
	return 0;
}
