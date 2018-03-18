//Uva1585, problem=4460
//SeanGo
#include<stdio.h>
#include<string.h>

int main() {
  int n = 0;
  scanf("%d", &n);

  while(n--) {
    char s[81];
    scanf("%s", s);

    int score = 0, c = 0;
    for(int i = 0; i < strlen(s); ++i) {
      if (s[i] == 'X') c = 0;
      else ++c;
      score += c;
    }
    printf("%d\n", score);
  }
}