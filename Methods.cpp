#include "Methods.h"

float* drawWeight(double * dizi, float maxx1, float minx1)
{
	static float result[2];

	float maxX1 = (dizi[0] * maxx1 + dizi[2]) / (float)(-dizi[1]);
	float minX1 = (dizi[0] * minx1 + dizi[2]) / (float)(-dizi[1]);

	result[0] = maxX1;
	result[1] = minX1;

	return result;
}