// to print the candidates who won the election
#include<stdio.h>
struct election
{
    char name[20];
    int votes;
};
int main()
{
    int n ;
    printf("Enter number of candidaties in election : ");
    scanf("%d",&n);
    ele e[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the name of candidate %d : ",i+1);
        scanf("%s",&e[i].name);
        printf("Enter the number of votes of the candidate %d : ",i+1);
        scanf("%d",&e[i].votes);
    }
    int max_Votes = e[0].votes, index_Count = 0;
    for(int i =0;i<n;i++)
    {
        if(max_Votes<=e[i].votes)
        {
            index_Count = i ;
        }
    }
    printf("The winner of the election is %s and number of votes are %d : ",e[index_Count].name,e[index_Count].votes);
    
    return 0 ;
}