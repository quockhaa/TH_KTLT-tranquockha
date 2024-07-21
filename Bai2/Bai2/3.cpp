//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//typedef struct {
//    int phanNguyen;
//    int tuSo;
//    int mauSo;
//} HonSo;
//
//int quyDongMauSo(int tu1, int mau1, int tu2, int mau2) {
//    int mau = mau1 * mau2;
//    int tu = tu1 * mau2 + tu2 * mau1;
//    return tu;
//}
//
//int soSanhHonSo(HonSo hs1, HonSo hs2) {
//    if (hs1.phanNguyen > hs2.phanNguyen) {
//        return 1; 
//    }
//    else if (hs1.phanNguyen < hs2.phanNguyen) {
//        return -1;
//    }
//    else {
//        int tu1 = hs1.tuSo + hs1.phanNguyen * hs1.mauSo;
//        int tu2 = hs2.tuSo + hs2.phanNguyen * hs2.mauSo;
//        int mau1 = hs1.mauSo;
//        int mau2 = hs2.mauSo;
//
//        int tu1QuyDong = quyDongMauSo(tu1, mau1, tu2, mau2);
//        int tu2QuyDong = quyDongMauSo(tu2, mau2, tu1, mau1);
//
//        if (tu1QuyDong > tu2QuyDong) {
//            return 1; 
//        }
//        else if (tu1QuyDong < tu2QuyDong) {
//            return -1; 
//        }
//        else {
//            return 0; 
//        }
//    }
//}
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
//        if (i < n - 1) {
//            printf(", ");
//        }
//    }
//    printf("\n");
//}
//
//int main() {
//    srand((unsigned int)time(0));
//
//    HonSo b[2];
//    taoMangHonSoNgauNhien(b, 2); 
//    printf("Danh sach hon so ngau nhien: ");
//    inMangHonSo(b, 2);
//
//    HonSo hs1 = b[0];
//    HonSo hs2 = b[1];
//    int ketQua = soSanhHonSo(hs1, hs2);
//    printf("So sanh hon so: ");
//    if (ketQua > 0) {
//        printf("%d %d/%d > %d %d/%d\n", hs1.phanNguyen, hs1.tuSo, hs1.mauSo, hs2.phanNguyen, hs2.tuSo, hs2.mauSo);
//    }
//    else if (ketQua < 0) {
//        printf("%d %d/%d < %d %d/%d\n", hs1.phanNguyen, hs1.tuSo, hs1.mauSo, hs2.phanNguyen, hs2.tuSo, hs2.mauSo);
//    }
//    else {
//        printf("%d %d/%d = %d %d/%d\n", hs1.phanNguyen, hs1.tuSo, hs1.mauSo, hs2.phanNguyen, hs2.tuSo, hs2.mauSo);
//    }
//
//    return 0;
//}
