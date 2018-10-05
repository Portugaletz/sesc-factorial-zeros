#include <stdio.h>

int main() {
  int n, count =0, KEK=0;
  scanf("%d", &n);
  for(int i=5;i<=n;i+=5){
    KEK=i;
    while(KEK%5==0){
      KEK/=5;
      count++;
    }
  }
  printf("%d", count);
  return 0;
}
