#include <stdio.h>

int findMax(int *arr, int n){
    int max = *arr;
    for(int i=1;i<n;i++){
        if(*(arr+i) > max){
            max = *(arr+i);
        }
    }
    return max;
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
    int kq = findMax(arr,n);
    printf("Phan tu lon nhat: %d",kq);
    return 0;
}
