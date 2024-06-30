#include <stdio.h>
#include <math.h>
int main(){
    void quadratic(float, float,float);
    int a,b,c;
    printf("Enter the values of a, b, c - ");
    scanf("%d %d %d",&a,&b,&c);
    
    quadratic(a,b,c);
}

void quadratic(float a,float b , float c){
    float root1,root2;
    float discriminant = pow((b*b)-(4*a*c),0.5);
    if (discriminant >=0 ) {
        root1 = (-b+discriminant)/(2.0*a);
        root2 = (-b-discriminant)/(2.0*a);
        printf("Roots are real and they are %.2f and %.2f.",root1,root2);
    }
    else if (discriminant <0){
        printf("Roots are imaginary and they are %.2f + %.2fi and %.2f - %.2fi.", -b/(2.0*a),discriminant,-b/(2.0*a),discriminant);
    }
}