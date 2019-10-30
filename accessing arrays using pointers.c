#include<stdio.h>
#include<conio.h>
#include<string.h>

main(){



     int arr[5]={34,234,234,53,678};
     int i,*b;
     b=&arr[0];

          for(i=0;i<5;i++){
            printf("\n%d",*(b+i));

     }


     }
