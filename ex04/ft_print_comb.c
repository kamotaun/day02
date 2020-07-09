void ft_putchar(char c);
void ft_print_comb(void){
	char ch0 = '0';
	while(ch0 <= '9'){
char ch1 = '1';
		if(ch1 > ch0){
			while(ch1 <= 9){
				char ch2 = '2';
				if(ch2  > ch1){
					while(ch2 <= 9){
						ft_putchar(ch0);
						ft_putchar(ch1);
						ft_putchar(ch2);
						ch2++;
					}
				}else{
					ch2 = ch1 + 1;
				}

				if(ch2 > ch1)
				ch1++;
			}

	}else{
		ch1 = ch0 + 1;
	}
		ch0++;
	}
}
