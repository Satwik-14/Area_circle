#include <stdio.h>

int main ()
{
  int days, week, yrs, day;
  printf ("ENTER THE NUMBER OF DAYS:");
  scanf ("%d", &days);
  yrs = days / 365;
  days = days % 365;
  week = days / 7;
  days = days % 365;
  day = days % 7;
  printf ("%d", yrs);
  printf ("%d", week);
  printf ("%d", day);

  return 0;
}
