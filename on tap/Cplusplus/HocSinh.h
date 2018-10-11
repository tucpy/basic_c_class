
#include<iostream>
#include<string>
#pragma warning(disable : 4996)
#pragma once
using namespace std;

class HocSinh {
	char HoTen[256];
	double DiemToan, DiemVan;
public:
	void NhapHocSinh() {
		int i = 0;
		cout << "Nhap ho ten hoc sinh : ";
		gets_s(HoTen, 256);
		while (HoTen[i] != NULL) {
			i++;
		}
		HoTen[i] = '\0';

		cout << "Nhap diem mon toan : ";
		cin >> DiemToan;
		cout << "Nhap diem mon van : ";
		cin >> DiemVan;
	}
	void XuatHocSinh() {
		cout << "Ho va ten : ";
		cout << HoTen << endl;
		cout << "Diem mon toan : " << DiemToan << endl;
		cout << "Diem mon van : " << DiemVan << endl;
	}

	string XuatTen() {
		return HoTen;
	}

	double XuatDiemToan() {
		return DiemToan;
	}

	double XuatDiemVan() {
		return DiemVan;
	}

	void GanHoTen(char Ten[]) {
		strcpy(HoTen, Ten);
	}
	void GanDiemToan(double Toan) {
		DiemToan = Toan;
	}
	void GanDiemVan(double Van) {
		DiemVan = Van;
	}
	double DiemTrungBinh(HocSinh HocSinh1) {
		double TrungBinh = (HocSinh1.DiemToan + DiemVan) / 2;
		return TrungBinh;
	}
	int XepLoai(HocSinh HocSinh1) {
		int HocLuc;
		double TrungBinh = DiemTrungBinh(HocSinh1);
		if (TrungBinh >= 8.0) {
			HocLuc = 0;
			return HocLuc;
		}
		else if (TrungBinh >= 7.0) {
			int HocLuc = 1;
			return HocLuc;
		}
		else if (TrungBinh >= 5) {
			HocLuc = 2;
			return HocLuc;
		}
		else {
			HocLuc = 3;
			return HocLuc;
		}
	}
	void XepLoaiHocLuc(HocSinh HocSinh1) {
		double DiemTrungBinh = HocSinh1.XepLoai(HocSinh1);
		if (DiemTrungBinh == 0) {
			cout << "Gioi ";
		}
		else if (DiemTrungBinh == 1) {
			cout << "Kha ";
		}
		else if (DiemTrungBinh == 2) {
			cout << "Trung Binh ";
		}
		else {
			cout << "Yeu ";
		}
	}
};
