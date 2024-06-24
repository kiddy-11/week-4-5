#include <stdio.h>
int main(){
    int row,col;
    scanf("%d %d",&row,&col);
    int a[row][col];
    int element = row*col;
    for (int i = 0; i < row; i++)
    {
        /* code */
        for (int j = 0; j < col; j++)
        {
            /* code */
            scanf("%d",&a[i][j]);
        }
        
    }
    int cnt=0;
        for (int i = 0; i < row; i++)
    {
        /* code */
        for (int  j= 0;  j< col; j++)
        {
            /* code */
         if (a[i][j] == 0)
         {
            /* code */
            cnt++;
         }
         
        }
        
    }
  if (element == cnt)
  {
    /* code */
    printf("Zero matrix");
  }
 else{
    printf("Not Zero Marix");
 } 
    return 0;
}