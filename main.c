#include <stdio.h>

int main() {
    double dtb, drl;
    cin >> dtb >> drl;

    string hocLuc, renLuyen;
  if (dtb >= 9.0)
        hocLuc = "XUAT_SAC";
    else if (dtb >= 8.0)
        hocLuc = "GIOI";
    else if (dtb >= 7.0)
        hocLuc = "KHA";
    else
        hocLuc = "KHONG_DAT";
  if (drl >= 90)
        renLuyen = "XUAT_SAC";
    else if (drl >= 80)
        renLuyen = "TOT";
    else if (drl >= 70)
        renLuyen = "KHA";
    else
        renLuyen = "KHONG_DAT";
  if (hocLuc == "XUAT_SAC" && renLuyen == "XUAT_SAC")
        cout << "HOC_BONG_XUAT_SAC";
    else if ((hocLuc == "GIOI" && 
             (renLuyen == "TOT" || renLuyen == "XUAT_SAC")) ||
             (hocLuc == "XUAT_SAC" && renLuyen == "TOT"))
        cout << "HOC_BONG_GIOI";
    else if ((hocLuc == "KHA" &&
             (renLuyen == "KHA" || renLuyen == "TOT" ||
              renLuyen == "XUAT_SAC")) ||
             (hocLuc == "GIOI" && renLuyen == "KHA") ||
             (hocLuc == "XUAT_SAC" && renLuyen == "KHA"))
        cout << "HOC_BONG_KHA";
    else
        cout << "KHONG_DAT";

    cout << endl;

  return 0;
}