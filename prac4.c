#include <stdio.h>

int main(){
    int i, j, n;
    scanf("%d", &n);
    int num=0;
    for(i=0; i<n;i++){
        for(j=0;j<n;j++){
            num++;
            printf("%d ", num);
        }
        
        printf("\n");
    }
    return 0;
}