// Structure pointer
// and use of typedef
// using of arrow operator 
#include<stdio.h>
typedef struct employee
{
    char name[20];
    int age ;
    int salary;
}emp;
int main()
{
    emp e;
    emp *ptr ;
    // structure pointer can store the address of the structure
    ptr = &e;
    // Taking input
    printf("Enter the detials of the student : ");
    printf("\nName : ");
    gets(e.name);
    printf("Age : ");
    scanf("%d",&e.age);
    printf("Class : ");
    scanf("%d",&e.salary);
    // printing output 
    printf("\nSize of the structure: %d\n",sizeof(ptr)); // gives the size of the pointer 
    printf("Name : %s\n",ptr->name);
    printf("Age : %d\n",ptr->age);
    printf("Class : %d\n",ptr->salary);

    return 0 ;
}