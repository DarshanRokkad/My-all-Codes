#include <stdio.h> // header file for Standard Input Output
#include <stdlib.h> // header file for Standard Library

int main() {

    int G , S , A ,B ;
    scanf("%d %d %d %d",&G,&S,&A,&B);
    int gold_cost = G*A ;
    int silver_cost= S*B;
    if (gold_cost>=silver_cost)
    {
        printf("Gold");
    }
    else
    {
        printf("Silver");
    }

    //Your code here
    return 0;
}