#include<stdio.h>
int CountTwo(int iNo)
{
	int icnt=0;
while(iNo>0)
{
	if(iNo%10==2)
	{
		icnt++;
		
	}
	iNo=iNo/10;
}
return icnt;
}
int main()
{
 int iValue = 0;
 int bRet = 0;
 printf("Enter number\n");
 scanf("%d",&iValue);

 bRet = CountTwo(iValue);
 printf("%d",bRet);

 return 0;
}