#include<stdio.h>
main()
{
    while(1)
    {


    int choice,x,y,j,k,ad,sub;
    printf("\n1: Addition");
    printf("\n2: Subtraction");
    printf("\n3: Exit");


    printf("\nEnter your choice");



    scanf("%d",&choice);





    switch(choice)
    {
    case 1:

        printf("\nEnter two numbers");
        scanf("%d%d",&x,&y);
        ad=x+y;
        printf("%d",ad);
        break;

    case 2:

        printf("\nEnter two numbers");
        scanf("%d%d",&j,&k);
        sub=j-k;
        printf("%d",sub);
        break;

    case 3:
        exit(0);
    default:
        printf("\nInvalid Choice");


    }


    }


}
