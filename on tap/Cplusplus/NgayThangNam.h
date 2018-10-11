#pragma once
#include<iostream>
using namespace std;

class NgayThangNam {
	int Ngay, Thang, Nam;
	bool Right;
public:
	bool DieuKhien() {
		if (Nam > 0) {
			if (Nam % 4 == 0 && Nam % 100 != 0 || Nam % 400 == 0) {
				if (Thang == 2) {
					if (Ngay > 0 && Ngay < 30) {
						return true;
					}
				}
				else if (Thang == 1 || Thang == 3 || Thang == 5 || Thang == 7 || Thang == 8 || Thang == 10 || Thang == 12) {
					if (Ngay > 0 && Ngay < 32) {
						return true;
					}
				}
				else if (Thang == 4 || Thang == 6 || Thang == 9 || Thang == 11) {
					if (Ngay > 0 && Ngay < 31) {
						return true;
					}
				}
			}
			else {
				if (Thang == 2) {
					if (Ngay > 0 && Ngay < 29) {
						return true;
					}
				}
				else if (Thang == 1 || Thang == 3 || Thang == 5 || Thang == 7 || Thang == 8 || Thang == 10 || Thang == 12) {
					if (Ngay > 0 && Ngay < 32) {
						return true;
					}
				}
				else if (Thang == 4 || Thang == 6 || Thang == 9 || Thang == 11) {
					if (Ngay > 0 && Ngay < 31) {
						return true;
					}
				}
			}
		}
		return false;
	}
	void NhapNgayThangNam() {
		
			cout << "Nhap nam:";
			cin >> Nam;
		
			cout << "Nhap thang : ";
			cin >> Thang;
		
			cout << "Nhap Ngay : ";
			cin >> Ngay;
			Right = DieuKhien();
	}
	void XuatNgayThangNam() {
		if (Right) {
			cout << Ngay << "/" << Thang << "/" << Nam << " ";
		}
		else {
			cout << "ERORR!!! ";
		}
	}
	void TaoNgayThangNam(int ngay, int thang, int nam) {
		Ngay = ngay;
		Thang = thang;
		Nam = nam;
		Right = DieuKhien();
	}

	bool NamNhuan() {
		if (Nam % 4 == 0 && Nam % 100 != 0 || Nam % 400 == 0) {
			return true;
		}
		return false;
	}
	void KiemTraNamNhuan(NgayThangNam NgayThangNam1) {
		if (NgayThangNam1.Right) {
			if (NgayThangNam1.NamNhuan()) {
				NgayThangNam1.XuatNgayThangNam();
				cout << "nam trong nam nhuan.";
			}
			else {
				NgayThangNam1.XuatNgayThangNam();
				cout << "khong nam trong nam nhuan.";
			}
		}
		else {
			NgayThangNam1.XuatNgayThangNam();
			cout << "khong kiem tra duoc.";
		}
	}
	void GanNgay(int ngay) {
		Ngay = ngay;
	}
	void GanThang(int thang) {
		Thang = thang;
	}
	void GanNam(int nam) {
		Nam = nam;
	}
	int XuatNgay() {
		return Ngay;
	}
	int XuatThang() {
		return Thang;
	}
	int XuatNam() {
		return Nam;
	}
	int SoNgayTrongThang(int thang, int nam) {
		if (nam>0) {

			if (nam % 4 == 0 && nam % 100 != 0 || nam % 400 == 0) {
				if (thang == 2) {

					return 29;
				}
			}
			else if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12) {

				return 31;

			}
			else if (thang == 4 || thang == 6 || thang == 9 || thang == 11) {

				return 30;

			}
		}
		else {
			if (thang == 2) {

				return 29;

			}
			else if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12) {

				return 31;

			}
			else if (thang == 4 || thang == 6 || thang == 9 || thang == 11) {

				return 30;

			}
		}
		cout << "(ERORR )";
		return -1;
	}
	NgayThangNam NgayHomTruoc(NgayThangNam HomNay) {
		NgayThangNam HomTruoc;
		if (HomNay.Right) {
			if (HomNay.Ngay == 1 ){
				if (HomNay.Thang == 1) {
					HomTruoc.Nam = HomNay.Nam - 1;
					HomTruoc.Thang = 12;
					HomTruoc.Ngay = 31;
				}
				else if ( HomNay.Thang == 5
					|| HomNay.Thang == 7 || HomNay.Thang == 8 || HomNay.Thang == 10 || HomNay.Thang == 12) {
					HomTruoc.Nam = HomNay.Nam ;
					HomTruoc.Thang = HomNay.Thang -1;
					HomTruoc.Ngay = 30;
				}
				else if ( HomNay.Thang == 4 || HomNay.Thang == 6 || HomNay.Thang == 9 || HomNay.Thang == 11) {
					HomTruoc.Nam = HomNay.Nam;
					HomTruoc.Thang = HomNay.Thang - 1;
					HomTruoc.Ngay = 31;
				}
				else {
					if (Nam % 4 == 0 && Nam % 100 != 0 || Nam % 400 == 0) {
						HomTruoc.Nam = HomNay.Nam;
						HomTruoc.Thang = 2;
						HomTruoc.Ngay = 29;
					}
					else {
						HomTruoc.Nam = HomNay.Nam;
						HomTruoc.Thang = 2;
						HomTruoc.Ngay = 28;
					}
				}
			}
			else {
				HomTruoc.Nam = HomNay.Nam;
				HomTruoc.Thang = HomNay.Thang;
				HomTruoc.Ngay = HomNay.Ngay - 1;
			}
		}
		else {
			HomTruoc.Nam = -1;
			HomTruoc.Thang = -1;
			HomTruoc.Ngay = -1;
		}
		return HomTruoc;
	}
	NgayThangNam NgayHomSau(NgayThangNam HomNay) {
		NgayThangNam HomSau;
		if (HomNay.Right) {
			if (HomNay.Ngay == 31) {
				if (HomNay.Thang == 12) {
					HomSau.Nam = HomNay.Nam + 1;
					HomSau.Thang = 1;
					HomSau.Ngay = 1;
				}
				else if (HomNay.Thang == 1 || HomNay.Thang == 5
					|| HomNay.Thang == 7 || HomNay.Thang == 8 || HomNay.Thang == 10 || HomNay.Thang == 12) {
					HomSau.Nam = HomNay.Nam;
					HomSau.Thang = HomNay.Thang + 1;
					HomSau.Ngay = 1;
				}
			}
			else if (HomNay.Ngay == 30) {
				if (HomNay.Thang == 4 || HomNay.Thang == 6 || HomNay.Thang == 9 || HomNay.Thang == 11) {
					HomSau.Nam = HomNay.Nam;
					HomSau.Thang = HomNay.Thang + 1;
					HomSau.Ngay = 1;
				}
			}
			else if (HomNay.Ngay == 29) {
				if (Nam % 4 == 0 && Nam % 100 != 0 || Nam % 400 == 0) {
					if (HomNay.Thang == 2) {

						HomSau.Nam = HomNay.Nam;
						HomSau.Thang = 3;
						HomSau.Ngay = 1;
					}
				}
			}
			else if (HomNay.Ngay == 28) {
				if (Thang == 2) {
					if(HomNay.NamNhuan==false){
						HomSau.Nam = HomNay.Nam;
						HomSau.Thang = 3;
						HomSau.Ngay = 1;
					}
				}
			}
				
			else {
				HomSau.Nam = HomNay.Nam;
				HomSau.Thang = HomNay.Thang;
				HomSau.Ngay = HomNay.Ngay + 1;
			}
		}
		else {
			HomSau.Nam = -1;
			HomSau.Thang = -1;
			HomSau.Ngay = -1;
		}
		return HomSau;
	}
	int SoSanhTruocSau(NgayThangNam Ngay1, NgayThangNam Ngay2) {
		if (Ngay1.Nam > Ngay2.Nam) {
			return 1;
		}
		else if (Ngay1.Nam < Ngay2.Nam) {
			return 0;
		}
		else {
			if (Ngay1.Thang > Ngay2.Thang) {
				return 1;
			}
			else if (Ngay1.Thang < Ngay2.Thang) {
				return 0;
			}
			else {
				if (Ngay1.Ngay > Ngay2.Ngay) {
					return 1;
				}
				else if (Ngay1.Ngay < Ngay2.Ngay) {
					return 0;
				}

			}
		}
		return -1;

	}
	void TruocSau(NgayThangNam Ngay1, NgayThangNam Ngay2) {
		int i = SoSanhTruocSau(Ngay1, Ngay2);
		if (i == 1) {
			Ngay1.XuatNgayThangNam(); cout << "dung sau ";
			Ngay2.XuatNgayThangNam();
		}
		else if (i ==0 ) {
			Ngay1.XuatNgayThangNam(); cout << "dung truoc ";
			Ngay2.XuatNgayThangNam();
		}
		if (i ==- 1) {
			Ngay1.XuatNgayThangNam(); cout << "trung ";
			Ngay2.XuatNgayThangNam();
		}
	}
};