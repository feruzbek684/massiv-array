#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main () {  system("cls");
    int juft = 0, toq = 1;
    int A[10] = {1,2,3,4,5,6,7,8,9,10};
        for (size_t i = 0; i < 10; i++)
        {
            if (A[i] % 2 == 0)
            {
                juft = juft + A[i];
            }else if (A[i] % 2 != 0)
            {
                toq = toq * A[i];
            }
            
            
        }
        printf("juft sonlar yigindisi ==> %d \n", juft);
        printf("toq sonlar kopaytmasi ==> %d ", toq);
        
}