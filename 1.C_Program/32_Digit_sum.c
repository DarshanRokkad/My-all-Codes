// using of while loop
// find the digit sum like if number is 382 then sum is 3+8+2=13
#include<stdio.h>
int main()
{
    int num , sum =0;
    printf("Enter the one number : ");
    scanf("%d",&num);
    while(num!=0)
    {
        sum = sum + (num%10);
        num = num/10;
    }
    printf("Sum of digit of %d is %d\n",num,sum);    

    return 0 ;
}

/*
#include<stdio.h>
int main()
{
    char num[20] ;
    int i ,a[20],sum=0;
    printf("Enter the one number : ");
    scanf("%s",num);
    for(i=0;num[i]!='\0';i++)
    {
        a[i]=num[i]-'0';
        sum = sum + a[i];
    }
    printf("Sum of digit of %s is %d\n",num,sum);    

    return 0 ;
}*/