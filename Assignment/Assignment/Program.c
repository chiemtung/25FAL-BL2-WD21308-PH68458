#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>

//kiem tra so start
void kiemTraSoNguyen(float n) {
	
	if (n == (int)n) {
		printf("So %.0f co phai la so nguyen? => Co\n", n);
	}
	else {
		printf("So %.2f khong phai la so nguyen!\n", n);
	}
}

void kiemTraSoNguyenTo(int n) {
	if (n < 2) {
		printf("So %d co phai la so nguyen to? => Khong\n", n);
		return;
	}

	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			printf("So %d co phai la so nguyen to? => Khong\n", n);
			return;
		}
	}
	printf("So %d co phai la so nguyen to? => Co\n", n);
}

void kiemTraSoChinhPhuong(int n) {
	if (n < 0) {
		printf("So %d co phai la so chinh phuong? => Khong\n", n);
		return;
	}

	int can = sqrt(n);
	if (can * can == n)
		printf("So %d co phai la so chinh phuong? => Co\n", n);
	else
		printf("So %d co phai la so chinh phuong? => Khong\n", n);
}
//kiem tra end
void kiem_tra_so_nguyen() {
	float n;
	int tieptuc1;

	do {
		system("cls");
		printf("=== KIEM TRA SO NGUYEN ===\n");
		printf("Nhap so kiem tra: ");

		// doc du lieu va kiem tra hop le
		if (scanf("%f", &n) != 1) {
			printf("Du lieu nhap vao khong hop le!\n");
			while (getchar() != '\n');
			printf("Ban co muon tiep tuc khong? (1: Co, 0: Khong): ");
			scanf("%d", &tieptuc1);
			continue;
		}

		
		kiemTraSoNguyen(n);

		// neu la so nguyen thì kiem tra tiep
		if (n == (int)n) {
			int soNguyen = (int)n; // ep ve int
			kiemTraSoNguyenTo(soNguyen);
			kiemTraSoChinhPhuong(soNguyen);
		}
		else {
			printf("Vi khong phai so nguyen nen khong kiem tra nguyen to va chinh phuong.\n");
		}

		printf("Ban co muon tiep tuc khong? (1: Co, 0: Khong): ");
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
void uoc_va_boi_chung_cua_2_so()        //MAIN
{

	float n;
	int tieptuc2;
	do
	{
		system("cls");
		int x, y;
		printf("=== TIM UOC VA BOI CHUNG CUA 2 SO ===\n");
		printf("Nhap hai so nguyen x va y: ");
		scanf("%d %d", &x, &y);

		uocChungLonNhat(x, y);
		boiChungNhoNhat(x, y);
		printf("Ban co muon tiep tuc khong? (1: Co, 0: Khong):\n ");
		scanf("%d", &tieptuc2);
	} while (tieptuc2 == 1);
	system("cls");
}






void karaoke(float gioBD, float gioKT) {
	// kiem tra gio hop le
	if (gioBD < 12 || gioKT > 23 || gioBD >= gioKT) {
		printf("Gio khong hop le. Quan chi mo tu 12h den 23h.\n");
		return;
	}

	float soGio = gioKT - gioBD;
	float tongTien = 0;

	// Tinh tien theo so gio hat
	if (soGio <= 3) {
		tongTien = soGio * 150000;
	}
	else {
		tongTien = 3 * 150000; // 3h dau tien binh thuong
		tongTien += (soGio - 3) * 150000 * 0.7; // tu gio thu 4 discount 30%
	}

	// discount them 10% tu 14h den 17h
	if (gioBD >= 14 && gioBD <= 17) {
		tongTien *= 0.9;
	}

	printf("So gio hat: %.1f gio\n", soGio);
	printf("Tong tien can thanh toan: %.0f VND\n", tongTien);
}
void tinh_tien_karaoke()
{
	int tieptuc3;
	do
	{
		system("cls");
		float gioBD, gioKT;
		printf("=== TINH TIEN KARAOKE ===\n");
		printf("Nhap gio bat dau: ");
		scanf("%f", &gioBD);

		printf("Nhap gio ket thuc: ");
		scanf("%f", &gioKT);

		karaoke(gioBD, gioKT);

		printf("Ban co muon tiep tuc khong? (1: Co, 0: Khong):\n ");
		scanf("%d", &tieptuc3);
	} while (tieptuc3 == 1);
	system("cls");
}






void tinh_tien_dien()
{
	int tieptuc4;
	do
	{
		system("cls");
		int kwh, i;
		float tien = 0;

		// bang gia theo tung bac
		int muc_kwh[] = { 50, 50, 100, 100, 100, 999999 }; // 999999 dai dien bac cuoi ko gioi han
		float gia[] = { 1678, 1734, 2014, 2536, 2834, 2927 };

		printf("\n=== TINH TIEN DIEN ===\n");
		printf("Nhap so kWh dien su dung: ");
		scanf("%d", &kwh);

		if (kwh < 0) {
			printf("So kWh khong hop le!\n");
			return;
		}

		for (i = 0; kwh > 0; i++)
		{
			int dung = (kwh > muc_kwh[i]) ? muc_kwh[i] : kwh; // so kwh trong bac hien tai
			tien += dung * gia[i];
			kwh -= dung;
		}

		printf("So tien phai tra la: %.0f VND\n", tien);



		printf("Ban co muon tiep tuc khong? (1: Co, 0: Khong):\n ");
		scanf("%d", &tieptuc4);
	} while (tieptuc4 == 1);
	system("cls");
}




void quy_doi_tien()
{


	int tieptuc5;
	do
	{
		system("cls");
		int soTien;
		int menhGia[] = { 500, 200, 100, 50, 20, 10, 5, 2, 1 };
		int soTo, i;

		printf("\n=== CHUC NANG DOI TIEN ===\n");
		printf("Nhap vao so tien can doi: ");
		scanf("%d", &soTien);

		if (soTien <= 0)
		{
			printf("So tien khong hop le!\n");
			return;
		}

		printf("\nKet qua doi tien:\n");

		for (i = 0; i < 9; i++)
		{
			soTo = soTien / menhGia[i]; // so to cua menh gia hien tai
			if (soTo > 0)
			{
				printf("%d to menh gia %d\n", soTo, menhGia[i]);
				soTien %= menhGia[i]; // cap nhat so tien con lai
			}
		}



		printf("Ban co muon tiep tuc khong? (1: Co, 0: Khong):\n ");
		scanf("%d", &tieptuc5);
	} while (tieptuc5 == 1);
	system("cls");
}






void tinh_lai_suat_vay_ngan_hang()
{


	int tieptuc6;
	do
	{
		system("cls");
		float soTienVay, gocMoiThang, duNo, laiThang, traThang, soTienConLai;
		const float laiSuat = 0.05; // 5%
		printf("\n=== TINH LAI SUAT NGAN HANG TRA GOP ===\n");
		printf("Nhap so tien muon vay: ");
		scanf("%f", &soTienVay);

		duNo = soTienVay;
		gocMoiThang = soTienVay / 12;

		printf("\nSo tien can tra trong 12 thang (lai 5%%/thang):\n");

		for (int i = 1; i <= 12; i++) {
			laiThang = duNo * laiSuat;
			traThang = gocMoiThang + laiThang;
			soTienConLai = duNo - gocMoiThang;

			printf("Thang %d: Goc = %.2f, Lai = %.2f, Tra = %.2f, Con lai = %.2f\n",
				i, gocMoiThang, laiThang, traThang, soTienConLai);

			duNo -= gocMoiThang; // giam Du no
		}
		printf("Ban co muon tiep tuc khong? (1: Co, 0: Khong):\n ");
		scanf("%d", &tieptuc6);
	} while (tieptuc6 == 1);
	system("cls");
}






void vay_tien_mua_xe()
{


	int tieptuc7;
	do
	{
		system("cls");
		float gia_xe = 500000000;
		int thoi_han = 24;
		float lai_suat = 0.072;
		int phan_tram;
		printf("\n=== TINH TIEN VAY CAN TRA MUA XE ===\n");
		printf("Nhap phan tram vay toi da: ");
		scanf("%d", &phan_tram);
		float tien_vay = gia_xe * phan_tram / 100;
		float tra_truoc = gia_xe - tien_vay;
		float tong_lai = tien_vay * lai_suat * thoi_han;
		float tong_tra = tien_vay + tong_lai;
		float tra_thang = tong_tra / (thoi_han * 12);
		printf("\nSo tien tra lan dau: %.0f VND\n", tra_truoc);
		printf("So tien tra hang thang: %.0f VND\n", tra_thang);

		printf("Ban co muon tiep tuc khong? (1: Co, 0: Khong):\n ");
		scanf("%d", &tieptuc7);
	} while (tieptuc7 == 1);
	system("cls");
}






void sap_xep_thong_tin_sv()
{
	int tieptuc8;
	do
	{
		system("cls");
		int n;
		printf("So sinh vien (Toi da 100): ");
		scanf("%d", &n);

		char sv[100][50];
		float diem[100];

		// Input thong tin sinh vien
		for (int i = 0; i < n; i++) {
			printf("\nSinh vien %d:\n", i + 1);
			printf("Ho ten: ");
			scanf(" %[^\n]", sv[i]);
			printf("Diem: ");
			scanf("%f", &diem[i]);
		}

		// Sap xep giam dan theo diem
		for (int i = 0; i < n - 1; i++) {
			for (int j = i + 1; j < n; j++) {
				if (diem[i] < diem[j]) {
					float temp = diem[i];
					diem[i] = diem[j];
					diem[j] = temp;

					char tempName[50];
					strcpy(tempName, sv[i]);
					strcpy(sv[i], sv[j]);
					strcpy(sv[j], tempName);
				}
			}
		}
		printf("\n=== DANH SACH SINH VIEN ===\n");
		printf("STT  Ho ten                       Diem  Hoc luc\n");
		for (int i = 0; i < n; i++) {
			char* hocLuc;

			if (diem[i] >= 9.0) hocLuc = "Xuat sac";
			else if (diem[i] >= 8.0) hocLuc = "Gioi";
			else if (diem[i] >= 6.5) hocLuc = "Kha";
			else if (diem[i] >= 5.0) hocLuc = "Trung binh";
			else hocLuc = "Yeu";

			printf("%3d. %-28s %5.1f  %s\n",
				i + 1, sv[i], diem[i], hocLuc);
		}
		printf("Ban co muon tiep tuc khong? (1: Co, 0: Khong):\n ");
		scanf("%d", &tieptuc8);
	} while (tieptuc8 == 1);
	system("cls");
}





void game_lott()
{


	int tieptuc9;
	do
	{
		system("cls");
		int so1, so2;
		int soNgauNhien1, soNgauNhien2;

		// khoi tao bo sinh ngau nhien
		srand(time(NULL));

		printf("=== FPOLY-LOTT (2/15) ===\n");
		printf("Nhap so thu nhat (01-15): ");
		scanf("%d", &so1);
		printf("Nhap so thu hai (01-15): ");
		scanf("%d", &so2);
		//ktra hop le
		if (so1 < 1 || so1 > 15 || so2 < 1 || so2 > 15) {
			printf("So nhap vao khong hop le! Chi chap nhan tu 01 den 15.\n");
			return 0;
		}

		// generate 2 so ngau nhien
		soNgauNhien1 = rand() % 15 + 1;  // Số từ 1-15
		soNgauNhien2 = rand() % 15 + 1;

		// dam bao 2 so khac nhau
		while (soNgauNhien1 == soNgauNhien2) {
			soNgauNhien2 = rand() % 15 + 1;
		}

		// output ket qua
		printf("\n=== KET QUA ===\n");
		printf("So cua ban: %02d va %02d\n", so1, so2);
		printf("So ket qua: %02d va %02d\n", soNgauNhien1, soNgauNhien2);

		// dem so trung
		int soTrung = 0;

		if (so1 == soNgauNhien1 || so1 == soNgauNhien2) {
			soTrung++;
		}
		if (so2 == soNgauNhien1 || so2 == soNgauNhien2) {
			soTrung++;
		}

		// Xac dinh ket qua
		printf("\n=== THONG BAO ===\n");
		switch (soTrung) {
		case 0:
			printf("Chuc ban may man lan sau!\n");
			break;
		case 1:
			printf("Chuc mung ban da trung giai nhi!\n");
			break;
		case 2:
			printf("CHUC MUNG BAN DA TRUNG GIAI NHAT!\n");
			break;
		}
		printf("Ban co muon tiep tuc khong? (1: Co, 0: Khong):\n ");
		scanf("%d", &tieptuc9);
	} while (tieptuc9 == 1);
	system("cls");
}
void tinh_toan_phan_so()
{


	int tieptuc10;
	do
	{
		system("cls");
		int tu1, mau1, tu2, mau2;

		printf("Nhap phan so 1 (tu/mau): ");
		scanf("%d/%d", &tu1, &mau1);

		printf("Nhap phan so 2 (tu/mau): ");
		scanf("%d/%d", &tu2, &mau2);

		// Ktra mau khac 0
		if (mau1 == 0 || mau2 == 0) {
			printf("Mau so phai khac 0!\n");
		}
		else {

			printf("\nPhan so 1: %d/%d\n", tu1, mau1);
			printf("Phan so 2: %d/%d\n\n", tu2, mau2);

			// tinh tong
			int tongTu = tu1 * mau2 + tu2 * mau1;
			int tongMau = mau1 * mau2;
			printf("Tong: (%d/%d) + (%d/%d) = %d/%d\n",
				tu1, mau1, tu2, mau2, tongTu, tongMau);

			// tinh hieu
			int hieuTu = tu1 * mau2 - tu2 * mau1;
			int hieuMau = mau1 * mau2;
			printf("Hieu: (%d/%d) - (%d/%d) = %d/%d\n",
				tu1, mau1, tu2, mau2, hieuTu, hieuMau);

			// tinh tich
			int tichTu = tu1 * tu2;
			int tichMau = mau1 * mau2;
			printf("Tich: (%d/%d) * (%d/%d) = %d/%d\n",
				tu1, mau1, tu2, mau2, tichTu, tichMau);

			// tinh thuong
			if (tu2 == 0) {
				printf("Thuong: Khong the chia cho 0\n");
			}
			else {
				int thuongTu = tu1 * mau2;
				int thuongMau = mau1 * tu2;
				printf("Thuong: (%d/%d) / (%d/%d) = %d/%d\n",
					tu1, mau1, tu2, mau2, thuongTu, thuongMau);
			}
		}
		printf("Ban co muon tiep tuc khong? (1: Co, 0: Khong):\n ");
		scanf("%d", &tieptuc10);
	} while (tieptuc10 == 1);
	system("cls");
}

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
			uoc_va_boi_chung_cua_2_so();
			break;
		case 3:
			tinh_tien_karaoke();
			break;
		case 4:
			tinh_tien_dien();
			break;
		case 5:
			quy_doi_tien();
			break;
		case 6:
			tinh_lai_suat_vay_ngan_hang();
			break;
		case 7:
			vay_tien_mua_xe();
			break;
		case 8:
			sap_xep_thong_tin_sv();
			break;
		case 9:
			game_lott;
			break;
		case 10:
			tinh_toan_phan_so();
			break;
		case 0:
			return 0;
			break;
		default:
			printf("Vui long chon cac chuc nang tren menu [1-10]\n");

		}
	} while (chon != 0);
}
