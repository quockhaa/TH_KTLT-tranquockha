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
//void taoMangChan(int a[], int n, int b[], int* m) {
//    int j = 0;
//    for (int i = 0; i < n; i++) {
//        if (a[i] % 2 == 0) {
//            b[j++] = a[i];
//        }
//    }
//    *m = j; // Ghi lại số phần tử của mảng b
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
//    int b[KICH_THUOC];
//    int m = 0;
//    taoMangChan(a, KICH_THUOC, b, &m);
//    printf("Mang so chan: ");
//    inMang(b, m);
//
//    return 0;
//}
