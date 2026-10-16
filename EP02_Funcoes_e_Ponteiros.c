#include <stdio.h>
#include <math.h>

void calc_info_retangulo(float b, float h, float *a, float *p, float *d){
    *a = b * h;

    *p = (b + h) * 2;

    *d = sqrt((b*b) + (h*h));

}

int main(){
    float b, h, a, p, d;

    printf("digite a base: ");
    scanf("%f", &b);

    printf("digite a altura: ");
    scanf("%f", &h);

    calc_info_retangulo(b,h,&a,&p,&d);
    
    printf("area é %f \n ", a);
    printf("perimetro é %f \n", p);
    printf("diagonal é %f \n", d);
    
    return 0;
}