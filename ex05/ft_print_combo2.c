void  ft_putchar(char c);
void ft_print_combo2(void){
	char ch0 ='0';
	while(ch0 <= '9'){
		char ch1 = '0';
		while(ch1 < = '9'){
			char ch2 = '0'
			while(ch2 <= '9'){
				char ch3 = '0';
				while(ch3 <= '9'){
					ft_putchar(ch0);
					ft_putchar(ch1);
					ft_putchar(' ');
					ft_putchar(ch2);
					ft_putchar(ch3);
					ch3++;
			}
				ch2++;
		}
			ch1 +=1;
	}
		ch +=1;
}
