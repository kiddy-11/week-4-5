#include <stdio.h>
void fun (char *ar){
    ar[0]='j';
}
// void fun (int *ar, int n){
//     for (int i = 0; i < 5; i++)
//     {
//         /* code */
//         printf("%d ",ar[i]);
//     }
//     printf("\n");
// }
int main(){
    // int ar[5]={10,20,30,40,50};
    // fun(ar,5);
    // for (int i = 0; i <5; i++)
    // {
    //     /* code */
    //     printf("%d ",ar[i]);
    // }

    char ar[] = "hi";
    fun(ar);
    printf("%s",ar);
    
    return 0;
}