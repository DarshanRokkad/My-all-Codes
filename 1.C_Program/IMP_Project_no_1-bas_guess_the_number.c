#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    int num , guess , count=1;
    srand(time(0));
    num=rand()%100+1;

    do
    {
        printf("\nGuess the number : ");
        scanf("%d",&guess);
        if(guess<num)
        printf("Greater number than %d\n",guess);
        else if (guess>num)
        printf("Lesser number than  %d\n",guess);
        else 
        printf("Congratulations! you gueesed the game with %d attempts\n",count);
        count++;
    } while (guess!=num);
    

    return 0 ;
}