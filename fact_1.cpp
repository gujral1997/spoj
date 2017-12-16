#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	while(n--)
	{
		int input,array[200],i=0,number=0;
		memset(array,0,sizeof(array));
		cin>>input;
		int value=input;
		while(input!=0)
		{
			array[i]=input%10;
			input/=10;
			i++;
		}
		while(i--)
		{
			cout<<array[i];
		}
		i=0;
		int temp=0;
		for(int j=2;j<input;++j)
		{
			i=0;
			while(i<200)
			{
				number=array[i]*j;
				array[i]=temp%10;
				temp/=10;
				array[i]+=number%10;
				if(array[i]>=10)
				{
					temp+=array[i]/10;
					array[i]=array[i]%10;
				}
				number/=10;
				temp+=number;
				++i;
			}
		}
		i=199;
		while(array[i]==0)
		{
			i--;
		}
		for(int j=i;j>=0;j--)
		{
			//cout<<array[j];
		}
		cout<<endl;
	}
	return 0;
}