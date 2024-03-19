#include <iostream>
#include <cmath>
#include <cstdio>
#define _USE_MATH_DEFINES
#define M_PI 3.14159265358979323846

using namespace std;

int main()
{
	int stopien;
	double radian;

	printf("Podaj stopień kąta: ");
	scanf_s("%d", &stopien);

	radian = stopien * M_PI / 180;

	printf("Sinus to: %12.5f\n", sin(radian));
	printf("Cosinus to: %10.5f\n", cos(radian));
	printf("Tangens to: %10.5f\n", tan(radian));
}