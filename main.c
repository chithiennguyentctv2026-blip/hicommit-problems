#include <stdio.h>

int main() {
  int distance,order_value;
  scanf("%d %d", &distance,&order_value);

  if (distance<=0||order_value<=0){
    printf("INVALID");
  }else if(order_value>=50000&&distance<=15){
    printf("15000");
  } else if (distance<=5){
    printf("15000");
  } else if(distance<=15){
    printf("25000");
  } else {
  	printf("40000");
  }
  return 0;
}