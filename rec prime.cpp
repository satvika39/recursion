#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// logic for finding prime number using recursion 

bool isprime(int x)
{
	if(x==1)
	{
		return false;
	}
	for(int i=2;i*i<=x;i++)
	{
		if(x%i==0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	cout<<"prime logic using recursion"<<"\n";
	int n;
	cout<<"enter a number:";
	cin>>n;
	cout<<isprime(n);
	cout<<"\n"; 
	
	//logic using iteration
	cout<<"prime logic using iteration"<<"\n";
	int i,count=0;
	cout<<"enter a number:"<<"\n";
	cin>>n;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			count++;
			break;
		}
	}
	if(count==1)
	{
		cout<<n<<"is not a prime number";
	}
	else if(n==1)
	{
		cout<<"not prime";
	}
	return 0;
}
