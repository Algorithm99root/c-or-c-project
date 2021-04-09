#include <stdio.h>
#include <stdlib.h>

int main(){
    
    FILE *fptr;
    fptr = fopen("ashik.txt","w");
    int num = 1231;
    fprintf(fptr,"The number is = %d ",num);
    fclose(fptr);

    return 0;
}