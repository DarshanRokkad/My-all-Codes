// Structure in c 
#include<stdio.h>
struct student 
{
    char name[20];
    int age ;
    int class;
};
int main()
{
    struct student s ;
    // compile time intialization struct student s = {"Darshan",8 ,12};
    // Taking the structure input 
    printf("Enter the detials of the student : ");
    printf("\nName : ");
    gets(s.name);
    printf("Age : ");
    scanf("%d",&s.age);
    printf("Class : ");
    scanf("%d",&s.class);
    // Printing the structure members 
    printf("\nSize of the structure: %d\n",sizeof(s));
    printf("Name : %s\n",s.name);
    printf("Age : %d\n",s.age);
    printf("Class : %d\n",s.class);

    return 0 ;
}