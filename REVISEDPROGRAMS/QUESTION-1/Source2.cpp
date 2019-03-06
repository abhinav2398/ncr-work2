extern int answer;
float divide(int a, int b)
{
	if (b != 0)
	{
		answer = (float)a / b;
		return answer;
	}
	return -1;
}