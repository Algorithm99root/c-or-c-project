//Passing Arrays to Function using Pointer in c Program " 


#include <stdio.h>
#include <stdlib.h>

void printArray(int *ptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        /* code */
        printf("The value of element %d is = %d\n",i+1, *(ptr+i));

    }
       
}

int main(){
    int arr[] = {1,22,333,444,5,45,454,4523,23,434};
    printArray(arr , 10); 
    printf("\n");
    printf("\n");
    system("pause");
    return 0;
}