// Structure array 
// take a input detials of the n student of the class
#include<stdio.h>
struct student 
{
    char name [30];
    int age ;
    int class;
};
int main()
{
    int n ;
    printf("Enter number student detail you want to enter : ");
    scanf("%d",&n);
    struct student s[n];
    for(int i =0 ;i<n;i++)
    {
        printf("Enter the detail of the studnet %d : ",i+1);
        printf("\nName : ");
        scanf("%s",s[i].name);
        printf("Age : ");
        scanf("%d",&s[i].age);
        printf("Class : ");
        scanf("%d",&s[i].class);
    }
    printf("\nSize of the structure: %d\n",sizeof(s));
    for(int i =0 ;i<n;i++)
    {
        printf("\n");
        printf("Name : %s\n",s[i].name);
        printf("Age : %d\n",s[i].age);
        printf("Class : %d\n",s[i].class);
    }
    
    return 0 ;
}