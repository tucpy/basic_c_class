#include"SoPhuc.h"

int main(int argc, const char*agrv[]) {
	CSoPhuc a, b, c;

	a.TaoSoPhuc(2, 10);

	b.TaoSoPhuc(12, 0);
	c = c.ThuongSoPhuc(a, b);
	c.XuatSoPhuc();

	CSoPhuc test;
	test.NhapSoPhuc();
	std::cout << "So phuc vua nhap : ";
	test.XuatSoPhuc();
	std::cout << "\nPhan thuc vua nhap : " << test.XuatPhanThuc();
	std::cout << "\nPhan ao vua nhap : " << test.XuatPhanAo();

	a.TaoSoPhuc(14, 2);
	b.TaoSoPhuc(2, 5);

	std::cout << "\nCho so phuc 1 : ";
	a.XuatSoPhuc();
	std::cout << "va so phuc 2 : ";
	b.XuatSoPhuc();
	std::cout << ".\nThuc hien cac phep tinh : \n";



	std::cout << "Tong : (";
	a.XuatSoPhuc(); std::cout << ") + ("; b.XuatSoPhuc(); std::cout << ") = ";
	c = c.CongSoPhuc(a, b);
	c.XuatSoPhuc();
	std::cout << "\nHieu : (";
	a.XuatSoPhuc(); std::cout << ") - ("; b.XuatSoPhuc(); std::cout << ") = ";
	c = c.TruSoPhuc(a, b);
	c.XuatSoPhuc();
	std::cout << "\nTich : (";
	a.XuatSoPhuc(); std::cout << ") x ("; b.XuatSoPhuc(); std::cout << ") = ";
	c = c.TichSoPhuc(a, b);
	c.XuatSoPhuc();
	std::cout << "\nThuong : (";
	a.XuatSoPhuc(); std::cout << ") : ("; b.XuatSoPhuc(); std::cout << ") = ";
	c = c.ThuongSoPhuc(a, b);
	c.XuatSoPhuc();

	system("pause");
	return 0;
}