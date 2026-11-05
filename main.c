#include <stdio.h>

int main() {
    double dtb, drl;

    if (scanf("%lf %lf", &dtb, &drl) != 2) {
        return 0;
    }

    if (dtb >= 9.0 && drl >= 90) {
        printf("HOC_BONG_XUAT_SAC");
    }
    else if ((dtb >= 8.0 && dtb < 9.0 && drl >= 80) ||
             (dtb >= 9.0 && drl >= 80 && drl < 90)) {
        printf("HOC_BONG_GIOI");
    }
    else if ((dtb >= 7.0 && dtb < 8.0 && drl >= 70) ||
             (dtb >= 8.0 && dtb < 9.0 && drl >= 70 && drl < 80) ||
             (dtb >= 9.0 && drl >= 70 && drl < 80)) {
        printf("HOC_BONG_KHA");
    }
    else {
        printf("KHONG_DAT");
    }
  return 0;
}