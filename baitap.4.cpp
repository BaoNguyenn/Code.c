#include<stdio.h>
#define MAX 50
void nhapmang(int a[], int &n);
void nhapx(int &x);
void demgt(int a[], int n, int x);
void timvt(int a[], int n, int x);
int Invt(int a[], int n, int x);
void uocsox(int a[], int n, int x);
void thaythe(int a[], int n, int x);
///////////////
int main()
{
	int a[MAX]; 
	int x, n, vitri;
	nhapmang(a, n);
	nhapx(x);
	demgt(a, n, x);
	timvt(a, n, x);
	///
	vitri=Invt(a, n, x);
	printf("\n Vi tri cuoi cung cua x trong mang la: A[%d]\n",vitri);
	///
	uocsox(a, n, x);
	///
	thaythe(a, n, x);
	return 0;
}
///////////////
void nhapmang(int a[], int &n)
{
	
	do{
		printf("Nhap so so luong phan tu 1 <= n <= 50: ");
		scanf("%d",&n);
	}while(!(n>=1 && n<=50));
	for(int i=0;i<n;i++)
	{
	printf("Nhap phan tu A[%d]: ",i);
	scanf("%d",&a[i]);
	}
}
void nhapx(int &x)
{
	printf("\nNhap x: ");
	scanf("%d",&x);
}
void demgt(int a[], int n, int x)
{
	int dem = 0;
	for(int i=0;i<n;i++)
	{
		if(a[i] == x)
		{
			dem++;
		}
	}
	printf("\n Co %d phan tu co gia tri = %d\n",dem,x);
}
void timvt(int a[], int n, int x)
{
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			dem++;
		}
	}
	printf("\n Co %d vi tri cua phan tu co gia tri = x\n",dem);
}
int Invt(int a[], int n, int x)
{
	int vitri;
	for(int i=0;i<n;i++)
	{
		if(a[i]==x)
		vitri=i;
	}
	return vitri;
}
void uocsox(int a[], int n, int x)
{
	
	for(int i=0;i<n;i++)
	{
		if(a[i]%x==0)
		printf("\n Phan tu A[%d] co gia tri = %d la uoc so cua x\n", i,a[i]);
	}
}
/* 
void thaythe(int a[], int n, int x)
{
	int y=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			x=y;
			a[i]=y;
			printf("\n Cac phan tu co gia tri = x duoc thay the thanh 0 la: A[%d]\n",i);
		}
	}
	
} 
*/
