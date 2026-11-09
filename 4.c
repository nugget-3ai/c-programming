#include <stdio.h>

int main(){
    int n;
    float sum=0,avg;
    scanf("%d",&n);
    float arr[n];
    for(int i=0;i<n;i++){
        scanf("%f",&arr[i]);
    }
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        avg=sum/n;

    }
    printf("%0.2f",avg);
    return 0;
}