#include<stdio.h>
int factorial(int);
main(){
    int x,y;
    printf("Enter the number");
    scanf("%d",&x);
    y=factorial(x);
    printf("%d",y);
    }

int factorial(int a){
    if(a==0 || a==1)
        return 1;
    else
        return(a*factorial(a-1));
        }


