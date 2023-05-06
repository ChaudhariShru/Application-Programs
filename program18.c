#include<stdio.h>
 void Display(int iNo)
 {
    int icnt =0;
    if (iNo<0)          //filter
    {
        printf("Enter +ve no");
        return;
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