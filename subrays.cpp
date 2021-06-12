#include<iostream>
using namespace std;
int MaxCuts(int a,int b,int c,int n)
{
	//you got proper cuts
	if(n==0)
	{
		return 0;
	}
	//not possible with that length
	if(n<0)
	{
		return -1;
	}
	//find the max cut you can make with a,b,c
	int maxi=max(MaxCuts(n=a,a,b,c),max(MaxCuts(n-b,a,b,c),MaxCuts(n-c,a,b,c)));
	if(maxi==-1)
	{
		return-1;
	}
	return maxi+1;
}
int main()
{
	int n,a,b,c;
	cin>>n>>a>>b>>c;
	cout<<MaxCuts(n,a,b,c);
	return 0;
}
