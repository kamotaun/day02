
void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_print_numbers()
{
	char	num;

	num = 48;
	while (num <= 56)
	{
		ft_putchar(num);
		num++;
	}
}

