#include<stdio.h>
int main (){
    int a[5]={1,2,3,4,5};
    int b[5];
    for(int i=0;i<5;i++){
     b[i]=a[i];
    }
    for(int i=0;i<5;i++){
        printf("%d",a[i]);
    }
    printf("\n");
    for(int i=0;i<5;i++){
    printf("%d",b[i]);
    }
    return 0;
}