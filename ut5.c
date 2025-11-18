#include <stdio.h>

int compareArrays(int *a, int *b, int n){
    for(int i=0;i<n;i++){
        if(*(a+i) != *(b+i))
            return 0;
    }
    return 1;
}

int main(){
    int n;
    printf("Nhap so phan tu n: ");
    scanf("%d",&n);
    int a[n], b[n];
    printf("Nhap mang a:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Nhap mang b:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    int kq = compareArrays(a,b,n);
    if(kq == 1)
        printf("Hai mang giong nhau");
    else
        printf("Hai mang khac nhau");
    return 0;
}
