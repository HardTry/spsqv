#include <stdio.h>
#include <string.h>

#define maxn 1010

static int a[maxn] = {0}, b[maxn] = {0}, c[20] = {0};
#define MIN(a, b) (((a) <= (b)) ? (a) : (b))

int main() {
  int n = 0, kase = 0;
  while(scanf("%d", &n) == 1 && n) { //n == 0 to end
    printf("Game %d:\n", ++kase);

    int *c1 = c, *c2 = c + 10;
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);

    for(;;) {
      int A = 0, B = 0;
      memset(c, 0, 20 * sizeof(int));
  
      for (int i = 0; i < n; ++i) {
      	scanf("%d", &b[i]);
      	if (b[i]) {
      	  if (a[i] == b[i]) ++A;
      	  c1[a[i]]++, c2[b[i]]++;
        }
      }

      if (*b == 0) break; //end

      for (int i = 1; i <= 9; ++i)
        B += MIN(c1[i], c2[i]);

      B -= A;

      printf("    (%d,%d)\n", A, B);
    }
  }
}