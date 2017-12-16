#include <stdio.h>
int reverse(int i)
	{
	int answer=0,number=0,count=0;
	while(i!=0)
	{
		answer*=10;
		number=i%10;
		answer+=number;
		i/=10;
		count++;
	}
	return answer;
	}
int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	int a,b,c;
	for(int i=0;i<n;++i)
	{
	scanf("%d %d",&a,&b);
	a=reverse(a);
	b=reverse(b);
	c=a+b;
	c=reverse(c);
	printf("%i\n",c);
	}
	return 0;
}