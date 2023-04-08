#include"HinhHoc.h"
#include<stdio.h>

int hinh_chu_nhat::tinh_chuVi()
{
	return (dai + rong) * 2;
}

int hinh_chu_nhat::tinh_DienTich()
{
	return dai * rong;
}

hinh_chu_nhat::hinh_chu_nhat()
{
	dai = 0;
	rong = 0;
	printf("Ham tao khong input duoc goi \r\n");
}

hinh_chu_nhat::hinh_chu_nhat(int dai, int rong)
{
	this->dai = dai;
	this->rong = rong;
	printf("Doi tuong duoc tao ra o dia chi\r\n");
}

void hinh_chu_nhat::function()
{
	printf("function khong doi so \r\n");
}

void hinh_chu_nhat::function(int a)
{
	printf("function co 1 doi so nguyen: %d\r\n", a);
}

void hinh_chu_nhat::function(float a)
{
	printf("function co 1 doi so thuc: %f\r\n", a);
}

hinh_chu_nhat::~hinh_chu_nhat()
{
	printf("Doi tuong bi giai phong vung nho o dia chi 0x%x\r\n", this);
}