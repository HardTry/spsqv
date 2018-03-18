//Uva1586, problem=4461
//SeanGo
#include <stdio.h>
#include <string.h>
#include <ctype.h>

double aw[26] = {0};   ///atomic weight

int main() {
  {aw['C' - 'A'] = 12.01;
  aw['H' - 'A'] = 1.008;
  aw['O' - 'A'] = 16.00;
  aw['N' - 'A'] = 14.01;}

  int n = 0;
  scanf("%d", &n);

  while(n--) {
    char cs[100] = {0}; /// chamical symbol
    scanf("%s", cs);

    double w = 0;
    int a = 0, p = 1;
    for (int i = strlen(cs) - 1; i >= 0; --i) {
      if (isdigit(cs[i])) {
        a += (cs[i] - '0') * p;
        p *= 10;
      } else {
        if (a == 0) a = 1;
        w += a * aw[cs[i] - 'A'];
        p = 1, a = 0;
      }
    }

    printf("%.3lf\n", w);
  }

  return 0;
}
