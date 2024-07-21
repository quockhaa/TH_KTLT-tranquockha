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
//    sapXepHoanDoi(a, KICH_THUOC, 1);
//    printf("Mang sap xep tang dan bang Sap Xep Hoan Doi: ");
//    inMang(a, KICH_THUOC);
//
//    sapXepHoanDoi(a, KICH_THUOC, 0);
//    printf("Mang sap xep giam dan bang Sap Xep Hoan Doi: ");
//    inMang(a, KICH_THUOC);
//
//    return 0;
//}
