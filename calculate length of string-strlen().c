#include<stdio.h>
int length(char*);

main(){
    int x;
    char s[50]="One Day or Day One";
    char *y;
    y=&s;
    x=length(y);
    printf("%d",x);


}

int length(char *p){
    int i;
    for(i=0;*(p+i)!='\0';i++){
    }
    printf("Length of string is : ");
    return(i);






}

