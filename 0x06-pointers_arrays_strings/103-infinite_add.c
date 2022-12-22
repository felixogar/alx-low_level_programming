#include "main.h"

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
  int i, j, k, carry, sum;

  i = strlen(n1) - 1;
  j = strlen(n2) - 1;
  k = size_r - 1;
  carry = 0;

  while (i >= 0 || j >= 0)
  {
    sum = carry;
    if (i >= 0)
      sum += n1[i] - '0';
    if (j >= 0)
      sum += n2[j] - '0';
    r[k] = (sum % 10) + '0';
    carry = sum / 10;
    i--;
    j--;
    k--;
  }
  if (carry > 0)
  {
    if (k < 0)
      return 0;
    r[k] = carry + '0';
    k--;
  }
  if (k < 0)
    return 0;
  i = 0;
  while (k >= 0)
    r[i++] = r[k--];
  r[i] = '\0';
  return r;
}
