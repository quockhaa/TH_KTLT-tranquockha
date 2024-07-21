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
//void sapXepHoanDoi(int a[], int n, int tang) {
//    for (int i = 0; i < n - 1; i++) {
//        for (int j = i + 1; j < n; j++) {
//            if (tang ? a[i] > a[j] : a[i] < a[j]) {
//                int temp = a[i];
//                a[i] = a[j];
//                a[j] = temp;
//            }
//        }
//    }
//}
//
//int timKiemNhiPhan(int a[], int n, int x) {
//    int trai = 0, phai = n - 1;
//    while (trai <= phai) {
//        int giua = trai + (phai - trai) / 2;
//        if (a[giua] == x) {
//            return giua; 
//        }
//        if (a[giua] < x) {
//            trai = giua + 1;
//        }
//        else {
//            phai = giua - 1;
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
//    srand((unsigned int)time(0));
//
//    int a[KICH_THUOC];
//    taoMangNgauNhien(a, KICH_THUOC);
//    printf("Mang ngau nhien: ");
//    inMang(a, KICH_THUOC);
//
//    sapXepHoanDoi(a, KICH_THUOC, 1);
//    printf("Mang sap xep tang dan bang Sap Xep Hoan Doi: ");
//    inMang(a, KICH_THUOC);
//
//    int x = 50; 
//    int ketQua = timKiemNhiPhan(a, KICH_THUOC, x);
//    if (ketQua != -1) {
//        printf("Tim thay %d tai vi tri %d bang Tim Kiem Nhi Phan\n", x, ketQua);
//    }
//    else {
//        printf("Khong tim thay %d bang Tim Kiem Nhi Phan\n", x);
//    }
//
//    return 0;
//}
