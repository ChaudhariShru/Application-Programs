#include<stdio.h>
#include<stdbool.h>

  bool CheckPrime (int iNo)
{
    int iCnt = 0;
    

    for (iCnt = 2;iCnt <=(iNo / 2);iCnt++)
    {
        if((iNo % iCnt )==0)
        {
            break;
        }
    }
    if(iCnt==(iNo /2)+1)
    {
        return true;
    }
    else 
    {
        return false;
    }
  

}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter a Number : \n");
    scanf("%d",&iValue);

    bRet =CheckPrime(iValue);

    if(bRet == true)
    {
        printf("%d PRIME",iValue);
    }
    else{
        printf("%d NOT PRIME",iValue);
    }


    return 0;
}

//time complexity     O(N/2)    factor nasal trrrr
//                    O(X)      factor asal trr here X is pahila kuthla pn factor yamule apn baher padnar