/**
��дһ����IsPrime,�ж�ĳ������2���������Ƿ�Ϊ����
*/
#include<stdio.h>
int IsPrime(int n)
{
	if( n<2 )
		return 0;
	for( int i=2;i<=n/2;i++ )
	{
		if( n%i==0 )
			return 0;
	}
	return 1;
}
int main()			//����IsPrime����
{
	int i;
	for( i=-5;i<50;i++ )
		printf("%d	%d \n",i,IsPrime(i));
	return 0;
}