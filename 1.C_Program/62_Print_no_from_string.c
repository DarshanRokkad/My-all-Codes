#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// print the number of numbers present in string
// input = a11472o5t6
// output = 0 2 1 0 1 1 1 1 0 0
//          0 1 2 3 4 5 6 7 8 9
int main() {

    //  Enter your code here. Read input from STDIN. Print output to STDOUT   
    char  *ptr;
    ptr = (char *)malloc(1024*sizeof(char));
    scanf("%[^\n]",ptr);
    ptr = realloc(ptr,strlen(ptr)+1);
    int a[10]={0,0,0,0,0,0,0,0,0,0},i;
    for( i =0 ;i<strlen(ptr);i++)
    {
        if(*(ptr+i)>='0'&&*(ptr+i)<='9')
        {
          if(*(ptr+i)=='0')
          a[0]++;
          if(*(ptr+i)=='1')
          a[1]++;
          if(*(ptr+i)=='2')
          a[2]++;
          if(*(ptr+i)=='3')
          a[3]++;
          if(*(ptr+i)=='4')
          a[4]++;
          if(*(ptr+i)=='5')
          a[5]++;
          if(*(ptr+i)=='6')
          a[6]++;
          if(*(ptr+i)=='7')
          a[7]++;
          if(*(ptr+i)=='8')
          a[8]++;
          if(*(ptr+i)=='9')
          a[9]++;
        }
    }
    for(i=0;i<10;i++)
    {
      printf("%d ",a[i]);
    }
    free(ptr);

    return 0;
}