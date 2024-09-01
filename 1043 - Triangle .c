#include <stdio.h>

int main()

{

  double a,b,c,Area,pre;

   scanf("%lf %lf %lf",&a,&b,&c);


   if(a+b>c && a+c>b  && b+c>a){

   pre=a+b+c;
   printf("Perimetro = %.1lf\n",pre);

   }

   else{

    Area=(a+b)*c/2;
    printf("Area = %.1lf\n",Area);

   }

















}
