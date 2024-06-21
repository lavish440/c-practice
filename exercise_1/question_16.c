#include <stdio.h>

#define MAXLINE 15
#define NO 1
#define YES 0

int getlines(char s[], int lim, char checker[]) {
  int c, i;

  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    s[i] = c;

  if (c == '\n') {
    s[i] = c;
    ++i;
  }

  s[i] = '\0';

  if (c == EOF)
    checker[0] = YES;

  return i;
}

void copyy(char to[], char from[]) {
  int i;
  i = 0;
  while ((to[i] = from[i]) != '\0')
    ++i;
}

int main(void) {
  int len = 0, max = len, templ = max;
  char line[MAXLINE], longest[MAXLINE], temp[MAXLINE], eofch[1];

  eofch[0] = NO;

  while (eofch[0] == NO && (len = getlines(line, MAXLINE, eofch)) > 0) {
    if (len == (MAXLINE - 1) && line[MAXLINE - 2] != '\n')
      copyy(temp, line);

    while (eofch[0] == NO &&
           (len - ((len / (MAXLINE - 1)) * (MAXLINE - 1))) ==
               0 && /* can be substituted with  ((len * 1.0/ (MAXLINE * 1.0
                       - 1.0) - len / (MAXLINE - 1)) == 0.0) */
           line[MAXLINE - 2] != '\n' &&
           (templ = getlines(line, MAXLINE, eofch)) != 0)
      len += templ;

    if (len > max) {
      max = len;

      if (max <= (MAXLINE - 1) &&
          (max < MAXLINE - 1 || line[MAXLINE - 2] == '\n'))
        copyy(longest, line);

      else
        copyy(longest, temp);
    }
  }

  if (max > 0)
    printf("\nThe longest line has length: %d\nLine: %s", max, longest);

  return 0;
}
