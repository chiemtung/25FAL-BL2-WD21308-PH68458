#include <stdio.h>
#include <math.h>
//kiem tra so start
void kiemTraSoNguyen(int n) {
	printf("So %d co phai la so nguyen? => Co\n", n);
}


void kiemTraSoNguyenTo(int n) {
	if (n < 2) {
		printf("So %d co phai la so nguyen to? => Khong\n", n);
		
	}

	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			printf("So %d co phai la so nguyen to? => Khong\n", n);
			
		}
	}
	printf("So %d co phai la so nguyen to? => Co\n", n);
}


void kiemTraSoChinhPhuong(int n) {
	if (n < 0) {
		printf("So %d co phai la so chinh phuong? => Khong\n", n);
		
	}

	int can = sqrt(n);//tinh can bac 2
	if (can * can == n)// "can" lay so nguyen nen can*can se bang n neu n la so chinh phuong
		printf("So %d co phai la so chinh phuong? => Co\n", n);
	else
		printf("So %d co phai la so chinh phuong? => Khong\n", n);
}
//kiem tra so end
void kiem_tra_so_nguyen()         //MAIN
{

	float n;
	int tieptuc1;
	do
	{
		system("cls");
		int kiemTraSo;
		printf("Nhap so kiem tra: ");
		scanf_s("%d", &kiemTraSo);

		kiemTraSoNguyen(kiemTraSo);
		kiemTraSoNguyenTo(kiemTraSo);
		kiemTraSoChinhPhuong(kiemTraSo);

		printf("Ban co muon tiep tuc khong? (1: Co, 0: Khong):\n ");
		scanf("%d", &tieptuc1);

	} while (tieptuc1 == 1);
	system("cls");

}





void uocChungLonNhat(int a, int b) {
	int x = a, y = b;

	while (x != y) {
		if (x > y)
			x = x - y;
		else
			y = y - x;
	}

	printf("Uoc so chung lon nhat cua %d va %d la: %d\n", a, b, x);
}
void boiChungNhoNhat(int a, int b) {
	int x = a, y = b;
	int temp_a = a, temp_b = b;

	
	while (x != y) {
		if (x > y)
			x = x - y;
		else
			y = y - x;
	}

	int boiChungNhoNhat = (temp_a * temp_b) / x;

	printf("Boi so chung nho nhat cua %d va %d la: %d\n", temp_a, temp_b, boiChungNhoNhat);
}

void uocVaBoiTrungCua2So()        //MAIN
{

	float n;
	int tieptuc2;
	do
	{
		system("cls");
		int x, y;

		printf("Nhap hai so nguyen x va y: ");
		scanf("%d %d", &x, &y);

		uocChungLonNhat(x, y);
		boiChungNhoNhat(x, y);
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
			uocVaBoiTrungCua2So();
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
