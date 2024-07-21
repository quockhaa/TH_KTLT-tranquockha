#include <stdio.h>

typedef struct {
    int phanNguyen;
    int tuSo;
    int mauSo;
} HonSo;

int soSanhHonSo(HonSo hs1, HonSo hs2) {
    int giaTri1 = hs1.phanNguyen * hs1.mauSo + hs1.tuSo;
    int giaTri2 = hs2.phanNguyen * hs2.mauSo + hs2.tuSo;
    return giaTri1 - giaTri2;
}

void swap(HonSo* a, HonSo* b) {
    HonSo temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(HonSo arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (soSanhHonSo(arr[j], arr[minIdx]) < 0) {
                minIdx = j;
            }
        }
        swap(&arr[minIdx], &arr[i]);
    }
}

void insertionSort(HonSo arr[], int n) {
    for (int i = 1; i < n; i++) {
        HonSo key = arr[i];
        int j = i - 1;
        while (j >= 0 && soSanhHonSo(arr[j], key) > 0) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int partition(HonSo arr[], int low, int high) {
    HonSo pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j < high; j++) {
        if (soSanhHonSo(arr[j], pivot) < 0) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(HonSo arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void inMang(HonSo arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d %d/%d\n", arr[i].phanNguyen, arr[i].tuSo, arr[i].mauSo);
    }
}

int main() {
    HonSo b[] = {
        {1, 2, 3},
        {4, 5, 6},
        {1, 1, 2},
        {0, 7, 8},
        {2, 2, 5}
    };
    int n = sizeof(b) / sizeof(b[0]);

    printf("Danh sach mang truoc khi sap xep:\n");
    inMang(b, n);

    // Sắp xếp theo Selection Sort
     selectionSort(b, n);
     printf("Danh sach mang sau khi sap xep theo Selection Sort:\n");
     inMang(b, n);

    // Sắp xếp theo Insertion Sort
     insertionSort(b, n);
     printf("Danh sach mang sau khi sap xep theo Insertion Sort:\n");
     inMang(b, n);

    // Sắp xếp theo Quick Sort
    quickSort(b, 0, n - 1);
    printf("Danh sach mang sau khi sap xep theo Quick Sort:\n");
    inMang(b, n);

    return 0;
}
