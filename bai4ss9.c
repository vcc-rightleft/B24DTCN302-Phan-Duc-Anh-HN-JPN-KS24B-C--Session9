#include<stdio.h>
int main(){
int choice;
int a[100]={0};
int n=0,gt=0,vt=0;
do{
printf("\n--------MENU--------");
printf("\n1.Nhap vao mang.");
printf("\n2.Hien thi mang.");
printf("\n3.Them phan tu.");
printf("\n4.Sua phan tu.");
printf("\n5.Xoa phan tu.");
printf("\n6.Thoat.");
printf("\nMoi nhap lua chon: ");
scanf("%d",&choice);

switch (choice){
	case 1:
		printf("\nNhap so luong phan tu: ");
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			printf("nhap vao a[%d]: ",i);
			scanf("%d",&a[i]);
		}
		break;
	case 2:
		printf("Mang hien tai la: ");
		for(int i=0;i<n;i++){
			printf("%d ",a[i]);
		}
		break;	
	case 3:
		printf("Nhap vao gia tri them: ");
		scanf("%d",&gt);
		printf("nhap vao vi tri them phan tu(tu 0 den %d): ",n);
		scanf("%d",&vt);
		if(vt<0||vt>n){
			printf("vi tri khong hop le!!!");
			break;
		}
		for(int i=n;i>vt;i--){
			a[i]=a[i-1];
		}
		a[vt]=gt;
		n++;
		break;
	case 4:
		printf("nhap vao gia tri muon sua: ");
		scanf("%d",&gt);
		printf("nhap vao vi tri muon sua(tu 0 den %d): ",n-1);
		scanf("%d",&vt);
		if(vt<0||vt>=n){
			printf("vi tri khong hop le!!!");
			break;
		}
		a[vt]=gt;
		break;
	case 5:
		printf("nhap vao vi tri muon xoa(tu 0 den %d): ",n);
		scanf("%d",&vt);
		if(vt<0||vt>n){
			printf("vi tri khong hop le!!!");
			break;
		}
		for(int i=vt;i<=n-1;i++){
			a[i]=a[i+1];
		}
		n--;
		break;
	case 6:
		printf("thoat chuong trinh");
		break;
}			
}while(choice!=6);

return 0;
}

