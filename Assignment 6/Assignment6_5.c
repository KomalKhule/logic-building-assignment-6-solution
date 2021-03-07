#include<stdio.h>
int Count(int iNo)
{
	int icnt=0;
while(iNo>0)
{
	if(iNo%10<6)
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
 int iRet = 0;
 printf("Enter number");
 scanf("%d",&iValue);
 iRet = Count(iValue);
 printf("%d",iRet);

 return 0;
}