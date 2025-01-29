#include<stdio.h>
#include<math.h>

int main(){

    float a, b, c,d, r1, r2;
    printf("Enter coefficient of a: \n");
    scanf("%f", &a);
      if(a==0)
    {
        printf("This not a quadratic equation!");
        return 0;
    }
    printf("Enter coefficient of b: \n");
    scanf("%f", &b);
    printf("Enter coefficient of c: \n");
    scanf("%f", &c);

  
   //calculate the value of discriminant
    d=b*b-4*a*c;

    if(d>0)
    {
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("The equation has two District real root:\n");
        printf("r1=%.2f\n", r1);
        printf("r2=%.2f\n",r2);

    }
    else if(d==0)
    {
        r1=-b/(2*a);
        printf("The equation has one real Roots:\n");
        printf("r1=%.3f\n", r1);
    }
    else
    {
        printf("No Real roots!");
    }
    return 0;
}