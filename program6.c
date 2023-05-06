// Check whether the number is Even or Odd

#include <stdio.h>  //for printf scanf 
#include <stdbool.h>  //for bool data type

///////////////////////////////////////////
//
// Function name :   CheckEvenOdd
// Input:            Integer 
// Output :          Boolean
// Description :     Checks whether input is even or odd
// Author :          Shruti Dattatray Chaudhari
// Date :            25/04/2023
//
//////////////////////////////////////////
 bool CheckEvenOdd( int iNo)
 {
    if ((iNo % 2)==0)
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

    printf("Please enter no. to check whether it is even or odd : ");
    scanf ("%d",&iValue);

    bRet = CheckEvenOdd(iValue);  //Function call

    if(bRet == true)
    {
        printf(" %d is Even",iValue);
    }
    else
    {
        printf("%d is Odd",iValue);
    }
    return 0;
}
