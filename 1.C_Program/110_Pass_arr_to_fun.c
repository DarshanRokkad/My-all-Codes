// passing array to the function
// Calculating the and average of the marks of the student 
#include<stdio.h>
void sumAverage(int [],int );
int main()
{
    int i , n ;
    printf("Enter number of students : ");
    scanf("%d",&n);
    int marks[n];
    printf("Enter the marks of the students : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",marks+i);
    }
    printf("\nThe size of the array in main function is %d\n",sizeof(marks));
    sumAverage(marks,n);

    return 0;
}
void sumAverage(int marks[] , int n)
{
    int sum =0;
    for(int i=0;i<n;i++)
    {
        sum = sum + marks[i];
    }
    int ave= sum /n;
    printf("The size of the array in user defined is %d\n",sizeof(marks)); // gives the size of the pointer is 8 bytes
    printf("\nThe sum of the marks of the student is %d\n",sum);
    printf("The average marks of the students is %d \n",ave);
}