#include <stdio.h>
int main(){
    int a[10],q, w, e, r;
    printf("10 ta son kriting: \n");
    for(int j = 0; j < 10; j++){
        scanf("%d", &a[j]);
    }
     w = a[0];
    for (int l = 0; l < 10; l++){
        if(a[l] <= w){
            w = a[l];
        }
    }
    q = a[0];
    for (int j = 0; j < 10; j++){
        if(a[j] >= q){
            q = a[j];
            e = j;
        }
    }
    a[e] = w;
    r = a[0];
    for (int q = 0; q < 10; q++){
        if (a[q] >= r){
            r = a[q];
        }
    }
    printf("\nIkkinchi katta qiymat : %d\n\n",r);
    
    return 0;

}
