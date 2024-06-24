#include <stdio.h>
int main(){
    int n,s,k;
    scanf("%d",&n);
    s=n-1;
    k=1;
    for (int i = 1; i <=n; i++)
    {
        /* code */
        for (int j = 1; j <= s; j++)
        {
            /* code */
            printf(" ");
        }
        for (int j = 1; j <=k; j++)
        {
            /* code */
            printf("*");
        }
        // line sheish
        s--;
        k=k+2;
        printf("\n");
        
        
    }
    
    return 0;
}