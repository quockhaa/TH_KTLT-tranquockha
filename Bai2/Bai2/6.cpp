//#include <stdio.h>
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
//HonSo chuyenPhanSoThanhHonSo(PhanSo ps) {
//    HonSo hs;
//    hs.phanNguyen = ps.tuSo / ps.mauSo;
//    hs.tuSo = ps.tuSo % ps.mauSo;
//    hs.mauSo = ps.mauSo;
//    return hs;
//}
//
//PhanSo chuyenHonSoThanhPhanSo(HonSo hs) {
//    PhanSo ps;
//    ps.tuSo = hs.phanNguyen * hs.mauSo + hs.tuSo;
//    ps.mauSo = hs.mauSo;
//    return ps;
//}
//
//PhanSo congPhanSo(PhanSo ps1, PhanSo ps2) {
//    PhanSo ps;
//    ps.tuSo = ps1.tuSo * ps2.mauSo + ps2.tuSo * ps1.mauSo;
//    ps.mauSo = ps1.mauSo * ps2.mauSo;
//    return ps;
//}
//
//PhanSo truPhanSo(PhanSo ps1, PhanSo ps2) {
//    PhanSo ps;
//    ps.tuSo = ps1.tuSo * ps2.mauSo - ps2.tuSo * ps1.mauSo;
//    ps.mauSo = ps1.mauSo * ps2.mauSo;
//    return ps;
//}
//
//PhanSo nhanPhanSo(PhanSo ps1, PhanSo ps2) {
//    PhanSo ps;
//    ps.tuSo = ps1.tuSo * ps2.tuSo;
//    ps.mauSo = ps1.mauSo * ps2.mauSo;
//    return ps;
//}
//
//PhanSo chiaPhanSo(PhanSo ps1, PhanSo ps2) {
//    PhanSo ps;
//    ps.tuSo = ps1.tuSo * ps2.mauSo;
//    ps.mauSo = ps1.mauSo * ps2.tuSo;
//    return ps;
//}
//
//void inPhanSo(PhanSo ps) {
//    printf("%d/%d\n", ps.tuSo, ps.mauSo);
//}
//
//int main() {
//    HonSo hs1, hs2;
//
//    printf("Nhap phan nguyen, tu so, mau so cho hon so 1: ");
//    scanf_s("%d %d %d", &hs1.phanNguyen, &hs1.tuSo, &hs1.mauSo);
//
//    printf("Nhap phan nguyen, tu so, mau so cho hon so 2: ");
//    scanf_s("%d %d %d", &hs2.phanNguyen, &hs2.tuSo, &hs2.mauSo);
//
//    PhanSo ps1 = chuyenHonSoThanhPhanSo(hs1);
//    PhanSo ps2 = chuyenHonSoThanhPhanSo(hs2);
//
//    printf("Tong: ");
//    inPhanSo(congPhanSo(ps1, ps2));
//
//    printf("Hieu: ");
//    inPhanSo(truPhanSo(ps1, ps2));
//
//    printf("Tich: ");
//    inPhanSo(nhanPhanSo(ps1, ps2));
//
//    printf("Thuong: ");
//    inPhanSo(chiaPhanSo(ps1, ps2));
//
//    return 0;
//}
