#include <stdio.h>

/////////////////////////////////////////////////////////
//Funtion Name :  DisplayFactors
//date :          2 May 2023
//Author :        Shruti Chaudhari
//Input :         Integer
//Output :         none
//////////////////////////////////////////////////////////

void DisplayFactors(int iNo)
{
    int iCnt =0;
    printf("Factors are  : \n");
    for (iCnt =1; iCnt<=iNo;iCnt ++)
    {
        if((iNo%iCnt)==0)
        {

        printf(" %d\n ",iCnt);
        }
       
    }
     printf("thanq");
}
/////////////////////////////////////////////////////////
//Entry point function
//////////////////////////////////////////////////////////
int main()
{
    int iValue =0;

    printf("Enter  a Number \n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);
    return 0;
}

