#include"PhanSo.h"

int main(int argc, const char*argv[]) {
	CPhanSo test;
	test.NhapPhanSo();
	std::cout << "Phan so vua nhap : ";
	test.XuatPhanSo();
	std::cout << "\nTu phan so vua nhap : " << test.XuatTuSo();
	std::cout << "\nMau phan so vua nhap : " << test.XuatMauSo();
	std::cout << "\nNghich dao phan so vua nhap : ";
	test = test.NghichDao();
	test.XuatPhanSo();
	CPhanSo a, b;

	a.TaoPhanSo(14, 2);
	b.TaoPhanSo(2, 5);

	std::cout << "\nCho phan so 1 : ";
	a.XuatPhanSo();
	std::cout << "va phan so 2 : ";
	b.XuatPhanSo();
	std::cout<<".\nThuc hien cac phep tinh : \n";

	

	CPhanSo c;
	std::cout << "Tong : ";
	a.XuatPhanSo(); std::cout << " + "; b.XuatPhanSo(); std::cout << " = ";
	c = c.CongPhanSo(a, b);
	c.XuatPhanSo();
	std::cout << "\nHieu : ";
	a.XuatPhanSo(); std::cout << " - "; b.XuatPhanSo(); std::cout << " = ";
	c = c.TruPhanSo(a, b);
	c.XuatPhanSo();
	std::cout << "\nTich : ";
	a.XuatPhanSo(); std::cout << " x "; b.XuatPhanSo(); std::cout << " = ";
	c = c.TichPhanSo(a, b);
	c.XuatPhanSo();
	std::cout << "\nThuong : ";
	a.XuatPhanSo(); std::cout << " : "; b.XuatPhanSo(); std::cout << " = ";
	c = c.ChiaPhanSo(a, b);
	c.XuatPhanSo();

	
	std::system("pause");
	return 0;
}


