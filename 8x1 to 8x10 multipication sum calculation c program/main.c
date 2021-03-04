#include <stdio.h>

int main(){
    int i,sum=0,n;
    printf("Enter the number of N = ");
    scanf("%d", &n);
    printf("==========================\n");
    printf("==========================\n");
    for ( i = 1; i <=n; i++)
    {
        /* code */
        printf("8 x %d = %d\n",i,8*i);
        sum+=8*i;
    }
    printf("\n");
    printf("=============================\n");
    printf("The total 8x1 to 8x10 multipication sum  is = %d",sum);
    
    
    return 0;
}