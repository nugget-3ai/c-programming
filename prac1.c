#include <stdio.h>

int main(){
    int i,j,n;
  char  c='*';
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<i+1;j++){
            printf("%c",c);
        }
        printf("\n");
    }
    return 0;
}