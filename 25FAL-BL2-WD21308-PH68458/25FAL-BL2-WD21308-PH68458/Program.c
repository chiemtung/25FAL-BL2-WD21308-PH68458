
#include <stdio.h>
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
void ()
void lapChucnang(int chonChucnang)
{
	int tiepTuc = 1;
	while (tiepTuc == 1)
		switch (chonChucnang)
		{case 1:
			kiem_tra_so_nguyen();
			break;
		case 2:
			//goi ten ham cn
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
		printf("\n1. Kiem tra so nguyen to");
		printf("\n2. Chuc nang 2");
		printf("\n3. Chuc nang 3");
		printf("\n0. Thoat");
		printf("\nNhap chuc nang ban muon su dung (0-3): ");
		scanf("%d", &chonChucnang);
		lapChucnang(chonChucnang);
	} while (chonChucnang != 0);

}

