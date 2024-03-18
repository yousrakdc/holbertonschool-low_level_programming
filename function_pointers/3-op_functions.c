/**
 * op_add - returns the sum of a and b
 * @a: first operand
 * @b: second operand
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of a and b
 * @a: first operand
 * @b: second operand
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of a and b
 * @a: first operand
 * @b: second operand
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of the division of a by b
 * @a: first operand (dividend)
 * @b: second operand (divisor)
 * Return: result of division of a by b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		return (0);
	}
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division of a by b
 * @a: first operand (dividend)
 * @b: second operand (divisor)
 * Return: remainder of division of a by b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		return (0);
	}
	return (a % b);
}

