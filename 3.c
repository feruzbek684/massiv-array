#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main () {  system("cls");
    int A[10] = {1,2,3,4,5,6,7,8,9,10};
        for (size_t i = 9; i > 0; i--)
        {
            if (A[i] % 2 == 0)
            {
                printf("%d ", A[i]);
            }
            
        }
        
}