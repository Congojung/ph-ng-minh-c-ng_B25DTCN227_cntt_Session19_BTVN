#include <stdio.h>

void countEvenOdd(int *arr, int n, int *even, int *odd){
    *even = 0;
    *odd = 0;
    for(int i=0;i<n;i++){
        if(*(arr+i) % 2 == 0)
            (*even)++;
        else
            (*odd)++;
    }
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
    int sochan, sole;
    countEvenOdd(arr,n,&sochan,&sole);
    printf("So phan tu chan: %d\n",sochan);
    printf("So phan tu le: %d",sole);
    return 0;
}
