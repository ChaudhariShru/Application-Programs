#include<stdio.h>

void DisplayB(int iNo)

{
    int iCnt=0;

    iCnt = iNo;
    while(iCnt>=1)
    {
        printf("%d\t",iCnt);
        iCnt --;
    }
}

int main()
{
    int iValue=0;

    printf("Enter Number  :  ");
    scanf("%d",&iValue);

    DisplayB(iValue);
    return 0;
}