#pragma once
class hinh_chu_nhat
{
public:
	/*Dac diem - bien - thuoc tinh*/
	int dai;
	int rong;

	/*hanh vi/hanh dong - ham - phuong thuc*/
	int tinh_chuVi();
	int tinh_DienTich();
	void function();
	void function(int a);
	void function(float a);
	/*ham tao: ham Tu dong duoc goi khi doi tuong duoc tao ra
	- Ham tao la ham:
		+ khong co output
		+ co input => co nhieu ham tao
		+ ten trung voi class
	*/
	hinh_chu_nhat();
	hinh_chu_nhat(int dai, int rong);

	/*Ham huy: ham Tu dong duoc goi khi doi tuong bi giai phong vung nho
	- Ham huy la ham:
		+ khong co output
		+ khong co input => class chi duy nhat 1 ham huy
		+ ten trung voi class nhung them ~ truoc ten ham

	*/
	~hinh_chu_nhat();
}; 

