#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a=1;
	int b=2;
	int c;
	printf("�п�J�@�Ӿ��:" );
	scanf("%d,%d,%d",&c,&a,&b);
	printf("1+2+3+...+%d=%d\n",c,((a+c)*c)/b);
	system("pause");
	return 0;
}
