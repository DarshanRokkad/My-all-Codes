//Name: Darshan R M 
//Project name : Rock , paper and scissor similar to water , snake and gun

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void stonepaperscissor(char you , char com);
int main()
{   
    int num;
    char com , you ; 
    srand(time(0));
    num=rand()%100+1;
    if(num<33){
        com='r';
    }
    else if(num<66){
        com='p';
    }
    else{
        com='s';
    }
    printf("Enter a character 'r' for rock , 'p' for paper and 's' for scissor : ");
    scanf("%c",&you);
    stonepaperscissor(you,com);                //Important step
    printf("You choosed %c and computer has choosed %c", you , com);

    return 0;
}

void stonepaperscissor(char you , char com)
{
    if(you==com){
        printf("The game has drawn!\n");
    }
    else if((you=='r'&&com=='s')||(you=='p'&&com=='r')||(you=='s'&&com=='p')){
        printf("You have won the game!\n");
    }
    else{
        printf("You have lost the game!\n");
    }
}