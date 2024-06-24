#include <stdio.h>
int main(){
    double x = 5.34;
    double * ptr = &x;

// *ptr = 10.56; ai vabe o likha jai;

    printf("x er value - %0.2lf\n",x);
    printf("x er value - %0.2lf\n",*ptr);
    printf("ptr size - %d\n",sizeof(ptr));
    return 0;
}