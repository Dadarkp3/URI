#include <stdio.h>
#include <math.h>

int main()
{
 float a, b, c, x, z, d;

 printf("Digite 3 números separadamente\n");
  scanf("%f", &a);
  scanf("%f", &b);
  scanf("%f", &c); 
  d=(b*b)-(4*a*c);

  
  if((2*a==0) || (d<0))
   printf("Impossivel calcular\n");
  else
  {
   z=sqrt(d);
   z-=b;
   z=z/(2*a);

   x=sqrt(d);
   x= - b - x;
   x=x/(2*a);   

   printf("R1= %.5f\n", z);
   printf("R2= %.5f\n", x);
   
  }

 return 0;
}
