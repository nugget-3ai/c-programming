#include <stdio.h>
int count( int a[], int n){
    int positivenum=0;
    for(int i=0; i<n;i++){
        if(a[i]>0){
            positivenum++;
        }
    }
    return positivenum;
}
int main(){
    int a[]={1,2,-3,4,-5,6,-7,8,9,-10};
    printf("the number of positive integers is %d", count(a,10));
    return 0;
}