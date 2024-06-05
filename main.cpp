

#include <iostream>
#include <string.h>
#include <Windows.h>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <conio.h>
#include <stdlib.h>     /* srand, rand */
#include <time.h>
#include <fstream> // thao tac file
#include "graphics.h"
#pragma comment(lib, "graphics.lib")
#include <cstring>
#include <ctime>
#include <sstream>


#include "define.h"
#include "graphic.h"
#include "dohoa.h"
#include "ham.h"
#include "cautrucdanhmucsach.h"
#include "cautrucdausach.h"
#include "cautrucmuontra.h"
#include "cautructhedocgia.h"
#include "dohoa_dausach.h"
#include "dohoa_docgia.h"
//#include "ThongTin.h"
//#include "mylib.h"
//#include "menu.h"
#include "muontra.h"
#include "dms.h"

void menu() {
	settextstyle(BOLD_FONT, HORIZ_DIR, 8);
	setcolor(14);
	outtextxy(300, 20, (char*)"QUAN LY THU VIEN");


	button DrawDauSach(470, 140, 900, 200, 10, 1);
	char S44[20] = "DAU SACH";
	DrawDauSach.setTitle(S44, 4, 5);
	DrawDauSach.display();

	button DrawDanhMucSach(470, 250, 900, 310, 10, 1);
	char S55[20] = "DANH MUC SACH";
	DrawDanhMucSach.setTitle(S55, 4, 5);
	DrawDanhMucSach.display();

	button DrawMuonTra(470, 360, 900, 420, 10, 1);
	char S66[20] = "MUON TRA";
	DrawMuonTra.setTitle(S66, 4, 5);
	DrawMuonTra.display();

	button DrawDocGia(470, 470, 900, 530, 10, 1);
	char S77[20] = "DOC GIA";
	DrawDocGia.setTitle(S77, 4, 5);
	DrawDocGia.display();

}

int main(int argc, char* argv[])
{

	//initwindow(w, h, "Quan ly thu vien", 0, 0, 0, 1);
	//int n;
	//DS_DauSach list;
	//list.n = 0;
	//Nodedms node = NULL;
	//string s;
	////////setfillstyle(3, 3);
	//setcolor(15);// mau khung
	//setbkcolor(3);
	//cleardevice();
	//menu();

	//while (1) {
	//	if (ismouseclick(WM_LBUTTONDOWN)) {
	//		int pos_x, pos_y;
	//		getmouseclick(WM_LBUTTONDOWN, pos_x, pos_y);

	//		bool DauSach = pos_x >= 470 && pos_x <= 900 && pos_y >= 140 && pos_y <= 200;
	//		if (DauSach) {
	//			setcolor(15);// mau khung
	//			setbkcolor(3);
	//			cleardevice();
	//			settextstyle(BOLD_FONT, HORIZ_DIR, 1);
	//			//setcolor(14);
	//			In_DauSach();

	//			ReadDSDS(list);
	//			quickSort1(list, 0, list.n - 1);
	//			InDanhSachDauSach(list, 0, 10, 1);
	//			DisPlay_DSDS(list);
	//		}
	//	}
	//}
	/*TREE_DG tree;
	KhoiTao(tree);
	Read_info(tree);*/

	initwindow(w, h);
	TREE_DG DG;
	KhoiTao(DG);
	Read_info(DG);
	cap_nhap_AVL(DG);
	int pos_trang = 1;
	int pos_trang_qh = 1;
	main_sc(DG, pos_trang, pos_trang_qh);
	FreeMemory(DG);
}

//int main()
//{
//	/*TREE_DG temp;
//	KhoiTao(temp);
//	Read_info(temp);
//	displayMuonTra();*/
//	/*DS_DauSach list;
//	list.n = 0;
//	DauSach ds;
//	ReadDSDS(list);*/
//
//	/*TREE_DG DG;
//	KhoiTao(DG);
//	for (int i = 0; i < 5; ++i) {
//		Nhap(DG, list);
//	}
//	int sl = 5;
//	Write_info(DG, 5);*/
//	/*TREE_DG temp;
//	KhoiTao(temp);
//	Read_info(temp);
//	DuyetLNR(temp);*/
//
//	//DuyetLNR(DG);
//	/*int sl = 1;
//	Write_info(DG, 1);
//	TREE_DG temp;
//	KhoiTao(temp);
//	Read_info(temp);
//	DuyetLNR(temp);
//	*/
//	initwindow(w, h);
//	DS_DauSach list;
//	list.n = 0;
//	DauSach ds;
//	ReadDSDS(list);
//	TREE_DG tree;
//	KhoiTao(tree);
//	Read_info(tree);
//	//displayDms(list);
//	displayMuonTra(list, tree);
//	return 0;
//}


