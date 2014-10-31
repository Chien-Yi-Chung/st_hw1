#define EQUILATERAL 	1
#define ISOSCELES 	2
#define SCALENE		3
#define NOT_A_TRIANGLE	4
#define VAL_A_OUTRANGE	5
#define VAL_B_OUTRANGE	6
#define VAL_C_OUTRANGE	7
#define VAL_AB_OUTRANGE  8
#define VAL_BC_OUTRANGE  9
#define VAL_AC_OUTRANGE  10
#define VAL_ABC_OUTRANGE 11


int triangle(int a, int b, int c)
{
	//Step 1: out of range
	int c1 = (0 < a) && (a < 201);
	int c2 = (0 < b) && (b < 201);
	int c3 = (0 < c) && (c < 201);
	if (!c1 && !c2 && !c3)
		return VAL_ABC_OUTRANGE;
	else if (!c1 && !c2)
		return VAL_AB_OUTRANGE;
	else if (!c2 && !c3)
		return VAL_BC_OUTRANGE;
	else if (!c1 && !c3)
		return VAL_AC_OUTRANGE;
	else if (!c1)
		return VAL_A_OUTRANGE;
	else if (!c2)
		return VAL_B_OUTRANGE;
	else if (!c3)
		return VAL_C_OUTRANGE;

	//Step 2: is a triangle?
	bool isTriangle;
	if ( (a < b + c) && (b < a + c) && (c < a + b) )
		isTriangle = true;
	else
		isTriangle = false;

	//Step 3: determine triangle type
	if (isTriangle)
	{
		if (a == b && b == c)
			return EQUILATERAL;
		else if (a != b && a != c && b != c)
			return SCALENE;
		else
			return ISOSCELES;
	}
	else
		return NOT_A_TRIANGLE;
	
}
