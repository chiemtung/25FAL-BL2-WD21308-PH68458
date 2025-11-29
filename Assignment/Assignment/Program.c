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

		if (n == (int)n)
			printf("%.0f la so nguyen\n", n);
		else
			printf("%.0f khong phai la so nguyen\n", n);

		printf("Ban co muon tiep tuc khong? (1: Co, 0: Khong):\n ");
		scanf("%d", &tieptuc1);

	} while (tieptuc1 == 1);
	system("cls");

}
void kiem_tra_so_thuc()
{

	float n;
	int tieptuc2;
	do
	{
		system("cls");
		printf("Nhap so thuc: ");
		scanf("%f", &n);

		if (n - (int)n != 0)
			printf("%f la so thuc\n", n);
		else
			printf("%f khong phai la so thuc\n", n);
		printf("Ban co muon tiep tuc khong? (1: Co, 0: Khong):\n ");
		scanf("%d", &tieptuc2);
	} while (tieptuc2 == 1);
	system("cls");
}
void dien_tich()
{

	int tieptuc3;
	do
	{
		system("cls");
		double chieudai, chieurong, dientich, chuvi;
		printf("Nhap chieu dai hinh chu nhat: ");
		scanf("%lf", &chieudai);
		printf("Nhap chieu rong hinh chu nhat: ");
		scanf("%lf", &chieurong);
		dientich = chieudai * chieurong;
		chuvi = 2 * (chieudai + chieurong);
		printf("Dien tich hinh chu nhat la: %lf * %lf = %.2lf\n", chieudai, chieurong, dientich);
		printf("Chu vi hinh chu nhat la: 2 * (%lf + %lf) = %.2lf\n", chieudai, chieurong, chuvi);
		printf("Ban co muon tiep tuc khong? (1: Co, 0: Khong):\n ");
		scanf("%d", &tieptuc3);
	} while (tieptuc3 == 1);
	system("cls");
}
void test1()
{


	int tieptuc4;
	do
	{
		system("cls");
		printf("its work\n");



		printf("Ban co muon tiep tuc khong? (1: Co, 0: Khong):\n ");
		scanf("%d", &tieptuc4);
	} while (tieptuc4 == 1);
	system("cls");
}
void test2()
{


	int tieptuc5;
	do
	{
		system("cls");
		printf("its work\n");



		printf("Ban co muon tiep tuc khong? (1: Co, 0: Khong):\n ");
		scanf("%d", &tieptuc5);
	} while (tieptuc5 == 1);
	system("cls");
}
void test3()
{


	int tieptuc6;
	do
	{
		system("cls");
		printf("its work\n");



		printf("Ban co muon tiep tuc khong? (1: Co, 0: Khong):\n ");
		scanf("%d", &tieptuc6);
	} while (tieptuc6 == 1);
	system("cls");
}
void test4()
{


	int tieptuc7;
	do
	{
		system("cls");
		printf("its work\n");



		printf("Ban co muon tiep tuc khong? (1: Co, 0: Khong):\n ");
		scanf("%d", &tieptuc7);
	} while (tieptuc7 == 1);
	system("cls");
}
void test5()
{


	int tieptuc8;
	do
	{
		system("cls");
		printf("its work\n");



		printf("Ban co muon tiep tuc khong? (1: Co, 0: Khong):\n ");
		scanf("%d", &tieptuc8);
	} while (tieptuc8 == 1);
	system("cls");
}
void test6()
{


	int tieptuc9;
	do
	{
		system("cls");
		printf("its work\n");



		printf("Ban co muon tiep tuc khong? (1: Co, 0: Khong):\n ");
		scanf("%d", &tieptuc9);
	} while (tieptuc9 == 1);
	system("cls");
}
void test7()
{


	int tieptuc10;
	do
	{
		system("cls");
		printf("its work\n");



		printf("Ban co muon tiep tuc khong? (1: Co, 0: Khong):\n ");
		scanf("%d", &tieptuc10);
	} while (tieptuc10 == 1);
	system("cls");
}
//void vong_lap()
//{
//	
//	for (int i = 0; i < 5; i++)// (i++ tang 1 don vi) (i+=n de tang n don vi)
//	{
//		printf("Lan lap thu: %d\n", i + 1);
//	}
//}
int main()
{

	int chon;

	do
	{

		printf("======Menu======"); printf("\n");
		printf("1. Kiem tra so nguyen"); printf("\n");
		printf("2. Tim uoc va boi so chung"); printf("\n");
		printf("3. Tinh tien karaoke"); printf("\n");
		printf("4. Tinh tien dien"); printf("\n");
		printf("5. Quy doi tien"); printf("\n");
		printf("6. Liai suat vay ngan hang"); printf("\n");
		printf("7. Vay tien mua xe"); printf("\n");
		printf("8. Sap xep thong tin sinh vien"); printf("\n");
		printf("9. Game"); printf("\n");
		printf("10. Tinh toan phan so"); printf("\n");
		printf("0. Thoat"); printf("\n");
		printf("Vui long chon chuc nang:"); printf("\n");
		scanf("%d", &chon);
		system("cls");

		switch (chon)
		{
		case 1:
			kiem_tra_so_nguyen();
			break;
		case 2:
			kiem_tra_so_thuc();
			break;
		case 3:
			dien_tich();
			break;
		case 4:
			test1();
			break;
		case 5:
			test2();
			break;
		case 6:
			test3();
			break;
		case 7:
			test4();
			break;
		case 8:
			test5();
			break;
		case 9:
			test6();
			break;
		case 10:
			test7();
			break;
		case 0:
			return 0;
			break;
		default:
			printf("Vui long chon cac chuc nang tren menu [1-10]\n");

		}
	} while (chon != 0);
}
