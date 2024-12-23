#include<stdio.h>
int main(){
int a[100];
int n;
int gt,vt;
printf("moi nhap vao mang: ");
scanf("%d",&n);
for(int i=0;i<n;i++){
	printf("moi nhap vao a[%d]: ",i+1);
	scanf("%d",&a[i]);
}
printf("mang hien tai: ");
for(int i=0;i<n;i++){
	printf("%d ",a[i]);
}
printf("\nnhap vao gia tri muon them vao mang: ");
scanf("%d",&gt);
printf("\nnhap vi tri muon them phan tu(tu 1 den %d): ",n);
scanf("%d",&vt);
if(vt<0||vt>100){
	printf("vi tri khong hop le");
	return 1;
}
for(int i=n;i>vt;i--){
	a[i]=a[i-1];
}
a[vt]=gt;
n++;
printf("mang sau khi them phan tu: ");
for(int i=0;i<n;i++){
	printf("%d ",a[i]);
}
return 0;
}

