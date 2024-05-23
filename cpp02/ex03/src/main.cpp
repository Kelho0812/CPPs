#include "../includes/Fixed.hpp"
#include "../includes/Point.hpp"
#include "../includes/Triangle.hpp"

float calculate_w1(Triangle T, Point P);
float calculate_w2(Triangle T, Point P, float w1);
void checkIfPointInside(float w1, float w2, Triangle T, Point P);

int main(void)
{
	Point pa(Fixed(0.0f), Fixed(0.0f));
	Point pb(Fixed(0.0f), Fixed(5.0f));
	Point pc(Fixed(5.0f), Fixed(2.0f));
	Point targetPoint(0.0f, 0.0f);
	Triangle T(pa, pb, pc);

	float w1 = calculate_w1(T, targetPoint);
	float w2 = calculate_w2(T, targetPoint, w1);

	checkIfPointInside(w1, w2, T, targetPoint);
}

float calculate_w1(Triangle T, Point P)
{
	float w1;
	float Ax = T.GetA().GetX();
	float Bx = T.GetB().GetX();
	float Cx = T.GetC().GetX();
	float Ay = T.GetA().GetY();
	float By = T.GetB().GetY();
	float Cy = T.GetC().GetY();
	float Py = P.GetY();
	float Px = P.GetX();

	w1 = (Ax * (Cy - Ay) + (Py - Ay) * (Cx - Ax) - Px * (Cy - Ay)) /
		 ((By - Ay) * (Cx - Ax) - (Bx - Ax) * (Cy - Ay));
	return w1;
}

float calculate_w2(Triangle T, Point P, float w1)
{
	float w2;
	float Ay = T.GetA().GetY();
	float By = T.GetB().GetY();
	float Cy = T.GetC().GetY();
	float Py = P.GetY();

	if (Cy - Ay == 0)
	{
		w2 = 0;
	}
	else
	{
		w2 = (Py - Ay - w1 * (By - Ay)) / (Cy - Ay);
	}
	return w2;
}
