//Display jay ganesh 5 times 

#include<stdio.h>
///////////////////////////////////////////
//
// Function name :   Display
// Input:            Integer 
// Output :          Boolean
// Description :     Checks whether input  is Divisible by 3 and 5 or not
// Author :          Shruti Dattatray Chaudhari
// Date :            25/04/2023
//
//////////////////////////////////////////
void  Display(int iNo)
{
    int icnt =0;
    if (iNo <0)
    {
        printf("Please enter +ve no\n");
        return ;
    }
    for(icnt =1; icnt<=iNo;icnt++)
    {
        printf("Jay Ganesh\n");

    }
}

///////////////////////////////////////////////////
//Entry point func
/////////////////////////////////////////////////////
 int main()
 {
    int iValue=0;
    printf("frequency\n");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
 }
