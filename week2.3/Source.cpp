#include<stdio.h>
#include<math.h>
int main()
{
	double a, b, ans;
	scanf_s("%lf %lf", &a, &b);
	ans = sqrt(pow(a, 2) + pow(b, 2));
	printf("%.6lf", ans);
}