#include <stdio.h>

int main() {
  long long code;
  if (scanf("%lld",&code) !=1) return 0;
  switch (code){
    case 1:
      printf("XEP_LOAI_XUAT_SAC");
      break;
    case 2:
      printf("XEP_LOAI_GIOI");
      break;
    case 3:
      printf("XEP_LOAI_KHA");
      break;
    case 4:
      printf("XEP_LOAI_TRUNG_BINH");
      break;
    default:
      printf("KHONG_HOP_LE");
      break;
  }
  return 0;
}