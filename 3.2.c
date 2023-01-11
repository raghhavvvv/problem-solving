#include <stdio.h>
#include <math.h>
int main(){
    int i, j, temp=1, n;
    float sum=0;
    printf("Enter number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        temp = temp*i;
        sum+=temp/i;
    }
    printf("%f",sum);
    return 0;
}