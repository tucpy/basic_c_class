#include"NgayThangNam.h"

int main(int argc, const char*agrv[]) {
	NgayThangNam a,b;
	a.NhapNgayThangNam();
	a.XuatNgayThangNam();
	b.TaoNgayThangNam(20, 2, 1999);
	cout << endl;
	b.XuatNgayThangNam();
	cout << endl;
	a.KiemTraNamNhuan(a);

	system("pause");
	return 0;
}