#include <stdio.h>

void tinhTienDien()
{
    int kwh;
    float tongTien = 0;


    int muc[] = { 50, 50, 100, 100, 100, 999999 };

    int gia[] = { 1984, 2050, 2380, 0, 0, 0 };
  

    int i, dung;

    printf("Nhap so kWh dien su dung: ");
    scanf("%d", &kwh);

    printf("\n%-12s %-20s %-20s %-20s\n", "Bac", "Don gia (dong/kWh)", "San luong (kWh)", "Thanh tien");

    for (i = 0; kwh > 0 && i < 3; i++)
    {
        dung = (kwh > muc[i]) ? muc[i] : kwh;
        int tien = dung * gia[i];
        tongTien += tien;

        printf("Bac %d\t%10d\t\t%10d\t\t%10d\n",
            i + 1, gia[i], dung, tien);

        kwh -= dung;
    }

    printf("\nTong tien phai tra: %.0f VND\n", tongTien);
}
int main()
{
    tinhTienDien();
    return 0;
}