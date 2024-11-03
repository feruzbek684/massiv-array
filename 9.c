#include <stdio.h>
int main(){
    int n, i = 0;
    printf("qiyamat kiritng? \n");
    scanf("%d", &n);
    int a[n],  q, w;
    printf("Son kiriting : \n");
    for(int l = 0;l < n; l++){
        scanf("%d", &a[l]);
    }
    q = a[0];
    for( i; i < n; i++){
        if(a[i]> q){
            q = a[i];
            i = w;
        }
    }
    printf("\nkichik qiymat : %d\n", q);
    if(i == 0){
        printf("Eng kichik qiymatdan oldin boshqa son yo'q !");
    }
    else{
        printf("Eng katta qiymatdan keyin %d ta son bor !\n", i);
    }    
    return 0;
}

