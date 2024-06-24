#include <stdio.h>
int main(){
    int n,k=1;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        // line print
        for (int  j = 1; j <=k; j++)
        {
            /* code */
            printf("%d ",j);

        }
        // line sheish
        k++;
        printf("\n");
    }
    
    return 0;
}