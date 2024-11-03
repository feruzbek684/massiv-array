#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main () {  system("cls");
    int otkazma = 0;
    int A[10] = {1,2,3,4,5,6,7,8,9,10};
    otkazma = A[0];
    A[0] = A[9];
    A[9] = otkazma;
        for (size_t i = 0; i < 10; i++)
        {
            printf("%d ", A[i]);   
        }
        
}