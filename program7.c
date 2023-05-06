// Check whether the number  is Divisible by 3 and 5 or not

#include <stdio.h>  //for printf scanf 
#include <stdbool.h>  //for bool data type

///////////////////////////////////////////
//
// Function name :   CheckDivisible
// Input:            Integer 
// Output :          Boolean
// Description :     Checks whether input  is Divisible by 3 and 5 or not
// Author :          Shruti Dattatray Chaudhari
// Date :            25/04/2023
//
//////////////////////////////////////////
 bool CheckDivisible( int iNo)
 {
    if (((iNo % 3)==0) && ((iNo % 5)==0))
    //if((iNo % 3)&&(iNo % 5)==0) parameters chuket tyamule output chukicha show hota...
    {
        return true ;
    }
    else
    {
        return false ;
    }
 }
//////////////////////////////////////////
// Entry point Function
//////////////////////////////////////////
int main()
{
    int iValue=0;           //Variable to accept input
    bool bRet = false;      //Variable to accept return value 

    printf("Please enter no. to check whether it is Divisible by 3 and 5 : ");
    scanf ("%d",&iValue);

    bRet = CheckDivisible(iValue);  //Function call

    if(bRet == true)
    {
        printf(" %d  is Divisible by 3 and 5",iValue);
    }
    else
    {
        printf("%d is not  Divisible by 3 and 5",iValue);
    }
    return 0;
}
