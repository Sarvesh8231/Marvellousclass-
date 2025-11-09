#include<stdio.h>

int Display(int a)
{
    int iCnt = 0;
    int sum =0;
    for(int iCnt =1;iCnt<=a;iCnt++)
    {
       sum = sum + iCnt;

    }
    return sum ; 
}
int main()
{
    int iValue =0;
    printf("enter the frequency : \n");
    scanf("%d",&iValue);
   int ret = Display(iValue);
   printf("sum is %d",ret);
    return 0 ;


}