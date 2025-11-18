#include <stdio.h>

void nhapmang(int *arr, int *n){
    printf("Nhap n: ");
    scanf("%d", n);
    printf("Nhap cac phan tu:\n");
    for(int i=0;i<*n;i++){
        scanf("%d", arr+i);
    }
}

void hienthi(int *arr, int n){
    for(int i=0;i<n;i++){
        printf("%d ", *(arr+i));
    }
}

int dodai(int n){
    return n;
}

int tinhtong(int *arr, int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum += *(arr+i);
    }
    return sum;
}

int lonnhat(int *arr, int n){
    int max = *arr;
    for(int i=1;i<n;i++){
        if(*(arr+i) > max) max = *(arr+i);
    }
    return max;
}

int main(){
    int arr[100], n=0, choice, nhap=0;
    while(1){
        printf("\n===== MENU =====\n");
        printf("1. Nhap mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Tinh do dai\n");
        printf("4. Tinh tong mang\n");
        printf("5. Tim phan tu lon nhat\n");
        printf("6. Thoat\n");
        printf("Chon: ");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                nhapmang(arr,&n);
                nhap = 1;
                break;
            case 2:
                if(!nhap){ 
				printf("Chua nhap mang\n"); 
				break;
				}
                hienthi(arr,n);
                break;
            case 3:
                if(!nhap){ 
				printf("Chua nhap mang\n"); 
				break; }
                printf("Do dai mang: %d", dodai(n));
                break;
            case 4:
                if(!nhap){ 
				printf("Chua nhap mang\n"); 
				break; 
				}
                printf("Tong mang: %d", tinhtong(arr,n));
                break;
            case 5:
                if(!nhap){ 
				printf("Chua nhap mang\n"); 
				break; 
				}
                printf("Phan tu lon nhat: %d", lonnhat(arr,n));
                break;
            case 6:
                return 0;
            default:
                printf("Lua chon khong hop le");
        }
    }
}
