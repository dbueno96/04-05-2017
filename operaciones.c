void suma (int*a , int b) 
{
	a*  = *a + b; 
}

void resta (int* a, int b) 
{
	*a = *a - b; 
}

void sumav(int*a, int*b, int n)
{
	for (int i = 0; i < n ; i++)
	{
		*a = * a[i]+ *b[i];
	}
}

void restav(int*a, int*b, int n)
{
        for (int i = 0; i < n ; i++)
        {
                *a = * a[i]- *b[i];
        }
}

