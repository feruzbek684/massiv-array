#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

    srand(time(NULL));
    int A[10] = {1,2,3,4,5,6,7,8,9,10};
    printf("%d %d %d %d %d %d %d %d %d %d  ", A[9], A[8], A[7], A[6], A[5], A[4], A[3], A[2], A[1], A[0]);
}