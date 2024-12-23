#include<stdio.h>
int main(){
int a[100];
int n,gt,vt;
printf("nhap vao so luong phan tu: ");
scanf("%d",&n);
for(int i=1;i<=n;i++){
	printf("nhap vao phan tu a[%d]: ",i);
	scanf("%d",&a[i]);
}
printf("mang hien tai: ");
for(int i=1;i<=n;i++){
	printf("%d ",a[i]);
}
printf("\nnhap gia tri muon them vao mang: ");
scanf("%d",&gt);
printf("\nnhap vao vi tri muon thay(tu 1 den %d): ",n);
scanf("%d",&vt);
a[vt]=gt;
printf("mang sau khi cap nhat: ");
for(int i=1;i<=n;i++){
	printf("%d ",a[i]);
}
return 0;
}

