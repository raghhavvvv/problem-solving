#include<stdio.h>
int main(){
    int i,j,k,l;
    for (i=0;i<=4;i++){
        for(j=i;j<4;j++){
            printf(" ");
        }
        for(k=i;k<(2*i);k++){
            printf("%d", k);
        }
        for (l=(2*i-2);l>i-1;l--){
            printf("%d", l);
        }
        printf("\n");

    }
}