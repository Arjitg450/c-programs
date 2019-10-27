#include <stdio.h>
#include <conio.h>
#include <math.h>

float f(float x,float y)
{
  return ((((x)*(x+1))-((3*(y*y*y))))/10);
  //y'=f(x,y)=equation
}

void main()
{
  float x0,y0,h,xn,yn;
  printf("Enter x0 and y0: ");
  scanf("%f%f",&x0,&y0); //y(x0)=y0
  printf("Enter xn: ");
  scanf("%f",&xn);
  printf("Enter interval(h): ");
  scanf("%f",&h);
  do
  {
    float m1=f(x0,y0);
    float m2=f(x0+h/2,y0+m1*h/2);
    float m3=f(x0+h/2,y0+m2*h/2);
    float m4=f(x0+h/2,y0+m3*h/2);
    float m5=f(x0+h,y0+m4*h);
    float m=(m1+2*m2+2*m3+2*m4+m5)/6;
    yn=y0+m*h;

    //for next iteration

    x0=x0+h;
    y0=yn;
  }while(x0<xn);
printf("\n\nHence, y(%0.1f)=%0.4f",xn,yn);
getch();
}
