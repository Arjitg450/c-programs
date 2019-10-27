#include<stdio.h>
main()
{



int a[5]={1,2,3,4,5};
printf("%d",a[4]);

/*two dimensional array*/

int b[3][3],c[3][3],d[3][3],i,j;
printf("Enter numbers for matrix 1: ");
for(i=0;i<=2;i++)
{
    for(j=0;j<=2;j++)
        scanf("%d",&b[i][j]);
        }

printf("Enter numbers for matrix 2: ");
for(i=0;i<=2;i++)
{
    for(j=0;j<=2;j++)
        scanf("\n%d",&c[i][j]);

    }

for(i=0;i<=2;i++)
{
    for(j=0;j<=2;j++)
    {


    d[i][j]=b[i][j]+ c[i][j];
    printf("%d ",d[i][j]);
    }

}
printf("\n");


}
