#include <stdio.h>

int main(){
    int a[10], q, w, e, r;
    printf("10 ta son kriting : \n");
    for (int i = 0; i < 10; i++){
        scanf("%d",&a[i]);
    }
    q = a[0];
    for (int l = 0; l < 10; l++){
        if (a[l] >= q){
            q = a[l];
        }
    }
    w = a[0];
    for(int j = 0; j < 10; j ++){
        if(a[j] <= w){
            w = a[j];
            e = j;
        }
    }
    a [e] = q;
    r = a[0];
    for(int q = 0; q < 10; q++){
        if (a[q] <= r){
            r = a[q];
        }
    }
    
    
    printf("\nIkkinchi kichik qiymat : %d\n", r);
    
    return 0;

}








