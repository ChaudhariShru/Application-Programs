#include<stdio.h>
 void Display(int iNo)
 {
    int icnt =0;
    if (iNo<0)          //updator
    {
       iNo=-iNo;
    }
    for (icnt =1;icnt <=iNo;icnt++)
    {
        printf("%d\n",icnt);
    }
 }

 int main ()
 {
    int iValue =0;
    printf("Enter Frequency\n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
 }