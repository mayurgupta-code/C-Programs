#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* replace(const char* s, const char* ow, const char* nw)
{
  char* result;
  int i, cnt = 0;
  int nwlen = strlen(nw); int owlen = strlen(ow);
  for (i = 0; s[i] != '\0'; i++) {
    if (strstr(&s[i], ow) == &s[i]) {
    cnt++;
    i += owlen - 1;
  }
  }
  result = (char*)malloc(i + cnt * (nwlen - owlen) + 1);
  i = 0;
  while (*s) {
  if (strstr(s, ow) == s)
  {
    strcpy(&result[i], nw);
    i += nwlen;
    s += owlen;
  }
  else
  result[i++] = *s++;
}
  result[i] = '\0';
  return result;
}
int main() {
  char str[] = "abcbf bcghdbc bdabchf bcchfjd";
  char c[] = "bc";
  char d[] = "..";
  char* result = NULL;

  printf("Old string: %s\n", str);
  result = replace(str, c, d);
  printf("New String: %s\n", result);
  free(result);
  return 0;
}
