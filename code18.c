#include<stdio.h>
#include<math.h>
int main() {
    int a,b,c;
    float D,root1,root2;
    printf("Enter the value of a,b,c: ");
    scanf("%d %d %d",&a,&b,&c);
    D = b*b - 4*a*c;
    root1 = (-b +sqrt(D))/(2*a);
    root2 = (-b -sqrt(D))/(2*a);
    if (D>0) {
        printf("Roots are real and different\n");
        printf("Root1 = %f\n",root1);
        printf("Root2 = %f\n",root2);
    }
    else if (D==0) {
        D= -b/(2*a);
        printf("Roots are real and same\n");
        printf("Root1 = Root2 = %f\n",D);
    }
    else {
        printf("Roots are imaginary\n");
    }
    
}