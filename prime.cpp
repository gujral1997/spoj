#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int a;
	cin>>a;
	while(a--)
	{
		long int m,n;
	cin>>m>>n;
	if(m==1)
	{
		m++;
	}
	bool array[n+1];
	memset(array,true,sizeof(array));
	for(long int i=2;i*i<=n;++i)
	{
		if(array[m++])
		{
			for(long int j=i*2;j<=n;j+=i)
			{
				array[j]=false;
			}
		}
	}
	for(long int i=m;i<=n;++i)
	{
		if(array[i]==true)
		{
			cout<<i<<endl;
		}
	}
	cout<<endl;
	}
	return 0;
}