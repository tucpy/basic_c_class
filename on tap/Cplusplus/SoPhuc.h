#pragma once
#include<iostream>
#include<math.h>
#pragma once


class CSoPhuc {
	double _PhanThuc, _PhanAo;
public:
	void TaoSoPhuc(double PhanThuc, double PhanAo) {
		_PhanThuc = PhanThuc;
		_PhanAo = PhanAo;
		
	}

	void NhapSoPhuc() {

		system("cls");
		std::cout << "Nhap phan thuc: ";
		std::cin >> _PhanThuc;
		std::cout << "Nhap phan ao: ";
		std::cin >> _PhanAo;


	}

	void XuatSoPhuc() {
		if (_PhanAo >= 0) {
			std::cout << _PhanThuc << " + " << _PhanAo << "i ";
		}
		else {
			std::cout << _PhanThuc << " " << _PhanAo << "i ";
		}
	}

	double XuatPhanThuc() {
		return _PhanThuc;
	}

	double XuatPhanAo() {
		return _PhanAo;
	}

	void GanPhanThuc(double PhanThuc) {
		_PhanThuc = PhanThuc;
	}

	void GanPhanAo(double PhanAo) {
		_PhanAo = PhanAo;		
	}

	double Module() {
		double module;
		module = sqrtf(powf(_PhanThuc,2) + powf(_PhanAo,2));
		return module;
	}

	CSoPhuc CongSoPhuc(CSoPhuc SoPhuc1, CSoPhuc SoPhuc2) {
		CSoPhuc tong;
		tong._PhanThuc = SoPhuc1._PhanThuc + SoPhuc2._PhanThuc;
		tong._PhanAo = SoPhuc1._PhanAo + SoPhuc2._PhanAo;
		return tong;
	}
	CSoPhuc TruSoPhuc(CSoPhuc SoPhuc1, CSoPhuc SoPhuc2) {
		CSoPhuc hieu;
		hieu._PhanThuc = SoPhuc1._PhanThuc - SoPhuc2._PhanThuc;
		hieu._PhanAo = SoPhuc1._PhanAo - SoPhuc2._PhanAo;
		return hieu;
	}
	CSoPhuc TichSoPhuc(CSoPhuc SoPhuc1, CSoPhuc SoPhuc2) {
		CSoPhuc tich;
		tich._PhanThuc = SoPhuc1._PhanThuc*SoPhuc2._PhanThuc - SoPhuc2._PhanAo*SoPhuc1._PhanAo;

		tich._PhanAo = SoPhuc1._PhanThuc * SoPhuc2._PhanAo + SoPhuc1._PhanAo*SoPhuc2._PhanThuc;
		return tich;
	}
	CSoPhuc ThuongSoPhuc(CSoPhuc SoPhuc1, CSoPhuc SoPhuc2) {
		CSoPhuc thuong;
		double mau = powf(SoPhuc2._PhanThuc, 2) + powf(SoPhuc2._PhanAo, 2);
		thuong._PhanThuc = (SoPhuc1._PhanThuc*SoPhuc2._PhanThuc + SoPhuc2._PhanAo*SoPhuc1._PhanAo)/mau;
		thuong._PhanAo = (SoPhuc1._PhanAo*SoPhuc2._PhanThuc - SoPhuc1._PhanThuc*SoPhuc2._PhanAo)/mau;
		return thuong;
	}
	
};

