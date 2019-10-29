#include<stdio.h>
main(){
 int x,*y;
 int arr[4] ={1,2,3,4};
 y=&arr;
 y=y+1;
 printf("&arr=%d y=%d",&arr,y);
}
