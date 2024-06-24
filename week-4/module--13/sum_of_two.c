#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i <=n; i++)
    {
        /* code */
        scanf("%d",&a[i]);
    }
    int x;
    scanf("%d",&x);
    int flag = 0;
    for (int i = 0; i <n-1; i++) // dan pashe chek korar moto man thake na tai n-1
    {
        /* code */
        for (int j = i+1; j < n; j++)
        {
            /* code */
            if (a[i]+a[j]==x)
            {
                /* code */
                flag == 1;
            }
            
        }
        
    }
    if (flag == 0)
    {
        /* code */
        printf("No\n");
    }
    else
    {
        printf("Yes\n");
    }
    
    return 0;
}