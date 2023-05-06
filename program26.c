#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iNumber)
{
    int iSum =0;
    int iCnt =0;

    for(iCnt = 1; iCnt <=(iNumber / 2);iCnt ++)
    {
        if((iNumber%iCnt)==0)
        {
            iSum= iSum + iCnt;
        }
    }

    if(iSum == iNumber)
    {
        return true;
    }
    else{
        return false;
    }

}

int main()
{
   int iValue = 0;
   bool bRet = false;

    printf("Enter a number\n");
    scanf("%d",&iValue);

    bRet = CheckPerfect(iValue);

    if(bRet== true)
    {
        printf("%d is Perfect",iValue);
    }
    else {
        printf("%d is not Perfect",iValue);
    }

    return 0;
}
