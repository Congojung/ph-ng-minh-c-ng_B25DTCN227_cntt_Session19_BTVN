#include <stdio.h>
#include <math.h>

int nguyento(int n){
    if(n<2) return 0;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0) return 0;
    return 1;
}

int main(){
    int a[100],n,nhap=0,choice;

    while(1){
        printf("\n1. Nhap vao so phan tu va tung phan tu");
        printf("\n2. In ra cac phan tu la so chan");
        printf("\n3. In ra cac phan tu la so nguyen to");
        printf("\n4. Dao nguoc mang");
        printf("\n5. Sap xep mang");
        printf("\n6. Nhap vao 1 phan tu va tim kiem");
        printf("\n7. Thoat");
        printf("\nNhap lua chon: ");
        scanf("%d",&choice);

        if(choice==7) break;

        switch(choice){
            case 1:{
                printf("Nhap so phan tu: ");
                scanf("%d",&n);
                for(int i=0;i<n;i++){
                    printf("Phan tu %d: ",i+1);
                    scanf("%d",&a[i]);
                }
                nhap=1;
                break;
            }
            case 2:{
                if(!nhap){ printf("Chua nhap mang!\n"); break; }
                printf("So chan: ");
                for(int i=0;i<n;i++)
                    if(a[i]%2==0) printf("%d ",a[i]);
                break;
            }
            case 3:{
                if(!nhap){ printf("Chua nhap mang!\n"); break; }
                printf("So nguyen to: ");
                for(int i=0;i<n;i++)
                    if(nguyento(a[i])) printf("%d ",a[i]);
                break;
            }
            case 4:{
                if(!nhap){ printf("Chua nhap mang!\n"); break; }
                for(int i=0;i<n/2;i++){
                    int t=a[i];
                    a[i]=a[n-1-i];
                    a[n-1-i]=t;
                }
                printf("Da dao nguoc!\n");
                break;
            }
            case 5:{
                if(!nhap){ printf("Chua nhap mang!\n"); break; }
                int c;
                printf("\n1. Tang dan\n2. Giam dan\nNhap: ");
                scanf("%d",&c);
                if(c==1){
                    for(int i=0;i<n-1;i++)
                        for(int j=i+1;j<n;j++)
                            if(a[i]>a[j]){
                                int t=a[i]; a[i]=a[j]; a[j]=t;
                            }
                    printf("Da sap xep tang dan!\n");
                }else if(c==2){
                    for(int i=0;i<n-1;i++)
                        for(int j=i+1;j<n;j++)
                            if(a[i]<a[j]){
                                int t=a[i]; a[i]=a[j]; a[j]=t;
                            }
                    printf("Da sap xep giam dan!\n");
                }
                break;
            }
            case 6:{
                if(!nhap){ printf("Chua nhap mang!\n"); break; }
                int x,found=0;
                printf("Nhap gia tri can tim: ");
                scanf("%d",&x);
                for(int i=0;i<n;i++)
                    if(a[i]==x){
                        printf("Tim thay tai vi tri %d\n",i);
                        found=1;
                    }
                if(!found) printf("Khong tim thay\n");
                break;
            }
        }
    }
    return 0;
}

