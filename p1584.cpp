//Uva1584, problem=4459
//SeanGo
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define maxn 205

int cmp(char* str, int s1, int s2, int len) {
  return strncmp(str + s1, str + s2, len);
}

int main() {
  int n = 0, len = 0;
  char s[maxn];

  scanf("%d", &n);
  while(n--) {
    scanf("%s", s);
    len = strlen(s);
    strcpy(s + len, s);

    int j = 0;
    for (int i = 1; i < len; ++i) {
      if (cmp(s, i, j, len) < 0)
        j = i;
    }
    s[j + len] = 0;
    printf("%s\n", s + j);
  }

  return 0;
}
