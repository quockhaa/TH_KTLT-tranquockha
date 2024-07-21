//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct {
//    int tuSo;     
//    int mauSo;     
//} PhanSo;
//
//typedef struct {
//    int phanNguyen;
//    int tuSo;     
//    int mauSo;   
//} HonSo;
//
//HonSo chuyenPhanSoThanhHonSo(PhanSo ps) {
//    HonSo hs;
//    hs.phanNguyen = ps.tuSo / ps.mauSo; 
//    hs.tuSo = ps.tuSo % ps.mauSo;      
//    hs.mauSo = ps.mauSo;                 
//    return hs;
//}
//
//void inHonSo(HonSo hs) {
//    printf("%d %d/%d\n", hs.phanNguyen, hs.tuSo, hs.mauSo);
//}
//
//int main() {
//    PhanSo ps;
//
//    printf("Nhap tu so: ");
//    scanf_s("%d", &ps.tuSo);
//
//    printf("Nhap mau so: ");
//    scanf_s("%d", &ps.mauSo);
//
//    if (ps.mauSo == 0) {
//        printf("Mau so phai khac 0.\n");
//        return 1;
//    }
//
//    HonSo hs = chuyenPhanSoThanhHonSo(ps);
//
//    printf("Hon so tuong ung: ");
//    inHonSo(hs);
//
//    return 0;
//}
