#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int length,counter=0;
	scanf("%d",&length);
	int number;
	for(int i=0;i<length;++i)
	{
		scanf("%d",&number);
		int j=5;
		while(number/j!=0)
		{
			counter+=number/j;
			j*=5;
		}
		printf("%d\n",counter);
		counter=0;
	}
	return 0;
}