#define _CRT_SECURE_NO_WARNINGS
#include "iostream"
#include "fstream"
using namespace std;
typedef struct SV
{
	char mssv[100] = "";
	char hoten[1000] = "";
	char ho[1000] = "", ten[100] = "";
	char ngaysinh[15] = "";
	char gt[4] = "";
	float toan = 0, ly = 0, hoa = 0 , tb = 0;
};
void linkf(char link[])
{
	char c = ' ';
	int i = 0;
	fstream f;
	if (link[1] != ':')
	{
		f.open(link, ios_base::in);
		do
		{
			cout << endl << "Nhap link file (them dau \\) : ";
			while ((c = getchar()) != '\n')
			{
				link[i] = c;
				i++;
			}
			link[i] = '\0';
			f.open(link, ios_base::in);
			if (!f.is_open())
			{
				cout << endl << "Ban nhao link sai moi nhap lai!";
			}
		} while (!f.is_open());
		f.close();
	}
}
int soSV(char link[])
{
	fstream f;
	f.open(link, ios_base::in);
	int sosv = 0;
	char c = ' ';
	while (c != -1)
		{
			c = f.get();
			if (c == '\n') sosv++;
		}
	sosv++;
	f.close();
	return sosv;
}
int readf(char link[], SV *sv )
{
	fstream f;
	int i = 0,j =0;
	char sdiem[8] = "";
	char c = ' ';
	f.open(link, ios_base::in);
	do
	{
		j = 0;
		//1412888-Le Thi A (17/06/1993, Nu) 8.5 	9	8
		while ((c = f.get()) != '-')
		{
			sv[i].mssv[j] = c;
			j++;
		}
		j = 0;
		while ((c = f.get()) != '(')
		{
			sv[i].hoten[j] = c;
			j++;
		}
		sv[i].hoten[j - 1] = '\0';
		j = 0;
		while ((c = f.get()) != ',')
		{
			sv[i].ngaysinh[j] = c;
			j++;
		}
		f.get(c);
		j = 0;
		while ((c = f.get()) != ')')
		{
			sv[i].gt[j] = c;
			j++;
		}
		f.get(c);
		j = 0;
		strcmp(sdiem, "");
		while ((c = f.get()) != '\t')
		{
			sdiem[j] = c;
			j++;
		}
		sv[i].toan = atof(sdiem);
		j = 0;
		strcpy(sdiem, "");
		while ((c = f.get()) != '\t')
		{
			sdiem[j] = c;
			j++;
		}
		sv[i].ly = atof(sdiem);
		j = 0;
		c = ' ';
		strcpy(sdiem, "");
		while (c != '\n')
		{
			c = f.get();
			if ( c == -1)
			{
				c = '\n';
				continue;
			}
			sdiem[j] = c;
			j++;
		}
		sv[i].hoa = atof(sdiem);
		sv[i].tb = ((sv[i].toan + sv[i].ly + sv[i].hoa) / 3);
		i++;

	} while (f.eof() == false);
	f.close();
	return i;
}
void tachten(SV *sv, int sosv)
{
	int i, j, lenghoten;
	for (int i = 0; i < sosv; i++)
	{
		j = strlen(sv[i].hoten) - 1;
		lenghoten = strlen(sv[i].hoten);
		while (sv[i].hoten[j] != ' ') j--;
		int l = 0;
		for (int k = (j + 1); k < lenghoten; k++)
		{
			sv[i].ten[l] = sv[i].hoten[k];
			l++;
		}
		l = 0;
		for (int k = 0; k < j; k++)
		{
			sv[i].ho[l] = sv[i].hoten[k];
			l++;
		}
	}
}
void outSV(SV *sv,int sosv)
{
	for (int i = 0; i < sosv; i++)
	{
		cout << endl << sv[i].mssv << "-" << sv[i].hoten << " (" << sv[i].ngaysinh << ", " << sv[i].gt << ")\t"
			<< sv[i].toan << "\t" << sv[i].ly << "\t" << sv[i].hoa << "  TB= " << sv[i].tb;
	}
}
void crtlinkmssv_HTML(char linkin[], char mssv[] , char linkout[])
{
	char temp[100] = "";
	strcpy(temp, mssv);
	strcpy(linkout, "");
	strcat(temp, ".HTML");
	if (linkin[1] == ':')
	{
		strcpy(linkout, linkin);
		int i = strlen(linkin) - 1;
		while (linkin[i] != '\\') i--;
		linkout[i + 1] = '\0';
	}
	strcat(linkout, temp);
}
void crtfmssv_HTML(char linkf[], SV *sv, int sttsv)
{
	fstream f;
	char ss ='"';
	f.open(linkf, ios_base::out);
	f << "<html>"
		<< "\n\t<title>Bang diem tong ket</title>"
		<< "\n\t<body>\n\t\t<p style ='text-align:center'>\n\t\t\t<b>"
		<< "\n\t\t\t\t<span style = 'font-size:20.0pt;font-family:" << ss << "Tahoma" << ss
		<< "'>\n\t\t\t\t\tBANG DIEM CHI TIET"
		<< "\n\t\t\t\t<br>\n\t\t\t\tSinh Viên: " << sv[sttsv].hoten
		<< " (" << sv[sttsv].mssv << ")" << "\n\t\t\t\t</span>"
		<< "\n\t\t\t</b>\n\t\t</p>\n\t\t<table align=center border=1 cellspacing=0 cellpadding=5>"
		<< "\n\t\t\t\t<tr>\n\t\t\t\t\t<td align = center><b>Toan</b></td>\n"
		<< "\t\t\t\t\t<td align = center><b>Ly</b></td>"
		<< "\n\t\t\t\t\t<td align = center><b>Hoa</b></td>\n\t\t\t\t\t<td align = center><b>Diem trung binh</b></td>"
		<< "\n\t\t\t</tr>\n\t\t\t</tr>"
		<< "\n\t\t\t\t<td align=center>" << sv[sttsv].toan << "</td>\n\t\t\t\t<td align = center>" << sv[sttsv].ly << "</td>"
		<< "\n\t\t\t\t<td align = center>" << sv[sttsv].hoa << "</td>\n\t\t\t\t<td align = center>" << sv[sttsv].tb << "</td>";
	f << "\n\t\t\t<\tr>\n\t\t</table>\n\t\</body>\n<html>";
	f.close();
}
void crtlinkbangdiem_HTML(char linkin[], char linkout[])
{
	strcpy(linkout, "");
	if (linkin[1] == ':')
	{
		strcpy(linkout, linkin);
		int i = strlen(linkin) - 1;
		while (linkin[i] != '\\') i--;
		linkout[i + 1] = '\0';
	}
	strcat(linkout, "BANGDIEM.HTML");
}
void BANGDIEM_HTML(char linkftxt[])
{
	int sosv = soSV(linkftxt);
	SV *sv = new SV[sosv];
	readf(linkftxt, sv);
	tachten(sv, sosv);
	fstream BANGDIEM,MSSV;
	char linkfmssv[10000] = "";
	char linkfBANGDIEM[10000] = "";
	crtlinkbangdiem_HTML(linkftxt, linkfBANGDIEM);
	BANGDIEM.open(linkfBANGDIEM, ios_base::out);
	char ss[5];
	ss[0] = '"';
	BANGDIEM << "<html>"
		<< "\n\t<title>Bang diem tong ket</title>"
		<< "\n\t<body>\n\t\t<p style ='text-align:center'>\n\t\t\t<b>"
		<< "\n\t\t\t\t<span style = 'font-size:20.0pt;font-family:" << ss[0] << "Tahoma" << ss[0]
		<<"'>\n\t\t\t\t\tBANG DIEM TONG KET\n\t\t\t\t</span>"
		<< "\n\t\t\t</b>\n\t\t</p>\n\t\t<table align=center border=1 cellspacing=0 cellpadding=5>"
		<< "\n <tr> \n <td align = center><b>MSSV</b></td> \n <td align = center><b>Ho va ten lot</b></td>"
		<< "\n <td align = center><b>Ten</b></td> \n <td align = center><b>Ngay sinh</b></td>"
		<< "\n <td align = center><b>Gioi tinh</b></td> \n <td align = center><b>Diem trung binh</b></td>"
		<< "\n <td align = center><b>Chi tiet</b></td> \n </tr> ";
	for (int i = 0; i < sosv; i++)
	{
		BANGDIEM << "\n <tr> \n <td>" << sv[i].mssv << "</td>"
			<< "\n <td>" << sv[i].ho << "</td> \n <td> " << sv[i].ten << "</td>"
			<< "\n <td align = center>" << sv[i].ngaysinh << "</td>"
			<< "\n <td align = center>" << sv[i].gt << "</td>"
			<< "\n <td align = center> " << sv[i].tb << "</td>";
			crtlinkmssv_HTML(linkftxt, sv[i].mssv, linkfmssv);
			crtfmssv_HTML(linkfmssv, sv, i);
			BANGDIEM << "\n <td align = center><a href = """ << linkfmssv << """>Xem diem</a></td> \n </tr>";
	}
	BANGDIEM  << "\n </table> \n </body> \n </html>";
	BANGDIEM.close();
}
void main()
{
	char s[1000] = "";
	linkf(s);
	BANGDIEM_HTML(s);
}