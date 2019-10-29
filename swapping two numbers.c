#include<stdio.h>
void swap(int*,int*);
main()
{
int x=5,y=10,z;
swap(&x,&y);
printf("x=%d, y=%d",x,y);
}

void swap(int *a,int *b){
    int c;
    c=*a;
    *a=*b;
    *b=c;



}
