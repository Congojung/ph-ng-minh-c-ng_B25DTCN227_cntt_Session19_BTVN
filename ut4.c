#include <stdio.h>

int countValue(int *arr, int n, int x){
    int count = 0;
    for(int i=0;i<n;i++){
        if(*(arr+i) == x)
            count++;
    }
    return count;
}

int main(){
    int n;
    printf("Nhap so phan tu n: ");
    scanf("%d",&n);
    int arr[n];
    printf("Nhap cac phan tu:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x;
    printf("Nhap gia tri can tim: ");
    scanf("%d",&x);
    int kq = countValue(arr,n,x);
    printf("So lan xuat hien cua %d: %d",x,kq);
    return 0;
}
