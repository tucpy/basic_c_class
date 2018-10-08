#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct PHANSO // PHANSO <- oldname
{
	int Tu;
	int Mau;
} PHANSO; // phai dat ten PHANSO (new name) phia duoi


PHANSO Nhap();
void Xuat(PHANSO p);
int USCLN(int a, int b);
void RutgonPS(PHANSO &p);
PHANSO cong2PS(PHANSO p1, PHANSO p2);
PHANSO tru2PS(PHANSO p1, PHANSO p2);
PHANSO nhan2PS(PHANSO p1, PHANSO p2);
PHANSO chia2PS(PHANSO p1, PHANSO p2);

int main ()
{
	PHANSO p1, p2;
	printf("Nhap phan so thu 1: ");
	p1 = Nhap();
	printf("Nhap phan so thu 2: ");
	p2 = Nhap();

    // Xuat 2 phan so vua nhap
	printf("Hai phan so nhap vao la: ");
	Xuat(p1);
	printf(" va ");
	Xuat(p2);
	printf("\n");

    // Cong 2 phan so
	PHANSO p3 = cong2PS(p1, p2);
	Xuat(p1);
	printf(" + ");
	Xuat(p2);
	printf(" = ");
	Xuat(p3);
    printf("\n");

    // Tru 2 phan so
    PHANSO p4 = tru2PS(p1,p2);
    Xuat(p4);
    printf("\n");

    // Nhan 2 phan so
    PHANSO p5 = nhan2PS(p1,p2);
    Xuat(p5);
    printf("\n");

    // Chia 2 phan so
    PHANSO p6 = chia2PS(p1,p2);
    Xuat(p6);
    printf("\n");

    return(0);

}


PHANSO Nhap()
{
	PHANSO p;
	printf("Nhap tu: "); scanf("%d", &p.Tu);
	do
	{
		printf("Nhap mau: "); scanf("%d", &p.Mau);
	} while (!(p.Mau != 0));

	if ((p.Tu < 0) && (p.Mau < 0))
	{
		p.Tu = -1 * p.Tu;
		p.Mau = -1 * p.Mau;
	}
	
	if ((p.Mau < 0) && (p.Tu > 0))
	{
		p.Tu = -1 * p.Tu;
		p.Mau = -1 * p.Mau;
	}
	// Don gian phan so truoc khi tra ve
	RutgonPS(p);
	return p;
}

void Xuat(PHANSO p)
{
	printf("%d/%d", p.Tu, p.Mau);
}

int USCLN(int a, int b)
{
	while (a != b) // khi a == b nghia la a la uoc so chung lon nhat
	{
		if (a > b) // lay so lon hon tru so nho hon den khi nao 2 ben bang nhau
			a -= b;
		else
			b -= a;
	}
	return a;
}

void RutgonPS(PHANSO &p)
{
	int us; // uoc so
	us = USCLN(abs(p.Tu), abs(p.Mau)); // phai dung abs vi neu tu hoac mau am thi ko tim duoc uoc so chung lon nhat
	p.Tu = p.Tu / us;
	p.Mau = p.Mau / us;
}

// Cong 2 phan so (-,-)

PHANSO cong2PS(PHANSO p1, PHANSO p2)
{
	PHANSO p;
	p.Tu = (p1.Tu * p2.Mau) + (p2.Tu * p1.Mau);
	p.Mau = p1.Mau * p2.Mau;
	RutgonPS(p);
	return p;
}

// Tru 2 phan so

PHANSO tru2PS(PHANSO p1, PHANSO p2)
{
	PHANSO p;
	p.Tu = (p1.Tu * p2.Mau) - (p2.Tu * p1.Mau);
	p.Mau = p1.Mau * p2.Mau;
    if (p.Tu == 0)
    {
        
    }
	RutgonPS(p);
	return p;
}

// Nhan 2 phan so

PHANSO nhan2PS(PHANSO p1, PHANSO p2)
{
	PHANSO p;
	p.Tu = p1.Tu * p2.Tu;
	p.Mau = p1.Mau * p2.Mau;
	RutgonPS(p);
	return p;
}


// Chia 2 phan so
PHANSO chia2PS(PHANSO p1, PHANSO p2)
{
	PHANSO p;
	p.Tu = p1.Tu * p2.Mau;
	p.Mau = p1.Mau * p2.Tu;
	RutgonPS(p);
	return p;
}

