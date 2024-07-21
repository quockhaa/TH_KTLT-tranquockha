//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//#define KICH_THUOC 15
//
//void taoMangNgauNhien(int a[], int n) {
//    for (int i = 0; i < n; i++) {
//        a[i] = rand() % 101; // Tạo số ngẫu nhiên từ 0 đến 100
//    }
//}
//
//void sapXepChon(int a[], int n) {
//    for (int i = 0; i < n - 1; i++) {
//        int minIdx = i;
//        for (int j = i + 1; j < n; j++) {
//            if (a[j] < a[minIdx]) {
//                minIdx = j;
//            }
//        }
//        int temp = a[i];
//        a[i] = a[minIdx];
//        a[minIdx] = temp;
//    }
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
//    sapXepChon(a, KICH_THUOC);
//    printf("Mang sap xep tang dan bang Sap Xep Chon: ");
//    inMang(a, KICH_THUOC);
//
//    return 0;
//}
