#include <stdio.h>

void copyArray(int *src, int *dest, int n){
    for(int i=0;i<n;i++){
        *(dest+i) = *(src+i);
    }
}

int main(){
    int n;
    printf("Nhap so phan tu n: ");
    scanf("%d",&n);
    int a[n], b[n];
    printf("Nhap mang A:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    copyArray(a,b,n);
    printf("Mang B sau sao chep:\n");
    for(int i=0;i<n;i++){
        printf("%d ",b[i]);
    }
    return 0;
}
