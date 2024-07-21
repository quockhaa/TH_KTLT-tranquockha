//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//#define KICH_THUOC 15
//
//void taoMangNgauNhien(int a[], int n) {
//    for (int i = 0; i < n; i++) {
//        a[i] = rand() % 101; 
//    }
//}
//
//int timKiemTuyenTinh(int a[], int n, int x) {
//    for (int i = 0; i < n; i++) {
//        if (a[i] == x) {
//            return i; 
//        }
//    }
//    return -1; 
//}
//
//void inMang(int a[], int n) {
//    for (int i = 0; i < n; i++) {
//        printf("%d ", a[i]);
//    }
//    printf("\n");
//}
//
//int main() {
//    srand(time(0));
//
//    int a[KICH_THUOC];
//    taoMangNgauNhien(a, KICH_THUOC);
//    printf("Mang ngau nhien: ");
//    inMang(a, KICH_THUOC);
//
//    int x = 50; 
//    int ketQua = timKiemTuyenTinh(a, KICH_THUOC, x);
//    if (ketQua != -1) {
//        printf("Tim thay %d tai vi tri %d bang Tim Kiem Tuyen Tinh\n", x, ketQua);
//    }
//    else {
//        printf("Khong tim thay %d bang Tim Kiem Tuyen Tinh\n", x);
//    }
//
//    return 0;
//}
