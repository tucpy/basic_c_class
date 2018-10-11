#include"HocSinh.h"

int main(int argc, const char*agrv[]){
	HocSinh a;
	HocSinh b;
	a.NhapHocSinh();
	char TenB[] = "Nguyen Van B";
	double DiemToanB = 6;
	double DiemVanB = 8;
	b.GanHoTen(TenB);
	b.GanDiemToan(DiemToanB);
	b.GanDiemVan(DiemVanB);
	cout << "---------------------------\n";
	a.XuatHocSinh();
	cout << "Diem trung binh : " << a.DiemTrungBinh(a);
	cout << "\nHoc luc : ";
	a.XepLoaiHocLuc(a);
	cout << "\nHo va ten : " << b.XuatTen();
	cout << "\nDiem toan : "<<b.XuatDiemToan();
	cout << "\nDiem van : "<<b.XuatDiemVan();
	cout << "\nDiem trung binh : " << b.DiemTrungBinh(b);
	cout << "\nHoc luc : ";
	b.XepLoaiHocLuc(b);
	system("pause");
	return 0;
}