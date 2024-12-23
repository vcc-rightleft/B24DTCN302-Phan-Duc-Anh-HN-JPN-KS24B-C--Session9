#include<stdio.h>
int main(){
int a[100];
int n,vt,gt;
printf("nhap so luong phan tu trong mang: ");
scanf("%d",&n);
for(int i=1;i<=n;i++){
	printf("nhap cac phan tu a[%d]: ",i);
	scanf("%d",&a[i]);
}
printf("mang hien tai: ");
for(int i=1;i<=n;i++){
	printf("%d ",a[i]);
}
printf("\nnhap vi tri muon xoa(tu 1 den %d): ",n);
scanf("%d",&vt);
if(vt>100||vt<0){
	printf("vi tri kohng hop le");
	return 1;;
}
for(int i=vt;i<=n-1;i++){
	a[i]=a[i+1];
}
n--;
printf("mang sau khi xoa: ");
for(int i=1;i<=n;i++){
	printf("%d ",a[i]);
}
return 0;
}

