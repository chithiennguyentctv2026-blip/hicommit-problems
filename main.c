#include <stdio.h>

int main() {
    float dtb,drl;
    scanf("%d", &dtb, &drl);

    if (dtb >= 9.0 && drl >= 90) {
        cout << "HOC_BONG_XUAT_SAC";
    }
    else if ((dtb >= 8.0 && dtb < 9.0 && drl >= 80) ||
             (dtb >= 9.0 && drl >= 80 && drl < 90)) {
        cout << "HOC_BONG_GIOI";
    }
    else if ((dtb >= 7.0 && dtb < 8.0 && drl >= 70) ||
             (dtb >= 8.0 && dtb < 9.0 && drl >= 70 && drl < 80) ||
             (dtb >= 9.0 && drl >= 70 && drl < 80)) {
        cout << "HOC_BONG_KHA";
    }
    else {
        cout << "KHONG_DAT";
    }

    cout << endl;
  return 0;
}