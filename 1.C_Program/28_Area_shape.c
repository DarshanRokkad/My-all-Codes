// finding the area of the shape
#include<stdio.h>
int main()
{
    char shape ;
    int l,b,a,si,ar;
    float ra,are;
    printf("Enter \nr to find the area of the rectangle , \ns to find the area of the square and \nc to find the area of the circle: ");
    scanf("%c",&shape);
    switch(shape)
    {
        case 'r':
        printf("Enter the length and breadth of rectangle : ");
        scanf("%d %d",&l,&b);
        a = l*b;
        printf("The area of rectangle is %d\n",a);
        break;

        case 's':
        printf("Enter the length of side of the square : ");
        scanf("%d",&si);
        ar = si * si ;
        printf("The area of the square is %d\n",ar);
        break;

        case 'c':
        printf("Enter the radius of the circle : ");
        scanf("%f",&ra);
        are = 3.14 * ra * ra;
        printf("The area of the circle is %f\n",are);
        break;

        default:
        printf("Invalid input\n");
    }

    return 0 ;
}