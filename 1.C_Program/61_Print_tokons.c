#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// input = this is c 
// output = this 
//          is 
//          c
int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    int count =0 ;
    //Write your logic to print the tokens of the sentence here.
    for(int i =0 ;i<strlen(s);i++)
    {
      if(*(s+count)!='\0')
      {
        for(int j=0;j<strlen(s);j++)
        {
          if(*(s+count)!=' '&&*(s+count)!='\0')
          {
            if(*s!='\0')
            printf("%c",*(s+count));
            count++;            
          }
          else 
          {
            count++;
            break;
          }
        }
      }
      else 
      break;
      printf("\n");
    }
    
    return 0;
}