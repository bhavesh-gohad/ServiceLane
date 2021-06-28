#include<iostream>
using namespace std;

int ServiceLane(int s,int e,int n,int width[])
{
		int min=width[s];
		
		for(int i=s;i<=e;i++)
		{
			if(width[i] < min)
				min=width[i];
		}
		return min;
}

int main()
{
	int n,t;
	cin>>n>>t;
	
	int width[n];
	for(int i=0;i<n;i++)
	{
		cin>>width[i];
	}
	
	while(t--)
	{
		int s,e;
		cin>>s>>e;
		int ans = ServiceLane(s,e,n,width);
		cout<<ans<<endl;
	}
	return 0;
}
