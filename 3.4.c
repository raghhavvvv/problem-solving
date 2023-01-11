#include <stdio.h>
#include <math.h>
int main(){
    int i, j, temp=1, x, n;
    float sum=0;
    printf("Enter x and n: ");
    scanf("%d %d",&x, &n);

    for(i=1;i<=n;i++){
        temp = temp*i;
        if(i%2!=0)
           sum-=pow(x,i)/temp;
        else
           sum+=pow(x,i)/temp;
    }
    printf("%f",sum+1);
    return 0;
}