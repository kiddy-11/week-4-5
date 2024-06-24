#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i <=n; i++)
    {
        /* code */
        scanf("%d", &a[i]);
    }
    // ascending
    // for (int i = 0; i <n-1; i++)
    // {
    //     /* code */
    //     for (int j = i+1; j<n; j++)
    //     {
    //         /* code */
    //         if (a[i]> a[j])
    //         {
    //             /* code */
    //            int tmp = a[i];
    //            a[i]=a[j];
    //            a[j]=tmp;
    //         }
            
    //     }
        
    // }

    // decending
     for (int i = 0; i <n-1; i++)
    {
        /* code */
        for (int j = i+1; j<n; j++)
        {
            /* code */
            if (a[i]< a[j])
            {
                /* code */
               int tmp = a[i];
               a[i]=a[j];
               a[j]=tmp;
            }
            
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        printf("%d ",a[i]);
    }
    
    
    return 0;
}