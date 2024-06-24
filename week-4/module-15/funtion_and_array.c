#include <stdio.h>
void fun (int ar[], int n){
    for (int i = 0; i < n; i++)
    {
        /* code */
        printf("%d ",ar[i]);
    }
    
}
int main(){
    int ar[5]={10,20,30,40,50};
    // int sz = sizeof(ar)/sizeof(int);
    // printf("%d",sz);
    fun(ar,5);
    return 0;
}