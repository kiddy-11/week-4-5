#include <stdio.h>
void fun(void){
    int s = 100;
    printf("fun er s er address - %p\n",&s);
}
int main(){
    int s;
    printf("Main er s er address - %p\n",&s);
    fun();
    return 0;
}