#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkZero(int iNo)
{

 if(iNo<0)
 {
 iNo = -iNo;
 }
 while(iNo>0)
 {
	if((iNo%10)!=0)
	{
		iNo=iNo/10;
	}
	else
	{
		return TRUE;
	}
 }
}
int main()
{
 int iValue = 0;
 BOOL bRet = FALSE;

 printf("Enter number\n");
 scanf("%d",&iValue);
 bRet = ChkZero(iValue);
 if(bRet == TRUE)
 {
 printf("It Contains Zero");
 }
 else
 {
 printf("There is no Zero");
 }
 return 0;
} 
