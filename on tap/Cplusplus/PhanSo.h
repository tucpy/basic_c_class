#pragma once
#include<iostream>
#pragma once

class UCLN {
	int a, b;
public:
	void KhoiTaoUoc(int uoc1, int uoc2) {
		a = uoc1;
		b = uoc2;
	}
	int TimUC() {
		while (a != b) {
			if (a > b) {
				a -= b;
			}
			else {
				b -= a;
			}
		}
		return a;
	}
};

class CPhanSo {
	int _TuSo, _MauSo;
	bool Right;
public:
	void TaoPhanSo(int TuSo, int MauSo) {
		_TuSo = TuSo;
		_MauSo = MauSo;
		if (_MauSo != 0) {
			Right = true;
		}
		else {
			Right = false;
		}
	}

	void NhapPhanSo() {
		/*do {
			system("cls");*/
			std::cout << "Nhap tu so: ";
			std::cin >> _TuSo;
			std::cout << "Nhap mau so: ";
			std::cin >> _MauSo;
		/*} while (_MauSo == 0);*/
			if (_MauSo == 0) {
				Right = false;
			}
			else { Right = true; }
	}

	void XuatPhanSo() {
		if (Right) {
			if (_TuSo == 0) {
				std::cout << 0;
			}
			else {
				std::cout << _TuSo << "/" << _MauSo << " ";
			}
		}
		else {
			std::cout << "ERROR!!! ";
		}
	}

	int XuatTuSo() {
			return _TuSo;	
	}
	int XuatMauSo() {
		if (Right) {
			return _MauSo;
		}
		else {
			return NULL;
		}
	}
	void GanTuSo(int Tuso) {
		_TuSo = Tuso;
	}
	void GanMauSo(int MauSo) {
		_MauSo = MauSo;
		if (MauSo == 0) Right = false;
	}
	CPhanSo NghichDao() {
		CPhanSo a;
		a._TuSo = _MauSo;
		a._MauSo = _TuSo;
		if (a._MauSo == 0)a.Right = false;
		return a;
	}
	CPhanSo RutGon() {
		UCLN UocChung;
		CPhanSo a;
		UocChung.KhoiTaoUoc(_TuSo, _MauSo);

		a.GanTuSo(_TuSo / UocChung.TimUC());
		a.GanMauSo(_MauSo / UocChung.TimUC());

		return a;

	}
	CPhanSo CongPhanSo(CPhanSo PhanSo1, CPhanSo PhanSo2) {
		CPhanSo tong;
		if (PhanSo1._MauSo == 0) {
			tong = PhanSo2;
			tong.Right = true;
			tong = tong.RutGon();
			return tong;
		}
		else if (PhanSo2._MauSo == 0) {
			tong = PhanSo1;
			tong.Right = true;
			tong = tong.RutGon();
			return tong;
		}
		tong._TuSo = PhanSo1._TuSo*PhanSo2._MauSo + PhanSo1._MauSo*PhanSo2._TuSo;
		tong._MauSo = PhanSo1._MauSo*PhanSo2._MauSo;
		tong = tong.RutGon();
		return tong;
	}
	CPhanSo TruPhanSo(CPhanSo PhanSo1, CPhanSo PhanSo2) {
		CPhanSo hieu;

		if (PhanSo1._MauSo == 0) {
			hieu = PhanSo2;
			hieu.Right = true;
			hieu = hieu.RutGon();
			return hieu;
		}
		else if (PhanSo2._MauSo == 0) {
			hieu = PhanSo1;
			hieu.Right = true;
			hieu = hieu.RutGon();
			return hieu;
		}

		hieu._TuSo = PhanSo1._TuSo*PhanSo2._MauSo - PhanSo1._MauSo*PhanSo2._TuSo;
		hieu._MauSo = PhanSo1._MauSo*PhanSo2._MauSo;
		hieu = hieu.RutGon();
		return hieu;
	}
	CPhanSo TichPhanSo(CPhanSo PhanSo1, CPhanSo PhanSo2) {
		CPhanSo tich;
		if (PhanSo1._MauSo == 0 || PhanSo2._MauSo == 0) {

			tich.Right = false;
			return tich;
		}
		tich._TuSo = PhanSo1._TuSo*PhanSo2._TuSo;
		tich._MauSo = PhanSo1._MauSo*PhanSo2._MauSo;

		tich = tich.RutGon();
		return tich;

	}
	CPhanSo ChiaPhanSo(CPhanSo PhanSo1, CPhanSo PhanSo2) {
		CPhanSo thuong;
		PhanSo2 = PhanSo2.NghichDao();
		if (PhanSo1._MauSo == 0 || PhanSo2._MauSo == 0 || PhanSo2._TuSo == 0) {
			thuong.Right = false;
			return thuong;
		}
		thuong._TuSo = PhanSo1._TuSo*PhanSo2._TuSo;
		thuong._MauSo = PhanSo1._MauSo*PhanSo2._MauSo;
		thuong = thuong.RutGon();
		return thuong;

	}
};

