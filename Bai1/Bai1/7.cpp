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
//void quickSort(int a[], int left, int right) {
//    if (left < right) {
//        int pivot = a[right];
//        int i = left - 1;
//
//        for (int j = left; j < right; j++) {
//            if (a[j] < pivot) {
//                i++;
//                int temp = a[i];
//                a[i] = a[j];
//                a[j] = temp;
//            }
//        }
//
//        int temp = a[i + 1];
//        a[i + 1] = a[right];
//        a[right] = temp;
//
//        int pivotIndex = i + 1;
//
//        quickSort(a, left, pivotIndex - 1);
//        quickSort(a, pivotIndex + 1, right);
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
//    quickSort(a, 0, KICH_THUOC - 1);
//    printf("Mang sap xep tang dan bang Quick Sort: ");
//    inMang(a, KICH_THUOC);
//
//    return 0;
//}
