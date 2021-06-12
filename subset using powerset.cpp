#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int num=0;num<(1<<n);num++)
	{
		vector<int>ans;
		for(int i=0;i<n;i++)
		{
			if(num&(1<<i))
			{
				ans.push_back(a[i]);
			}
			for(auto it:ans)
			{
				cout<<it<<" ";
			}
	    }
	    cout<<"/n";
	}
	return 0;
}
