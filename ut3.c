#include <stdio.h>

void average(int *arr, int n, float *result){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += *(arr+i);
    }
    *result = (float)sum / n;
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
    float kq;
    average(arr,n,&kq);
    printf("Gia tri trung binh: %.2f",kq);
    return 0;
}
