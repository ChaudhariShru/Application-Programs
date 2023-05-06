#include<stdio.h>
typedef unsigned long int ULONG;

ULONG Factorial(int iNo)

{
    int iCnt=0;
    inULONG  iResult=1;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
       iResult = iResult*iCnt;
    }
    return iResult; 
}

int main()
{
    int iValue=0;
    ULONG iRet=0;

    printf("Enter Number  :  ");
    scanf("%d",&iValue);

    iRet=Factorial(iValue);

    printf("Result is   : %d",iRet);
    return 0;
}