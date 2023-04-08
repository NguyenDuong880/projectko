#include<stdio.h>
#include"HinhHoc.h"
#include<malloc.h>
void main()
{
	/*hinh_chu_nhat A = {0};
	A.dai = 10;
	A.rong = 20;
	int chuvi = A.tinh_chuVi();
	printf("Chu vi hinh chu nhat A: %d\r\n", chuvi);
	hinh_chu_nhat B = { 0 };
	B.dai = 5;
	B.rong = 10;
	int dientich = B.tinh_DienTich();
	printf("Dien tich hinh chu nhat B: %d\r\n", dientich);*/

	/*hinh_chu_nhat arr[10] = {0};
	arr[0].dai;
	arr[1].rong;


	hinh_chu_nhat* px = 0;
	px->dai =10;
	px->rong=20;
	int* dientich = 0;
	*dientich =(px->tinh_chuVi());*/
	//printf("Chu vi hinh chu nhat: %p\r\n", dientich);
	//(*px).dai;
	//(*px).rong;
	
	hinh_chu_nhat A;
	hinh_chu_nhat* pA =(hinh_chu_nhat*)malloc(sizeof(hinh_chu_nhat));
	pA->dai;
	pA->rong;
	pA->tinh_DienTich();

	free(pA);
	
	hinh_chu_nhat* pB = new hinh_chu_nhat;

	delete pB;
	//hinh_chu_nhat* pA = &A;
	
	//A.function((float)1.0);
	//A.function(2);
	//hinh_chu_nhat B(1, 2);
	//B.function();
	/*
	tinh truu tuong
	tinh da hinh: cho phep khai bao nhieu phuong thuc co cung ten voi nhau 
	nhung khac doi so truyen vao: kieu du lieu, so luong
	tinh dong goi/bao mat
	tinh ke thua
	*/
	//HinhChuNhat E
	delete pA;
	hinh_chu_nhat C;
	hinh_chu_nhat D;
	

}

