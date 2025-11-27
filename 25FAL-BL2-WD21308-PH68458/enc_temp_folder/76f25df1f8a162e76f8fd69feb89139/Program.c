
#include <stdio.h>
#include <math.h>
void kiem_tra_so_nguyen()
{

	float n;
	int tieptuc1;
	do
	{
		system("cls");
		printf("Nhap so nguyen: ");
		scanf("%f", &n);

		if (n - (int)n == 0)
			printf("%.0f la so nguyen\n", n);
		else
			printf("%.0f khong phai la so nguyen\n", n);

		printf("Ban co muon tiep tuc khong? (1: Co, 0: Khong):\n ");
		scanf("%d", &tieptuc1);

	} while (tieptuc1 == 1);
	system("cls");

}
void tbTongSoChiaHetCho3()
{
	int tiepTuc;
	int n;
	int a[100];
	int i;
	do
	{
	printf("Nhap so luong phan tu cua mang: ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("Nhap phan tu mang: ", i);
		scanf("%d", &a[i]);
	}
	float tong = 0;
	float tb = 0;
	int count = 0;
	for (i = 0; i < n; i++)
	{
		if (a[i] % 3 == 0)
		{
			tong += a[i];
			count++;
		}
	}
	tb = tong / count;
	printf("Trung binh tong cac so chia het cho 3 la: %.2f\n", tb);
	printf("Ban co muon tiep tuc khong? (1: Co / 0: Khong): ");
	scanf(" %d", &tiepTuc);
	} while (tiepTuc == 1);

}
void lapChucnang(int chonChucnang)
{
	int tiepTuc = 1;
	while (tiepTuc == 1)
		switch (chonChucnang)
		{case 1:
			tbTongSoChiaHetCho3();
			break;
		case 2:
			kiem_tra_so_nguyen();
			break;
		case 3:
			//goi ten ham cn3
			break;
		default:
			printf("Chuc nang khong hop le!\n");
			break;
		}
	printf("Ban co muon tiep tuc khong? (1: Co / 0: Khong): ");
	scanf("%d", &tiepTuc);
	system("cls");
}
int main()
{
	int chonChucnang;
	do
	{
		printf("Menu");
		printf("\n1. Trung binh tong cac so chia het cho 3");
		printf("\n2. Chuc nang 2");
		printf("\n3. Chuc nang 3");
		printf("\n0. Thoat");
		printf("\nNhap chuc nang ban muon su dung (0-3): ");
		scanf("%d", &chonChucnang);
		lapChucnang(chonChucnang);
	} while (chonChucnang != 0);

}

