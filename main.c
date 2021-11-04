#include <stdio.h>
#include <math.h>

int factor(int n);
void counting(int st, double x);
double do_whiling(void);
int step(void);

int main(void)
{
  double x = do_whiling();
  int st = step();
  counting(st, x);
  return 0;
}

int factor(int n){
  if (n == 0 || n == 1)
    return 1;

  return n * factor(n - 1);
}
void counting(int st, double x){
int k = 0, n = 1;
double s = 0, step;
for (short i = 0; i < st; i++, k++, n++)
{
    step = (cos((k * M_PI)/4) / factor(k)) * pow(x, k);
    printf("Step №%d = %lg\n", n, step);
    s += step;
}
}
double do_whiling(void){
    double x;
    do
    {
      printf("x(within 0 and 1) = ");
      scanf("%lg", &x);
    }
    while(x >= 1 || x <= 0);
    return x;
}
int step(void){
    int step;
    printf("Steps: ");
    scanf("%d", &step);
    return step;
}
