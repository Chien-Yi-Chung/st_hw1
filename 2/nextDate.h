char* nextdate(int m, int d, int y)
{
	char result[20];
	
	//case 1: 31 days
	if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 )
	{
		if (d < 31)
			sprintf(result, "%d,%d,%d", m, d+1, y);
		else
			sprintf(result, "%d,%d,%d", m+1, 1, y);
	}

	//case 2: 30 days
	if (m==4 || m==6 || m==9 || m==11)
	{
		if (d < 30)
			sprintf(result, "%d,%d,%d", m, d+1, y);
		else
			sprintf(result, "%d,%d,%d", m+1, 1, y);
	}

	//case 3: December
	if (m==12)
	{
		if (d < 31)
			sprintf(result, "%d,%d,%d", m, d+1, y);
		else
			sprintf(result, "%d,%d,%d", 1, 1, y+1);
	}

	//case 4: February
	if (m==2)
	{
		if (d < 28)
			sprintf(result, "%d,%d,%d", m, d+1, y);
		else if (d == 28)
			if (y%4 == 0) //leap year
				sprintf(result, "%d,%d,%d", m, d+1, y);
			else
				sprintf(result, "%d,%d,%d", m+1, 1, y);
		else if (d == 29)
			if (y%4 == 0) //leap year
				sprintf(result, "%d,%d,%d", m+1, 1, y);
			else
				sprintf(result, "Cannot have Feb.");
	}

	return result;
}
