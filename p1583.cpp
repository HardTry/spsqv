#include <stdio.h>
#include <string.h>

#define maxn 100053 + 1
int ans[maxn] = {0};  //c++11

int main() {
  for (int m = 1; m < maxn; m++) {
  	int x = m, y = m;
  	while(x > 0) { y += x % 10, x /= 10; }
  	if (ans[y] == 0) ans[y] = m;
  }

  int T = 0, n = 0;
  scanf("%d", &T);
  while(T--) {
    scanf("%d", &n);
    printf("%d\n", ans[n]);
  }
}