#include<stdio.h>
main()
{

    int a=5,*b,**c,***d;
    b=&a;
    c=&b;
    d=&c;
    ***d=8; /*  ***d is **c, **c is *b and *b is a, therefore "***d = 8" will store 8 in a */

    printf("%d %u",a,b);    /*  b will return the content stored in it(i.e. address of a) */
    printf("\n%d %u",a,*b); /*  *b will return the content in a */
    printf("\n%d %u",a,&*b);/*  &*b  will return address of a, because *b means a */
    printf("\n%d %u",a,&b); /*  &b will return address of b */
    printf("\n%d %u",a,**c);/*  **c is *b and *b is a, therefore **c will return the content in a */
    printf("\n %d %u",a,***d);

    getch();


}
