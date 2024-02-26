#include<iostream>
#include<conio.h>
#include<stdio.h>
#define true 1
#define false 0
using namespace std;
void nhap(int& Cx, int& Cy, int& luong_nuoc){
	do{
		cout<<"Nhap 2 dung tich (Cx, Cy) dieu kien: Cx<Cy and Cx, Cy>0:";
		cin>>Cx>>Cy;
	}while((Cx<0)||(Cy<0)||(Cx>=Cy));
	cout<<"Nhap luong nuoc can dong:";
	cin>>luong_nuoc;
}
int TonTaiLoiGiai(int ucln_cua_CxCy, int luong_nuoc_can_dong){
	if((luong_nuoc_can_dong%ucln_cua_CxCy)==0) return true;
	return false;
}
int UocSoChgMax(int x, int y){
	if(y==0) return x;
	else return UocSoChgMax(y, x%y);
}
void xemLuongNcTrongBinh(int Cx, int Cy){
	cout<<"\n + Binh X hien tai chua: "<<Cx;
	cout<<"\n + Binh Y hien tai chua: "<<Cy<<endl;
	cout<<"\n";
}
int thucHienDongNuoc(int Cx, int Cy, int luong_nuoc_can_dong){
	int binh_x=0;
	int binh_y=0;
	int buoc=1;
	do{
		if(binh_x==Cx){
			cout<<"\n !! Buoc thu "<<buoc<<endl;
			cout<<" Dung luat L1:Neu binh X day, thi do het nuoc binh X di ";
			binh_x=0;
			buoc++;
			xemLuongNcTrongBinh(binh_x, binh_y);
		}
		else if(binh_y==0){
			cout<<"\n !! Buoc thu "<<buoc<<"\n";
			cout<<" Dung luat L2:Neu binh Y rong thi do day nuoc vao binh Y ";
			binh_y=Cy;
			buoc++;
			xemLuongNcTrongBinh(binh_x, binh_y);
		}
		else if(binh_x!=Cx && binh_y!=0){
			cout<<" Dung luat L3: Neu binh X khong day"
				<<" va binh Y khong rong thi trut nc \n"
				<<" tu binh Y sang binh X cho den khi binh X day"
				<<" hoac binh Y het nuoc."; cout<<endl;
			while(binh_x<Cx && binh_y!=0){
				cout<<"\n!! Buoc thu "<<buoc<<"\n";
				buoc++;
				if(binh_y>=Cx){
					int tam=binh_x;
					binh_x=Cx;
					binh_y-=Cx-tam;
				}
				else{
					binh_x+=binh_y;
					binh_y=0;
				}
				xemLuongNcTrongBinh(binh_x, binh_y);
			}
			cin.get();
		}
	}while(binh_x!=luong_nuoc_can_dong && binh_y!=luong_nuoc_can_dong);
	if(binh_x==luong_nuoc_can_dong) return Cx;
	else return Cy;
}
int main(){
	int dg_tich_binh_x;
	int dg_tich_binh_y;
	int luong_nuoc;
	nhap(dg_tich_binh_x, dg_tich_binh_y, luong_nuoc);
	int ucln_cuaXY=UocSoChgMax(dg_tich_binh_x, dg_tich_binh_y);
	cout<<"ucln_cuaXY="<<ucln_cuaXY<<"\n";
	if(TonTaiLoiGiai(ucln_cuaXY, luong_nuoc)==true){
		int binh_chua_luong_nuoc=thucHienDongNuoc(dg_tich_binh_x, dg_tich_binh_y, luong_nuoc);
		cout<<"\n Binh chua luong nuoc can dong "<<luong_nuoc<<" lit"<<" la Binh co dung tich="<<binh_chua_luong_nuoc<<"\n";
	}
	else{
		cout<<"\n Khong ton tai loi giai. Chuong trinh ket thuc \n";
	}
	getch();
}
