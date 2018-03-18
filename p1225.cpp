//Uva1225, problem=3666
//SeanGo
#include <stdio.h>
#include <memory.h>

int main() {
  int n, m, c[10], p;

  scanf("%d", &n);
  while(n--) {
    scanf("%d", &m);
    memset(c, 0, sizeof(int) * 10);

    for(int i = 1; i <= m; ++i) {
  	  p = i;
      while(p > 0) {
        ++c[p % 10];
        p /= 10;
      }
    }

    printf("%d %d %d %d %d %d %d %d %d %d\n", 
  	  c[0], c[1], c[2], c[3], c[4], c[5], c[6], c[7], c[8], c[9]);
  }
}