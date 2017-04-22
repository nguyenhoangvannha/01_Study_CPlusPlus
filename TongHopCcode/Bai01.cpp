#include "stdio.h"
#include "conio.h"
#include "math.h"
#include "stdlib.h"
#define MAX 100
typedef struct Scoso
{
	int tu, mau;
};
typedef struct SCoSo
{
	int tu, mau;
};
typedef struct SDonThuc
{
	Scoso coso;
	int bac;
};
typedef struct SDaThuc
{
	int tu, mau;
};
void RutGonDT(SDonThuc &DT)
{
	int x = DT.coso.tu;
	int y = DT.coso.mau;
	int temp;
	while (y != 0)
	{
		temp = x%y;
		x = y;
		y = temp;
	}
	DT.coso.tu = DT.coso.tu / x;
	DT.coso.mau = DT.coso.mau / x;
}
void NhapDonThuc(SDonThuc &DT)
{
	printf("\nNhap tu va mau cua co so:");
	scanf_s("%d%d", &DT.coso.tu, &DT.coso.mau);
	printf("\nNhap bac don thuc:");
	scanf_s("%d", &DT.bac);
}
void XuatDonThuc(SDonThuc DT)
{
	printf("\n(%d/%d).X^%d", DT.coso.tu, DT.coso.mau, DT.bac);
}
SDonThuc Tich2DonThuc(SDonThuc DT1, SDonThuc DT2)
{
	SDonThuc DT;
	DT.coso.tu = (DT1.coso.tu *DT2.coso.tu);
	DT.coso.mau = (DT1.coso.mau*DT2.coso.mau);
	DT.bac = DT1.bac + DT2.bac;
	RutGonDT(DT);
	printf("\nTich hai don thuc la:(%d/%d).X^%d", DT.coso, DT.bac);
	return DT;
}
void Chia2DonThuc(SDonThuc DT1, SDonThuc DT2)
{
	SDonThuc DT;
	DT.bac = DT1.bac - DT2.bac;
	DT.coso.tu = DT1.coso.tu * DT2.coso.mau;
	DT.coso.mau = DT1.coso.mau *DT2.coso.tu;
	RutGonDT(DT);
	printf("\nThuong hai don thuc la: (%d/%d)X^(%d)", DT.coso.tu, DT.coso.mau, DT.bac);
}
void Daohamcap1DT(SDonThuc DT1)
{
	SDonThuc DT;
	DT.coso.tu = DT1.coso.tu *DT1.bac;
	DT.coso.mau = DT1.coso.mau;
	DT.bac = DT1.bac - 1;
	RutGonDT(DT);
	printf("\nDao ham cap 1 cua don thuc la : (%d/%d).X^%d", DT.coso.tu, DT.coso.mau, DT.bac);
}
void Daohamcapk1DT(SDonThuc DT1)
{
	int k;
	printf("\nNhap vao k: ");
	scanf_s("%d", &k);
	SDonThuc DT;
	for (int i = 0; i < k; i++)
	{
		DT.coso.tu = DT1.coso.tu *DT1.bac;
		DT1.coso.tu = DT.coso.tu;
		DT1.bac--;
		DT.bac = DT1.bac - 1;
	}
	DT.coso.mau = DT1.coso.mau;
	RutGonDT(DT);
	printf("\nDao ham cap k cua don thuc la : (%d/%d).X^%d", DT.coso.tu, DT.coso.mau, DT.bac);
}
void TinhGiaTriDonThuc(SDonThuc DT1)
{
	Scoso x0;
	printf("\nNhap TU VA MAU x0=");
	scanf_s("%d%d", &x0.tu, &x0.mau);
	x0.tu = pow(x0.tu, DT1.bac);
	SDonThuc DT;
	DT.coso.tu = DT1.coso.tu*x0.tu;
	DT.coso.mau = DT1.coso.mau*x0.mau;
	DT.bac = DT1.bac;
	RutGonDT(DT);
	printf("\nGia tri cua don thuc tai x0 la: %d/%d", DT.coso.tu, DT.coso.mau);
}
void DonThuc()
{
	SDonThuc DT1, DT2;
	int chon;
menu:
	printf("\n--------------------menu--------------------");
	printf("\n1.Nhap don thuc\n2.Xuat don thuc\n3.Tich hai don thuc\n4.Thuong hai don thuc");
	printf("\n5.Do ham cap 1 cua don thuc\n6.Dao ham cap k cua don thuc\n7.Tinh gia tri don thuc tai x = x0");
	printf("\n8.Thoat\n--------------------------------------------\n\t\tChon:");
	scanf_s("%d", &chon);
	switch (chon)
	{
	case 1:NhapDonThuc(DT1); break;
	case 2:XuatDonThuc(DT1); break;
	case 3:
		NhapDonThuc(DT1); NhapDonThuc(DT2);
		Tich2DonThuc(DT1, DT2); break;
	case 4:
		NhapDonThuc(DT1); NhapDonThuc(DT2);
		Chia2DonThuc(DT1, DT2); break;
	case 5:
		NhapDonThuc(DT1);
		Daohamcap1DT(DT1); break;
	case 6:
		NhapDonThuc(DT1);
		Daohamcapk1DT(DT1); break;
	case 7:
		NhapDonThuc(DT1);
		TinhGiaTriDonThuc(DT1); break;
	case 8:break;
	default:printf("\nBan nhap sai moi nhap lai:"); goto menu;
	}
	if (chon != 8) goto menu;
}
void NhapDaThuc(SDaThuc DT1[2][MAX], int &BacMax)
{
	printf("\nNhap bac cao nhat cua da thuc: ");
	scanf_s("%d", &BacMax);
	for (int i = 0; i <= BacMax; i++)
	{
		printf("\nNhap tu va mau cua co so cua bien bac %d: ", i);
		scanf_s("%d%d", &DT1[0][i].tu, &DT1[0][i].mau);
		DT1[1][i].tu = i;
		DT1[1][i].mau = 1;
	}
}
void XuatDaThuc(SDaThuc DT1[2][MAX], int BacMax)
{
	printf("\n");
	for (int i = BacMax; i >= 1; i--)
	{
		printf(" (%d/%d).X^%d + ", DT1[0][i].tu, DT1[0][i].mau, i);
	}
	printf(" (%d/%d)", DT1[0][0].tu, DT1[0][0].mau);
}
void XuatDaThucKieu2(SDaThuc DT1[2][MAX*MAX], int BacMax)
{
	printf("\n");
	for (int i = BacMax; i >= 1; i--)
	{
		printf(" (%d/%d).X^%d + ", DT1[0][i].tu, DT1[0][i].mau, i);
	}
	printf(" (%d/%d)", DT1[0][0].tu, DT1[0][0].mau);
}
void QuiDong(SDaThuc DT1[2][MAX], SDaThuc DT2[2][MAX], int i)
{
	int x = DT1[0][i].mau;
	int y = DT2[0][i].mau;
	int temp;
	while (y != 0)
	{
		temp = x%y;
		x = y;
		y = temp;
	}
	int BCNN;
	BCNN = (DT1[0][i].mau*DT2[0][i].mau) / x;

}
void RutGonDaThuc(SDaThuc DT1[2][MAX], int i)
{
	int x = DT1[0][i].tu;
	int y = DT1[0][i].mau;
	int temp;
	while (y != 0)
	{
		temp = x%y;
		x = y;
		y = temp;
	}
	DT1[0][i].tu = DT1[0][i].tu / x;
	DT1[0][i].mau = DT1[0][i].mau / x;
}
void Tong2DaThuc(SDaThuc DT1[2][MAX], SDaThuc DT2[2][MAX], int BacMax1, int BacMax2)
{
	int BacMax = BacMax1;
	if (BacMax2 > BacMax1) BacMax = BacMax2;
	SDaThuc DT[2][MAX];
	for (int i = 0; i <= BacMax; i++)
	{
		DT[0][i].tu = DT1[0][i].tu*DT2[0][i].mau + DT2[0][i].tu*DT1[0][i].mau;
		DT[0][i].mau = DT1[0][i].mau * DT2[0][i].mau;
		RutGonDaThuc(DT, i);
	}
	printf("\nTong hai da thuc la:");
	XuatDaThuc(DT, BacMax);
}
void Hieu2DaThuc(SDaThuc DT1[2][MAX], SDaThuc DT2[2][MAX], int BacMax1, int BacMax2)
{
	int BacMax = BacMax1;
	if (BacMax2 > BacMax1) BacMax = BacMax2;
	SDaThuc DT[2][MAX];
	for (int i = 0; i <= BacMax; i++)
	{
		DT[0][i].tu = DT1[0][i].tu*DT2[0][i].mau - DT2[0][i].tu*DT1[0][i].mau;
		DT[0][i].mau = DT1[0][i].mau * DT2[0][i].mau;
		RutGonDaThuc(DT, i);
	}
	printf("\nHieu hai da thuc la:");
	XuatDaThuc(DT, BacMax);
}
void RutGonCoSo(Scoso &CS)
{
	int x = CS.tu;
	int y = CS.mau;
	int temp;
	while (y != 0)
	{
		temp = x%y;
		x = y;
		y = temp;
	}
	CS.tu = CS.tu / x;
	CS.mau = CS.mau / x;
}
void Tich2DaThuc(SDaThuc DT1[2][MAX], SDaThuc DT2[2][MAX], int BacMax1, int BacMax2)
{
	int BacMax = BacMax1 + BacMax2;
	SDaThuc DT[2][MAX*MAX] = { 0 };
	for (int i = 0; i < (MAX*MAX); i++)
		DT[0][i].mau = 1;
	for (int i = BacMax1; i >= 0; i--)
		for (int j = BacMax2; j >= 0; j--)
		{
			SDonThuc DonT, DonT1, DonT2;
			DonT1.bac = i; DonT2.bac = j;
			DonT1.coso.tu = DT1[0][i].tu; DonT2.coso.tu = DT2[0][j].tu;
			DonT1.coso.mau = DT1[0][i].mau; DonT2.coso.mau = DT2[0][j].mau;

			DonT = Tich2DonThuc(DonT1, DonT2);

			DT[0][i + j].tu = DT[0][i + j].tu*DonT.coso.mau + DonT.coso.tu*DT[0][i + j].mau;
			DT[0][i + j].mau = DT[0][i + j].mau*DonT.coso.mau;
		}
	printf("\nTich 2 da thuc la : ");
	XuatDaThucKieu2(DT, BacMax);
}
void Daohambac1DT(SDaThuc DT1[2][MAX], int BacMax)
{
	SDaThuc DT[2][MAX];
	for (int i = BacMax; i >0; i--)
	{
		DT[0][i - 1].tu = DT1[0][i].tu *i;
		DT[0][i - 1].mau = DT1[0][i].mau;
	}
	printf("\nDao ham bac 1 cua da thuc la:");
	XuatDaThuc(DT, BacMax - 1);
}
void DaohambackDT(SDaThuc DT1[2][MAX], int BacMax)
{
	int k;
	SDaThuc DT[2][MAX] = { 0 };
	for (int i = 0; i < MAX; i++)
		DT[0][i].mau = 1;
	printf("\nNhap bac ban muon dao hamphai <= %d", BacMax + 1);
	scanf_s("%d", &k);
	for (int i = 0; i < k; i++)
	{
		for (int j = BacMax; j >0; j--)
		{
			DT[0][j - 1].tu = DT1[0][j].tu*j;
			DT[0][j - 1].mau = DT1[0][j].mau;
		}
		BacMax--;
		DT1 = DT;
	}
	printf("\nDao ham bac %d la: ", k);
	XuatDaThuc(DT, BacMax);
}
Scoso TinhGTDonT(SDonThuc DT1, Scoso x0)
{
	x0.tu = pow(x0.tu, DT1.bac);
	Scoso CS;
	CS.tu = DT1.coso.tu*x0.tu;
	CS.mau = DT1.coso.mau*x0.mau;
	RutGonCoSo(CS);
	return CS;
}
void TinhGiaTriDaThuc(SDaThuc DT1[2][MAX], int BacMax)
{
	Scoso x0;
	Scoso GTDT, GTDonT;
	GTDT.tu = 0;
	GTDT.mau = 1;
	printf("\nNhap TU VA MAU cua x0: ");
	scanf_s("%d%d", &x0.tu, &x0.mau);
	SDonThuc DonT;
	for (int i = 0; i <= BacMax; i++)
	{
		DonT.bac = i;
		DonT.coso.tu = DT1[0][i].tu;
		DonT.coso.mau = DT1[0][i].mau;
		GTDonT = TinhGTDonT(DonT, x0);
		GTDT.tu = GTDT.tu*GTDonT.mau + GTDonT.tu*GTDT.mau;
		GTDT.mau = GTDT.mau*GTDonT.mau;
	}
	printf("\n Gia tri da thuc tai x0 la: %d/%d", GTDT.tu, GTDT.mau);
}
void DaThuc()
{
	SDaThuc DT1[2][MAX] = { 0 }, DT2[2][MAX] = { 0 };
	int BacMax1, Chon, BacMax2;
	for (int i = 0; i < MAX; i++)
		DT1[0][i].mau = 1;
	for (int i = 0; i < MAX; i++)
		DT2[0][i].mau = 1;
menu:
	printf("\n----------------menu-------------------\n1.Nhap da thuc\n2.Xuat da thuc\n3.Tong hai da thuc\n4.Hieu hai da thuc");
	printf("\n5.Tich hai da thuc\n6.Dao ham cap 1 cua da thuc\n7.Dao ham cap k cua da thuc\n8.Tinh gia tri da thuc tai x0");
	printf("\n9.Thoat\n---------------------------------\n\t\tChon: ");
	scanf_s("%d", &Chon);
	switch (Chon)
	{
	case 1: NhapDaThuc(DT1, BacMax1); break;
	case 2: XuatDaThuc(DT1, BacMax1); break;
	case 3:
		NhapDaThuc(DT1, BacMax1);
		NhapDaThuc(DT2, BacMax2);
		Tong2DaThuc(DT1, DT2, BacMax1, BacMax2); break;
	case 4:
		NhapDaThuc(DT1, BacMax1);
		NhapDaThuc(DT2, BacMax2);
		Hieu2DaThuc(DT1, DT2, BacMax1, BacMax2); break;
	case 5:
		NhapDaThuc(DT1, BacMax1);
		NhapDaThuc(DT2, BacMax2);
		Tich2DaThuc(DT1, DT2, BacMax1, BacMax2); break;
	case 6:
		NhapDaThuc(DT1, BacMax1);
		Daohambac1DT(DT1, BacMax1); break;
	case 7:
		NhapDaThuc(DT1, BacMax1);
		DaohambackDT(DT1, BacMax1); break;
	case 8:
		NhapDaThuc(DT1, BacMax1);
		TinhGiaTriDaThuc(DT1, BacMax1); break;
	case 9: break;
	default: printf("\nBan nhap sai moi nhap lai "); goto menu;
	}
	if (Chon != 9) goto menu;
}
typedef struct SNgay
{
	int ngay, thang, nam;
};
int KiemTraNamNhuan(SNgay N)
{
	if (N.nam % 400 == 0 || (N.nam % 4 == 0 && N.nam % 100 != 0)) return 1;
	return 0;
}
void NhapNgay(SNgay &N)
{
	printf("\nNhap nam: ");
	scanf_s("%d", &N.nam);
menu1:
	printf("\nNhap thang: ");
	scanf_s("%d", &N.thang);
	if (N.thang > 12 || N.thang < 1)
	{
		printf("\nBan nhap sai thang moi nhap lai!");
		goto menu1;
	}
	printf("\nNhap ngay: ");
	scanf_s("%d", &N.ngay);
	if (N.ngay < 1) printf("\nBan nhap ngay sai moi nhap lai!");
	else if (KiemTraNamNhuan(N) == 1 && N.ngay > 28) printf("\nNam ban nhap la nam nhuan ban nhap ngay sai moi nhap lai!");
	else if (KiemTraNamNhuan(N) == 0 && N.ngay > 29) printf("\nBan nhap ngay sai moi nhap lai!");
}
void XuatNgay(SNgay N)
{
	printf("\nNgay: %d / %d / %d", N.ngay, N.thang, N.nam);
}
int STTngaytrongtam(SNgay N)
{
	int stt = 0;
	switch (1)
	{
	case 1:
		if (N.thang == 1)
		{
			stt += N.ngay;
			break;
		}
		else stt += 31;
	case 2:
		if (N.thang == 2)
		{
			stt += N.ngay;
			break;
		}
		else if (KiemTraNamNhuan(N) == 1) stt += 28;
		else stt += 29;
	case 3:
		if (N.thang == 3)
		{
			stt += N.ngay;
			break;
		}
		else stt += 31;
	case 4:
		if (N.thang == 4)
		{
			stt += N.ngay;
			break;
		}
		else stt += 30;
	case 5:
		if (N.thang == 5)
		{
			stt += N.ngay;
			break;
		}
		else stt += 31;
	case 6:
		if (N.thang == 6)
		{
			stt += N.ngay;
			break;
		}
		else stt += 30;
	case 7:
		if (N.thang == 7)
		{
			stt += N.ngay;
			break;
		}
		else stt += 31;
	case 8:
		if (N.thang == 8)
		{
			stt += N.ngay;
			break;
		}
		else stt += 31;
	case 9:
		if (N.thang == 9)
		{
			stt += N.ngay;
			break;
		}
		else stt += 30;
	case 10:
		if (N.thang == 10)
		{
			stt += N.ngay;
			break;
		}
		else stt += 31;
	case 11:
		if (N.thang == 11)
		{
			stt += N.ngay;
			break;
		}
		else stt += 30;
	case 12:
		if (N.thang == 12)
		{
			stt += N.ngay;
			break;
		}
		else stt += 31;
		break;
	}
	return stt;
}
int STTNgaytu111(SNgay N)
{
	int stt = 0;
	stt = 365 * (N.nam - 1);
	if (KiemTraNamNhuan(N) == 0) stt += N.nam / 4; else stt += N.nam / 4 - 1;
	stt += STTngaytrongtam(N);
	return stt;
}
int Khoangcachgiua2ngay(SNgay N1, SNgay N2)
{
	int KC = 0;
	KC = abs(STTNgaytu111(N1) - STTNgaytu111(N2));
	return KC;
}
void TruocSauKngay(SNgay N1)
{
	int k, ks, kt;
	printf("\nNhap k: ");
	scanf_s("%d", &k);
	SNgay N;
	//Sau k ngay
	ks = k;
	N = N1;
	if ((N1.thang == 1 || N1.thang == 3 || N1.thang == 5 || N1.thang == 7 || N1.thang == 8 || N1.thang == 10 || N1.thang == 12) && ks > (31 - N1.ngay))  ks = ks - (31 - N1.ngay);
	if ((N1.thang == 4 || N1.thang == 6 || N1.thang == 9 || N1.thang == 11) && ks > (30 - N1.ngay)) ks -= (30 - N1.ngay);
	if (N1.thang == 2 && KiemTraNamNhuan(N1) == 1 && ks > (29 - N1.ngay)) ks -= (29 - N1.ngay);
	if (N1.thang == 2 && KiemTraNamNhuan(N1) == 0 && ks > (28 - N1.ngay)) ks -= (28 - N1.ngay);
	if ((N1.thang == 1 || N1.thang == 3 || N1.thang == 5 || N1.thang == 7 || N1.thang == 8 || N1.thang == 10 || N1.thang == 12) && ks <= (31 - N1.ngay)) { N.ngay = N1.ngay + ks; ks = 0; }
	if ((N1.thang == 4 || N1.thang == 6 || N1.thang == 9 || N1.thang == 11) && ks <= (30 - N1.ngay)) { N.ngay = N1.ngay + ks; ks = 0; }
	if (N1.thang == 2 && KiemTraNamNhuan(N1) == 1 && ks <= (29 - N1.ngay)) { N.ngay = N1.ngay + ks; ks = 0; }
	if (N1.thang == 2 && KiemTraNamNhuan(N1) == 0 && ks <= (28 - N1.ngay)) { N.ngay = N1.ngay + ks; ks = 0; }
	if (ks > 0)
	{
		switch (N1.thang + 1)
		{
		case 1:if (ks <= 31)
		{
			N.thang = 1;
			N.ngay = ks;
			ks = 0;
			break;
		}
			   ks -= 31;
		case 2:
			if (ks <= 29 && KiemTraNamNhuan(N1) == 1)
			{
				N.thang = 2;
				N.ngay = ks;
				ks = 0;
				break;
			}
			if (ks <= 28 && KiemTraNamNhuan(N1) == 0)
			{
				N.thang = 2;
				N.ngay = ks;
				ks = 0;
				break;
			}
			if (KiemTraNamNhuan(N1) == 1) ks -= 29;
			else ks -= 28;
		case 3:if (ks <= (31))
		{
			N.thang = 3;
			N.ngay = ks;
			ks = 0;
			break;
		}
			   ks -= 31;
		case 4: if (ks <= (30))
		{
			N.thang = 4;
			N.ngay = ks;
			ks = 0;
			break;
		}
				ks -= 30;
		case 5:if (ks <= 31)
		{
			N.thang = 5;
			N.ngay = ks;
			ks = 0;
			break;
		}
			   ks -= 31;
		case 6: if (ks <= (30))
		{
			N.thang = 6;
			N.ngay = ks;
			ks = 0;
			break;
		}
				ks -= 30;
		case 7:if (ks <= 31)
		{
			N.thang = 7;
			N.ngay = ks;
			ks = 0;
			break;
		}
			   ks -= 31;
		case 8:if (ks <= (31))
		{
			N.thang = 8;
			N.ngay = ks;
			ks = 0;
			break;
		}
			   ks -= 31;
		case 9: if (ks <= (30))
		{
			N.thang = 9;
			N.ngay = ks;
			ks = 0;
			break;
		}
				ks -= 30;
		case 10:if (ks <= (31))
		{
			N.thang = 10;
			N.ngay = ks;
			ks = 0;
			break;
		}
				ks -= 31;
		case 11: if (ks <= (30))
		{
			N.thang = 11;
			N.ngay = ks;
			ks = 0;
			break;
		}
				 ks -= 30;
		case 12:if (ks <= (31))
		{
			N.thang = 12;
			N.ngay = ks;
			ks = 0;
			break;
		}
				ks -= 31;
		}
	}
	while (ks > 0)
	{
		N.nam = N.nam + 1;
		switch (1)
		{
		case 1: if (ks <= 31)
		{
			N.ngay = ks;
			N.thang = 1;
			ks = 0;
			break;
		}
				ks -= 31;
		case 2: if (ks <= 29 && KiemTraNamNhuan(N) == 1)
		{
			N.ngay = ks;
			N.thang = 2;
			ks = 0;
			break;
		}
				if (ks <= 28 && KiemTraNamNhuan(N) == 0)
				{
					N.ngay = ks;
					N.thang = 2;
					ks = 0;
					break;
				}
				if (KiemTraNamNhuan(N) == 1) ks -= 29;
				else ks -= 28;
		case 3:if (ks <= 31)
		{
			N.ngay = ks;
			N.thang = 3;
			ks = 0;
			break;
		}
			   ks -= 31;
		case 4: if (ks <= 30)
		{
			N.ngay = ks;
			N.thang = 4;
			ks = 0;
			break;
		}
				ks -= 30;
		case 5:if (ks <= 31)
		{
			N.ngay = ks;
			N.thang = 5;
			ks = 0;
			break;
		}
			   ks -= 31;
		case 6: if (ks <= 30)
		{
			N.ngay = ks;
			N.thang = 6;
			ks = 0;
			break;
		}
				ks -= 30;
		case 7:if (ks <= 31)
		{
			N.ngay = ks;
			N.thang = 7;
			ks = 0;
			break;
		}
			   ks -= 31;
		case 8:if (ks <= 31)
		{
			N.ngay = ks;
			N.thang = 8;
			ks = 0;
			break;
		}
			   ks -= 31;
		case 9: if (ks <= 30)
		{
			N.ngay = ks;
			N.thang = 9;
			ks = 0;
			break;
		}
				ks -= 30;
		case 10:if (ks <= 31)
		{
			N.ngay = ks;
			N.thang = 10;
			ks = 0;
			break;
		}
				ks -= 31;
		case 11: if (ks <= 30)
		{
			N.ngay = ks;
			N.thang = 11;
			ks = 0;
			break;
		}
				 ks -= 30;
		case 12:if (ks <= 31)
		{
			N.ngay = ks;
			N.thang = 12;
			ks = 0;
			break;
		}
				ks -= 31;
		}
	}
	printf("\nSau do %d la ngay :", k);
	XuatNgay(N);
	//Truoc k ngay
	kt = k;
	N = N1;
	if (kt > N1.ngay) kt -= N1.ngay;
	else { N.ngay = N1.ngay - kt; kt = 0; }
	if (kt > 0)
	{
		switch (N1.thang - 1)
		{
		case 12: if (kt < 31)
		{
			N.ngay = 31 - kt;
			N.thang = 12;
			kt = 0;
			break;
		} kt -= 31;
		case 11: if (kt < 30)
		{
			N.ngay = 30 - kt;
			N.thang = 11;
			kt = 0;
			break;
		} kt -= 30;
		case 10: if (kt < 31)
		{
			N.ngay = 31 - kt;
			N.thang = 10;
			kt = 0;
			break;
		} kt -= 31;
		case 9: if (kt < 30)
		{
			N.ngay = 30 - kt;
			N.thang = 9;
			kt = 0;
			break;
		} kt -= 30;
		case 8: if (kt < 31)
		{
			N.ngay = 31 - kt;
			N.thang = 8;
			kt = 0;
			break;
		} kt -= 31;
		case 7: if (kt < 31)
		{
			N.ngay = 31 - kt;
			N.thang = 7;
			kt = 0;
			break;
		} kt -= 31;
		case 6: if (kt < 30)
		{
			N.ngay = 30 - kt;
			N.thang = 6;
			kt = 0;
			break;
		} kt -= 30;
		case 5: if (kt < 31)
		{
			N.ngay = 31 - kt;
			N.thang = 5;
			kt = 0;
			break;
		} kt -= 31;
		case 4: if (kt < 30)
		{
			N.ngay = 30 - kt;
			N.thang = 4;
			kt = 0;
			break;
		} kt -= 30;
		case 3: if (kt < 31)
		{
			N.ngay = 31 - kt;
			N.thang = 3;
			kt = 0;
			break;
		} kt -= 31;
		case 2: if (kt < 29 && KiemTraNamNhuan(N) == 1)
		{
			N.ngay = 29 - kt;
			N.thang = 2;
			kt = 0;
			break;
		}
				if (kt < 28 && KiemTraNamNhuan(N) == 0)
				{
					N.ngay == 28 - kt;
					N.thang = 2;
					kt = 0;
					break;
				}
				if (kt >= 29 && KiemTraNamNhuan(N) == 1) kt -= 29;
				else kt -= 28;
		case 1:if (kt < 31)
		{
			N.ngay = 31 - kt;
			N.thang = 1;
			kt = 0;
			break;
		} kt -= 31;
		}
	}
	while (kt > 0)
	{
		N.nam--;
		switch (12)
		{
		case 12: if (kt < 31)
		{
			N.thang = 12;
			N.ngay = 31 - kt;
			kt = 0;
			break;
		} kt -= 31;
		case 11: if (kt < 30)
		{
			N.thang = 11;
			N.ngay = 30 - kt;
			kt = 0;
			break;
		} kt -= 30;
		case 10: if (kt < 31)
		{
			N.thang = 10;
			N.ngay = 31 - kt;
			kt = 0;
			break;
		} kt -= 31;
		case 9: if (kt < 30)
		{
			N.thang = 9;
			N.ngay = 30 - kt;
			kt = 0;
			break;
		} kt -= 30;
		case 8: if (kt < 31)
		{
			N.thang = 8;
			N.ngay = 31 - kt;
			kt = 0;
			break;
		} kt -= 31;
		case 7: if (kt < 31)
		{
			N.thang = 7;
			N.ngay = 31 - kt;
			kt = 0;
			break;
		} kt -= 31;
		case 6: if (kt < 30)
		{
			N.thang = 6;
			N.ngay = 30 - kt;
			kt = 0;
			break;
		} kt -= 30;
		case 5: if (kt < 31)
		{
			N.thang = 5;
			N.ngay = 31 - kt;
			kt = 0;
			break;
		} kt -= 31;
		case 4: if (kt < 30)
		{
			N.thang = 4;
			N.ngay = 30 - kt;
			kt = 0;
			break;
		} kt -= 30;
		case 3: if (kt < 31)
		{
			N.thang = 3;
			N.ngay = 31 - kt;
			kt = 0;
			break;
		} kt -= 31;
		case 2: if (kt < 29 && KiemTraNamNhuan(N) == 1)
		{
			N.thang = 2;
			N.ngay = 29 - kt;
			kt = 0;
			break;
		}
				if (kt < 28 && KiemTraNamNhuan(N) == 0)
				{
					N.thang = 2;
					N.ngay = 28 - kt;
					kt = 0;
					break;
				}
				if (KiemTraNamNhuan(N) == 1) kt -= 29;
				else kt -= 28;
		case 1: if (kt < 31)
		{
			N.thang = 1;
			N.ngay = 31 - kt;
			kt = 0;
			break;
		} kt -= 31;
		}
	}
	printf("\nTruoc do %d la ngay :", k);
	XuatNgay(N);

}
void SoSanh2Ngay(SNgay N1, SNgay N2)
{
	int kc;
	kc = STTNgaytu111(N1) - STTNgaytu111(N2);
	if (kc > 0) { printf("\n"); XuatNgay(N1); printf("sau "); XuatNgay(N2); printf(" %d ngay.", kc); }
	if (kc < 0) { printf("\n"); XuatNgay(N2); printf("sau "); XuatNgay(N1); printf(" %d ngay.", -kc); }
	if (kc = 0) printf("\nHai ngay nay trung nhau.");
}
void Ngay()
{
	int chon;
	SNgay N1, N2;
	NhapNgay(N1);
menu:
	printf("\n--------------------------MENU----------------------------\n1.Nhap ngay\n2.Xuat ngay\n3.Kiem tra nam nhuan");
	printf("\n4.Tinh STT ngay trong nam\n5.Tinh STT ngay tu 1/1/1\n6.Tim ngay truoc do/sau do k ngay");
	printf("\n7.Tinh khoang cach giua 2 ngay\n8.So sanh 2 ngay\n9.Thoat\n-----------------Chon: ");
	scanf_s("%d", &chon);
	switch (chon)
	{
	case 1: NhapNgay(N1); break;
	case 2: XuatNgay(N1); break;
	case 3: if (KiemTraNamNhuan(N1) == 1) printf("\nNam nhuan"); else printf("\nNam khong nhuan"); break;
	case 4: printf("\nSTT cua ngay trong nam la:%d", STTngaytrongtam(N1)); break;
	case 5: printf("\nSTT cua ngay tu 1/1/1 la:%d", STTNgaytu111(N1)); break;
	case 6:
		TruocSauKngay(N1);
		break;
	case 7: NhapNgay(N1);
		NhapNgay(N2);
		printf("\nKhoang cach 2 ngay la: %d", Khoangcachgiua2ngay(N1, N2)); break;
	case 8:
		NhapNgay(N1);
		NhapNgay(N2);
		SoSanh2Ngay(N1, N2); break;
	case 9:break;
	default: printf("\nBan nhap sai moi nhap lai!"); goto menu;
	}
	if (chon != 9) goto menu;
}
typedef struct SDiem2D
{
	SCoSo x, y;
};
void NhapDiem(SDiem2D &D1)
{
	printf("\nNhap TU VA MAU cua hoanh do x:\n");
	scanf_s("%d%d", &D1.x.tu, &D1.x.mau);
	printf("\nNhap TU VA MAU cua tung do y:\n");
	scanf_s("%d%d", &D1.y.tu, &D1.y.mau);
}
void XuatDiem(SDiem2D D1)
{
	printf("\nDiem: (%d/%d;%d/%d)\n", D1.x.tu, D1.x.mau, D1.y.tu, D1.y.mau);
}
void KhoangCach2D(SDiem2D D1, SDiem2D D2)
{
	//SCoSo khoangcach;
	SCoSo x, y;
	x.tu = ((D2.x.tu*D1.x.mau - D1.x.tu*D2.x.mau));
	x.tu = pow(x.tu, 2);
	x.mau = D2.x.mau*D1.x.mau;
	x.mau = pow(x.mau, 2);
	y.tu = D2.y.tu*D1.y.mau - D1.y.tu*D2.y.mau;
	y.tu = pow(y.tu, 2);
	y.mau = D2.y.mau*D1.y.mau;
	y.mau = pow(y.mau, 2);
	//khoangcach.tu = (x.tu*y.mau + y.tu*x.mau);
	//khoangcach.mau = (x.mau*y.mau);
	float tong;
	tong = sqrt((x.tu*y.mau + y.tu*x.mau) / (x.mau*y.mau));
	printf("\nKhoang cach giua 2 diem la: %f", tong);
}
void Diemdoixung(SDiem2D D1)
{
	//Qua goc toa do O(0;0)
	SDiem2D DXO;
	DXO.x.tu = -D1.x.tu;
	DXO.x.mau = D1.x.mau;
	DXO.y.tu = -D1.y.tu;
	DXO.y.mau = D1.y.mau;
	printf("\nDiem doi xung qua goc toa do la: ");
	XuatDiem(DXO);
	//Qua Ox
	SDiem2D Ox;
	Ox.x.tu = D1.x.tu;
	Ox.x.mau = D1.x.mau;
	Ox.y.tu = -D1.y.tu;
	Ox.y.mau = D1.y.mau;
	printf("\nDiem doi xung qua Ox la: ");
	XuatDiem(Ox);
	//Qua oy
	SDiem2D Oy;
	Oy.x.tu = -D1.x.tu;
	Oy.x.mau = D1.x.mau;
	Oy.y.tu = D1.y.tu;
	Oy.y.mau = D1.y.mau;
	printf("\nDiem doi xung qua Oy la: ");
	XuatDiem(Oy);
}
int DiemthuocPhan4nao(SDiem2D D1)
{
	float x, y;
	x = D1.x.tu / D1.x.mau;
	y = D1.y.tu / D1.y.mau;
	if (D1.x.tu == 0 || D1.y.tu == 0) { printf("\nDiem thuoc 1 trong hai truc toa do!"); return 0; }
	if (x > 0 && y > 0) printf("\nDiem thuoc phan tu thu nhat!");
	else if (x < 0 && y > 0)  printf("\nDiem thuoc phan tu thu hai!");
	else if (x < 0 && y < 0)printf("\nDiem thuoc phan tu thu ba!");
	else if (x > 0 && y < 0)  printf("\nDiem thuoc phan tu thu tu!");
	return 1;
}
void Oxy()
{
	SDiem2D D1, D2;
	int chon = 1;
menu:
	printf("\n-----------------menu------------------\n1.Nhap diem\n2.Xuat diem\n3.Khoang cach giua 2 diem");
	printf("\n4.Diem doi xung qua goc toa do/ox/oy\n5.Diem thuoc phan tu nao\n6.Thoat");
	printf("\n------------------------------\n\t\tChon: ");
	scanf_s("%d", &chon);
	switch (chon)
	{
	case 1:NhapDiem(D1); break;
	case 2:XuatDiem(D1); break;
	case 3:
		NhapDiem(D1);
		NhapDiem(D2);
		KhoangCach2D(D1, D2); break;
	case 4:
		NhapDiem(D1);
		Diemdoixung(D1); break;
	case 5:
		NhapDiem(D1);
		DiemthuocPhan4nao(D1); break;
	case 6: break;
	default:printf("\nNhap sai moi nhap lai!"); goto menu;
	}
	if (chon != 6)goto menu;
}
typedef struct SPhanSo
{
	int tu, mau;
};
SPhanSo PS;
void Nhap1PS(SPhanSo &PS)
{
	printf("\nNhap tu: ");
	scanf_s("%d", &PS.tu);
	printf("\nNhap mau: ");
	scanf_s("%d", &PS.mau);
	if (PS.mau == 0) { printf("\nBan nhap mau sai moi nhap lai "); Nhap1PS(PS); }
}
void Xuat1PS(SPhanSo PS)
{
	printf("\nPhan so la: %d/%d", PS.tu, PS.mau);
}
int  UCLN(int a, int b)
{
	int temp;
	while (b != 0)
	{
		temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}
void Rutgon(SPhanSo &PS)
{
	int ucln;
	ucln = UCLN(PS.tu, PS.mau);
	PS.tu = PS.tu / ucln;
	PS.mau = PS.mau / ucln;
}
void QuyDong2PS(SPhanSo &PS1, SPhanSo &PS2)
{
	int ucln, bcnn;
	ucln = UCLN(PS1.mau, PS2.mau);
	bcnn = (PS1.mau*PS2.mau) / ucln;
	PS1.tu = PS1.tu*(bcnn / PS1.mau);
	PS2.tu = PS2.tu*(bcnn / PS2.mau);
	PS1.mau = PS2.mau = bcnn;
}
void Tong2PS(SPhanSo PS1, SPhanSo PS2)
{
	SPhanSo ps1, ps2, tong;
	ps1 = PS1;
	ps2 = PS2;
	QuyDong2PS(ps1, ps2);
	tong.tu = ps1.tu + ps2.tu;
	tong.mau = ps1.mau;
	printf("\nTong hai phan so la : ");
	Rutgon(tong);
	Xuat1PS(tong);
}
void Hieu2PS(SPhanSo PS1, SPhanSo PS2)
{
	SPhanSo ps1, ps2, hieu;
	ps1 = PS1;
	ps2 = PS2;
	QuyDong2PS(ps1, ps2);
	if (ps1.tu > ps2.tu) hieu.tu = ps1.tu - ps2.tu;
	else hieu.tu = ps2.tu - ps1.tu;
	hieu.mau = ps1.mau;
	Rutgon(hieu);
	printf("\nHieu 2 phan so la : ");
	Xuat1PS(hieu);
}
void Tich2PS(SPhanSo PS1, SPhanSo PS2)
{
	SPhanSo tich;
	tich.tu = PS1.tu*PS2.tu;
	tich.mau = PS1.mau*PS2.mau;
	Rutgon(tich);
	printf("\nTich hai phan so la: ");
	Xuat1PS(tich);
}
void Thuong2PS(SPhanSo PS1, SPhanSo PS2)
{
	SPhanSo thuong;
	thuong.tu = PS1.tu*PS2.mau;
	thuong.mau = PS1.mau * PS2.tu;
	Rutgon(thuong);
	printf("\nThuong hai phan so la: ");
	Xuat1PS(thuong);
}
void KTPSToiGian(SPhanSo PS1)
{
	if (UCLN(PS1.tu, PS1.mau) == PS1.mau) printf("\nPhan so toi gian!");
	else printf("\nPhan so chua toi gian!");
}
void PSAmHayDuong(SPhanSo PS1)
{
	if ((PS1.tu*PS1.mau) >= 0) printf("\nPhan so duong!");
	else printf("\nPhan so am!");
}
void SoSanh2PS(SPhanSo PS1, SPhanSo PS2)
{
	SPhanSo ps1, ps2;
	ps1 = PS1;
	ps2 = PS2;
	QuyDong2PS(ps1, ps2);
	if (ps1.tu > ps2.tu)
	{
		printf("\nPhan so lon hon la : ");
		Xuat1PS(ps1);
	}
	else if (ps2.tu >ps1.tu)
	{
		printf("\nPhan so lon hon la : ");
		Xuat1PS(ps2);
	}
	else printf("\nHai phan so bang nhau");
}
void PhanSo()
{
	SPhanSo PS1, PS2;
	int chon, tinh;
menu:
	printf("\n---------------Menu---------------\n\t1.Nhap phan so\n\t2.Rut gon phan so\n\t3.Tinh tong hai phan so");
	printf("\n\t4.Tinh hieu hai phan so\n\t5.Tinh tich hai phan so\n\t6.Tinh thuong phan so thu nhat chia phan so thu 2");
	printf("\n\t7.Kiem tra phan so toi gian\n\t8.Quy dong phan so\n\t9.Kiem tra phan so am hay duong");
	printf("\n\t10.So sanh hai phan so\n\t11.Thoat\n\t\tChon:");
	scanf_s("%d", &chon);
	switch (chon)
	{
	case 1:
		printf("Ban muon tinh bao nhieu phan so (< 3): ");
		scanf_s("%d", &tinh);
		if (tinh == 1)
		{
			Nhap1PS(PS1);
			break;
		}
		Nhap1PS(PS1);
		Nhap1PS(PS2);
		break;
	case 2:
		Nhap1PS(PS1);
		Rutgon(PS1);
		printf("\Phan so da rut gon: "); Xuat1PS(PS1);
		break;
	case 3:
		Nhap1PS(PS1);
		Nhap1PS(PS2);
		Tong2PS(PS1, PS2); break;
	case 4:
		Nhap1PS(PS1);
		Nhap1PS(PS2);
		Hieu2PS(PS1, PS2); break;
	case 5:
		Nhap1PS(PS1);
		Nhap1PS(PS2);
		Tich2PS(PS1, PS2); break;
	case 6:
		Nhap1PS(PS1);
		Nhap1PS(PS2);
		Thuong2PS(PS1, PS2); break;
	case 7:
		Nhap1PS(PS1);
		KTPSToiGian(PS1); break;
	case 8:
		Nhap1PS(PS1);
		Nhap1PS(PS2);
		QuyDong2PS(PS1, PS2);
		printf("\Phan so da quy dong la : \n");
		Xuat1PS(PS1);
		Xuat1PS(PS2);
		break;
	case 9:
		Nhap1PS(PS1);
		PSAmHayDuong(PS1); break;
	case 10:
		Nhap1PS(PS1);
		Nhap1PS(PS2);
		SoSanh2PS(PS1, PS2); break;
	case 11: break;
	default: printf("\nBan nhap sai moi nhap lai");
		goto menu;
	}
	if (chon != 11) goto menu;
}
typedef struct SDiem2DTamgiacTamgiac
{
	float x, y;
};
float Khoangcach(SDiem2DTamgiacTamgiac D1, SDiem2DTamgiacTamgiac D2)
{
	float d;
	d = sqrt(pow(D2.x - D1.x, 2) + pow(D2.y - D1.y, 2));
	return d;
}
typedef struct STamGiac
{
	SDiem2DTamgiacTamgiac A, B, C;
};
void NhapTG(STamGiac &ABC)
{
	SDiem2DTamgiacTamgiac Temp;
	printf("\nNhap x  va y cua  diem thu nhat: ");
	scanf_s("%f%f", &ABC.A.x, &ABC.A.y);
menu1:
	printf("\nNhap x  va y cua  diem thu hai: ");
	scanf_s("%f%f", &ABC.B.x, &ABC.B.y);
	if ((ABC.B.x == ABC.A.x) && (ABC.A.y == ABC.B.y))
	{
		printf("\nBan nhap sai diem thu hai!\nMoi Nhap Lai!");
		goto menu1;
	}
menu2:
	printf("\nNhap x  va y cua  diem thu ba: ");
	scanf_s("%f%f", &ABC.C.x, &ABC.C.y);
	if ((ABC.C.x == ABC.B.x) && (ABC.C.y == ABC.B.y))
	{
		printf("\nBan nhap diem thu ba trung voi diem thu 2 moi nhap lai!");
		goto menu2;
	}
	else if ((ABC.C.x == ABC.A.x) && (ABC.C.y == ABC.A.y))
	{
		printf("\nBan nhap diem thu ba trung voi diem thu nhat moi nhap lai!");
		goto menu2;
	}
}
void XuatTG(STamGiac ABC)
{
	printf("\nTam giac cua ban la : (%0.1f,%0.1f);(%0.1f,%0.1f);(%0.1f,%0.1f).", ABC.A.x, ABC.A.y, ABC.B.x, ABC.B.y, ABC.C.x, ABC.C.y);
}
void ChuviDientich(STamGiac ABC)
{
	float CV, DT;
	SDiem2DTamgiacTamgiac A, B, C;
	A.x = ABC.A.x; A.y = ABC.A.y;
	B.x = ABC.B.x; B.y = ABC.B.y;
	C.x = ABC.C.x; C.y = ABC.C.y;
	CV = Khoangcach(A, B) + Khoangcach(B, C) + Khoangcach(C, A);
	printf("\nChu vi cua tam giac la: %0.3f (Don vi chu vi)", CV);
	CV = (float)CV / 2;
	DT = sqrt(CV*(CV - Khoangcach(A, B)*(CV - Khoangcach(B, C))*(CV - Khoangcach(C, A))));
	printf("\nDien tich cua ABC la: %0.3f (Don vi dien tich)", DT);
}
void TamGiac()
{
	int chon;
	STamGiac ABC;
menu:
	printf("\n---------------------menu-----------------------\n1.Nhap tam giac\n2.Xuat tam giac\n3.Tinh chu vi dien tich tam giac");
	printf("\n4.Thoat\n-----------------------------------------\n\t\tChon: ");
	scanf_s("%d", &chon);
	switch (chon)
	{
	case 1:NhapTG(ABC); break;
	case 2:XuatTG(ABC); break;
	case 3:ChuviDientich(ABC); break;
	case 4: break;
	default: printf("\nBan nhap sai moi nhap lai!"); goto menu;
	}
	if (chon != 4) goto menu;
}
void main()
{
	int select;
mainmenu:
	printf("\n---------Main menu--------------\n--\t1.Don thuc\n--\t2.Da thuc\n--\t3.Ngay thang nam");
	printf("\n--\t4.Oxy\n--\t5.Phan so\n--\t6.Tam giac\n--\t7.Thoat\n----Chon: ");
	scanf_s("%d", &select);
	switch (select)
	{
	case 1: DonThuc(); break;
	case 2: DaThuc(); break;
	case 3: Ngay(); break;
	case 4: Oxy(); break;
	case 5: PhanSo(); break;
	case 6: TamGiac(); break;
	case 7:exit(0);
	default: printf("\nBan nhap sai moi nhap lai!"); goto mainmenu;
	}
	goto mainmenu;
}