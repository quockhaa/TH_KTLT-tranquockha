//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct {
//    int phanNguyen; 
//    int tuSo;     
//    int mauSo;     
//} HonSo;
//
//typedef struct {
//    int tuSo;      
//    int mauSo;     
//} PhanSo;
//
//PhanSo chuyenHonSoThanhPhanSo(HonSo hs) {
//    PhanSo ps;
//    ps.tuSo = hs.phanNguyen * hs.mauSo + hs.tuSo;
//    ps.mauSo = hs.mauSo;                          
//    return ps;
//}
//
//void inPhanSo(PhanSo ps) {
//    printf("%d/%d\n", ps.tuSo, ps.mauSo);
//}
//
//int main() {
//    HonSo hs;
//
//    printf("Nhap phan nguyen: ");
//    scanf_s("%d", &hs.phanNguyen);
//
//    printf("Nhap tu so: ");
//    scanf_s("%d", &hs.tuSo);
//
//    printf("Nhap mau so: ");
//    scanf_s("%d", &hs.mauSo);
//
//    printf("Hon so: %d %d/%d\n", hs.phanNguyen, hs.tuSo, hs.mauSo);
//
//    PhanSo ps = chuyenHonSoThanhPhanSo(hs);
//
//    printf("Phan so tuong ung: ");
//    inPhanSo(ps);
//
//    return 0;
//}
