#include<stdio.h>

int main(){
    int u, t, a, s;

    printf("Enter the values of u\n ");
    scanf("%d",&u);
    printf("Enter the values of t\n");
    scanf("%d",&t);  
    printf("Enter the values of a\n");
    scanf("%d",&a);
    
    s=u*t+0.5*a*t*t;

    printf("dispacement s is %d", s);
    return 0;
}