#include<stdio.h>
int length(char*);
char* rev(char*,int);


main(){
    int x;
    char s[50]="yes"; /* you can also use scanf() to take upser input */
    char *y;
    y=&s;
    x=length(y);
    printf("%d",x);
    printf("\n%s",rev(y,x));

}


int length(char *p){
    int i;
    for(i=0;*(p+i)!='\0';i++){

    }
    printf("Length of string is : ");
    return(i);
    }

char* rev(char *u, int l){


    int t,i;
    for(i=0;i<=l/2;i++){

    t=*(u+i);
    *(u+i)=*(u+l-1-i);
    *(u+l-1-i)=t;
    }
    return(u);

}
