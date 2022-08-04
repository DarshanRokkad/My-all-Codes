#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int play ,i ,valid =0 ,game =1;
    for(i=0 ;i<10000;i++)
    {
        if(i==0)     
        {
            printf("\nDo you want to play the game if yes press 1 else press 0: ");
            scanf("%d",&play);
        }
        else 
        {
            printf("\nAre you excited play the game again if yes press 1 else press 0: ");
            scanf("%d",&play);
        }

        if(play==1)
        {
            int num , guess , guesscount = 3,count=1;
            srand(time(0));
            num = rand()%100+1;

            do
            {
                if(guesscount==0)
                {
                    printf("\nOh.. you are not able to guess the number\nyou are out of guesses\nBut the number is %d\n ",num);
                    break ;
                }
                else 
                {
                    printf("\nYou have %d attempts to guess\n",guesscount);
                    printf("Guess the number between 1 to 100 : ");
                    scanf("%d",&guess);
                    if ( guess > num )
                        printf("The number is Lesser than %d\n\n",guess);
                    else if (guess < num)
                        printf("The number is Greater than %d\n\n",guess);
                    else
                        printf("\nHey congratulations!\nYou guessed the number in %d attempts\n", count);
                    guesscount--;
                    count ++;
                }
            } while (guess!=num);
            game ++;
        }

        else if (play==0)
        {
            if(i==0)
            printf("\nOh.. no why don't you play the game \nyou would have tried game atleast once\n\n");
            else
            {
                if(valid == 0&&game !=1)
                printf("\nThanks for playing the game for %d times\n\n",i);
                else 
                {
                    if(valid == 0)
                    printf("\nOhh.. no , You have not played the game atleast once just entered the Game\n\n") ;
                    else 
                    printf("\nThanks for playing the game for %d times\n\n",i-valid);
                }
            }
            break;
        }

        else 
        {
            printf("\nInvalid entry !\nPlease enter the valid input \n");  
            valid ++;
        }    
    }

    return 0;
}