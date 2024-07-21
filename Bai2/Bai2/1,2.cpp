//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//#define KICH_THUOC 15
//
//typedef struct {
//    int phanNguyen;
//    int tuSo;
//    int mauSo;
//} HonSo;
//
//void taoMangHonSoNgauNhien(HonSo b[], int n) {
//    for (int i = 0; i < n; i++) {
//        b[i].phanNguyen = rand() % 101; 
//        b[i].tuSo = rand() % 101;       
//        do {
//            b[i].mauSo = rand() % 101; 
//        } while (b[i].mauSo == 0);     
//    }
//}
//
//void inMangHonSo(HonSo b[], int n) {
//    for (int i = 0; i < n; i++) {
//        printf("%d %d/%d ", b[i].phanNguyen, b[i].tuSo, b[i].mauSo);
//    }
//    printf("\n");
//}
//
//int main() {
//    srand((unsigned int)time(0));
//
//    HonSo b[KICH_THUOC];
//    taoMangHonSoNgauNhien(b, KICH_THUOC);
//    printf("Mang hon so ngau nhien: ");
//    inMangHonSo(b, KICH_THUOC);
//
//    return 0;
//}
