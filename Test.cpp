int median(int v1, int v2, int v3)
{
	// Проверка v1
	if ((v2 <= v1 && v1 <= v3) || (v3 <= v1 && v1 <= v2)) return v1;
	// Проверка v2
	else if ((v1 <= v2 && v2 <= v3) || (v3 <= v2 && v2 <= v1)) return v2;
	else return v3;
}

unsigned count_of_bits(unsigned value)
{
	unsigned int count = 0;
	while (value!=1) 
	{
		if (value % 2) count++;
		value = value / 2;
	}
	return ++count;
}
