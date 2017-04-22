#include "stdio.h"
#include "conio.h"
/*
Đọc tập tin nhị phân
fread(&ptr, size, len, FILE *);
Ghi tập tin nhị phân
fwrite(&prt, size, len, FILE *);
Xoá tập tin
remove(<đường dẫn + tên tập tin>);
Đổi tên tập tin
rename(<tên tập tin cũ>, <tên tập tin mới>);
Di chuyển con trỏ tập tin:
fseek(FILE *, <độ dời>, <mốc>);
mốc:
• SEEK_SET dời dến đầu tập tin (giá trị 0).
• SEEK_CUR dời vị trí hiện hành (giá trị 1).
• SEEK_END dời đến cuối tập tin (giá trị 2).
-----------------------------------------
Cho biết vị trí con trỏ file
ftell(FILE *);
--------------------------------------------------
*/
void main()
{
	FILE *f;
	/*FILE *<tên biến>;*/
	f=fopen("D:\\Learn\laptrinhC\TapTin", "rt");
	/*fopen(<đường dẫn tên tập tin>, <kiểu truy nhập>);
	Các kiểu truy nhập tập tin thông dụng:
	• t là kiểu truy nhập tập tin đối với dạng tập tin văn bản.
	• b là kiểu truy nhập tập tin đối với dạng tập tin nhị phân.
	• r mở ra để đọc (ready only).
	• w mở ra để ghi (create / write).
	• a mở ra để thêm vào (append).
	• r+ mở ra để đọc và ghi (modify).*/
	fclose(f);
	fcloseall();
	/*Đóng một tập tin
	fclose(<biến con trỏ tập tin>);
	Đóng tất cả tập tin
	fcloseall();*/

}
