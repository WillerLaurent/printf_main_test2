/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwiller <lwiller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 11:45:14 by lwiller           #+#    #+#             */
/*   Updated: 2021/02/05 11:52:56 by lwiller          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
//#include <limits.h>
#define LONG_MAX 2147483647
#define LONG_MIN -2147483648

int a;
int b;

int main(void)
{
	int ret;
	int i;

	i = -1;

	printf("/////////// %%   /////////////\n\n");

	ret = ft_printf("Moi : |%3%|");
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%3%|");
	printf("LuiR : ret = |%d|\n", ret);
	i++;
	ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%03%|");
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%03%|");
	printf("LuiR : ret = |%d|\n", ret);
	i++;
	ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%%|");
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%%|");
	printf("LuiR : ret = |%d|\n", ret);
	i++;
	ft_printf("i = %d\n\n-------------------\n\n", i);

	printf("/////////// d   /////////////\n\n");

	ret = ft_printf("Moi : |%d|", 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%d|", 0);
	printf("LuiR : ret = |%d|\n", ret);
	i++;
	ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%.d|", 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%.d|", 0);
	printf("LuiR : ret = |%d|\n", ret);
	i++;
	ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%0.0d|", 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%0.0d|", 0);
	printf("LuiR : ret = |%d|\n", ret);
	i++;
	ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%0d|", 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%0d|", 0);
	printf("LuiR : ret = |%d|\n", ret);
	i++;
	ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%01d|", 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%01d|", 0);
	printf("LuiR : ret = |%d|\n", ret);
	i++;
	ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%010d|", 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%010d|", 0);
	printf("LuiR : ret = |%d|\n", ret);
	i++;
	ft_printf("i = %d\n\n-------------------\n\n", i);

	a = -2;
	while (a < 2)
	{
		b = -2;
		while (b < 2)
		{
			ret = ft_printf("Moi : |%*.*d|", a, b, -42);
			ft_printf("MoiR : ret = |%d|\n", ret);
			ret = printf("Lui : |%*.*d|", a, b, -42);
			printf("LuiR : ret = |%d|\n", ret);
			i++;
			ft_printf("i = %d\n\n-------------------\n\n", i);
			b++;
		}
		a++;
	}
	//30

	printf("/////////// u   /////////////\n\n");
	ret = ft_printf("Moi : |%u|", 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%u|", 0);
	printf("LuiR : ret = |%d|\n", ret);
	i++;
	ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%.u|", 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%.u|", 0);
	printf("LuiR : ret = |%d|\n", ret);
	i++;
	ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%0.0u|", 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%0.0u|", 0);
	printf("LuiR : ret = |%d|\n", ret);
	i++;
	ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%0u|", 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%0u|", 0);
	printf("LuiR : ret = |%d|\n", ret);
	i++;
	ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%01u|", 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%01u|", 0);
	printf("LuiR : ret = |%d|\n", ret);
	i++;
	ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%010u|", 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%010u|", 0);
	printf("LuiR : ret = |%d|\n", ret);
	i++;
	ft_printf("i = %d\n\n-------------------\n\n", i);

	a = -2;
	while (a < 2)
	{
		b = -2;

		while (b < 2)
		{
			ret = ft_printf("Moi : |%*.*u|", a, b, -42);
			ft_printf("MoiR : ret = |%d|\n", ret);
			ret = printf("Lui : |%*.*u|", a, b, -42);
			printf("LuiR : ret = |%d|\n", ret);
			i++;
			ft_printf("i = %d\n\n-------------------\n\n", i);
			b++;
		}
		a++;
	}

	printf("/////////// i   /////////////\n\n");

	ret = ft_printf("Moi : |%i|", 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%i|", 0);
	printf("LuiR : ret = |%d|\n", ret);
	i++;
	ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%.i|", 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%.i|", 0);
	printf("LuiR : ret = |%d|\n", ret);
	i++;
	ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%0.0i|", 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%0.0i|", 0);
	printf("LuiR : ret = |%d|\n", ret);
	i++;
	ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%0i|", 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%0i|", 0);
	printf("LuiR : ret = |%d|\n", ret);
	i++;
	ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%01i|", 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%01i|", 0);
	printf("LuiR : ret = |%d|\n", ret);
	i++;
	ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%010i|", 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%010i|", 0);
	printf("LuiR : ret = |%d|\n", ret);
	i++;
	ft_printf("i = %d\n\n-------------------\n\n", i);

	a = -2;
	while (a < 2)
	{
		b = -2;
		while (b < 2)
		{
			ret = ft_printf("Moi : |%*.*i|", a, b, -42);
			ft_printf("MoiR : ret = |%d|\n", ret);
			ret = printf("Lui : |%*.*i|", a, b, -42);
			printf("LuiR : ret = |%d|\n", ret);
			i++;
			ft_printf("i = %d\n\n-------------------\n\n", i);
			b++;
		}
		a++;
	}
	printf("/////////// c   /////////////\n\n");

	ret = ft_printf("Moi : |%c|", 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%c|", 0);
	printf("LuiR : ret = |%d|\n", ret);
	i++;
	ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%5c|", 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%5c|", 0);
	printf("LuiR : ret = |%d|\n", ret);
	i++;
	ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%10c|", 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%10c|", 0);
	printf("LuiR : ret = |%d|\n", ret);
	i++;
	ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%5c|", 'z');
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%5c|", 'z');
	printf("LuiR : ret = |%d|\n", ret);
	i++;
	ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%10c|", 'z');
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%10c|", 'z');
	printf("LuiR : ret = |%d|\n", ret);
	i++;
	ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%-10c|", 'z');
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%-10c|", 'z');
	printf("LuiR : ret = |%d|\n", ret);
	i++;
	ft_printf("i = %d\n\n-------------------\n\n", i);
	b = -2;
	while (b < 2)
	{
		ret = ft_printf("Moi : |%*c|%*c|", b, 'z', b, 0);
		ft_printf("MoiR : ret = |%d|\n", ret);
		ret = printf("Lui : |%*c|%*c|", b, 'z', b, 0);
		printf("LuiR : ret = |%d|\n", ret);
		i++;
		ft_printf("i = %d\n\n-------------------\n\n", i);
		b++;
	}

	printf("/////////// s   /////////////\n\n");

	ret = ft_printf("Moi : |%s|", NULL);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%s|", NULL);
	printf("LuiR : ret = |%d|\n", ret);
	i++;
	ft_printf("i = %d\n\n-------------------\n\n", i);
	ret = ft_printf("Moi : |%.s|", NULL);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%.s|", NULL);
	printf("LuiR : ret = |%d|\n", ret);
	i++;
	ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%.s|", "NULL");
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%.s|", "NULL");
	printf("LuiR : ret = |%d|\n", ret);
	i++;
	ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%.2s|", NULL);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%.2s|", NULL);
	printf("LuiR : ret = |%d|\n", ret);
	i++;
	ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%s|", "NULL");
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%s|", "NULL");
	printf("LuiR : ret = |%d|\n", ret);
	i++;
	ft_printf("i = %d\n\n-------------------\n\n", i);

	a = -2;
	while (a < 2)
	{
		b = -2;
		while (b < 2)
		{
			ret = ft_printf("Moi : |%*.*s|", a, b, "NULL");
			ft_printf("MoiR : ret = |%d|\n", ret);
			ret = printf("Lui : |%*.*s|", a, b, "NULL");
			printf("LuiR : ret = |%d|\n", ret);
			i++;
			ft_printf("i = %d\n\n-------------------\n\n", i);
			b++;
		}
		a++;
	}

	ret = ft_printf("Moi : |%20s|", "fvTymR0e24eqIVl9OqR7F6gUKPQFjG1I5b8JHUL1");
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%20s|", "fvTymR0e24eqIVl9OqR7F6gUKPQFjG1I5b8JHUL1");
	printf("LuiR : ret = |%d|\n", ret);
	i++;
	ft_printf("i = %d\n\n-------------------\n\n", i);

	printf("/////////// p   /////////////\n\n");

	ret = ft_printf("Moi : |%p|", (void *)0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%p|", (void *)0);
	printf("LuiR : ret = |%d|\n", ret);
	i++;
	ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%.p|", (void *)0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%.p|", (void *)0);
	printf("LuiR : ret = |%d|\n", ret);
	i++;
	ft_printf("i = %d\n\n-------------------\n\n", i);
	ret = ft_printf("Moi : |%.p|", (void *)123456);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%.p|", (void *)123456);
	printf("LuiR : ret = |%d|\n", ret);
	i++;
	ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%p|", (void *)123456);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%p|", (void *)123456);
	printf("LuiR : ret = |%d|\n", ret);
	i++;
	ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%.p|", NULL);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%.p|", NULL);
	printf("LuiR : ret = |%d|\n", ret);
	i++;
	ft_printf("i = %d\n\n-------------------\n\n", i);

	a = -2;
	while (a < 2)
	{
		ret = ft_printf("Moi : |%*p|", a, &a);
		ft_printf("MoiR : ret = |%d|\n", ret);
		ret = printf("Lui : |%*p|", a, &a);
		printf("LuiR : ret = |%d|\n", ret);
		i++;
		ft_printf("i = %d\n\n-------------------\n\n", i);
		a++;
	}

	printf("/////////// x   /////////////\n\n");

	ret = ft_printf("Moi : |%x|", 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%x|", 0);
	printf("LuiR : ret = |%d|\n", ret);
	i++;
	ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%.x|", 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%.x|", 0);
	printf("LuiR : ret = |%d|\n", ret);
	i++;
	ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%0.0x|", 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%0.0x|", 0);
	printf("LuiR : ret = |%d|\n", ret);
	i++;
	ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%x|", -12354);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%x|", -12354);
	printf("LuiR : ret = |%d|\n", ret);
	i++;
	ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%.0x|", 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%.0x|", 0);
	printf("LuiR : ret = |%d|\n", ret);
	i++;
	ft_printf("i = %d\n\n-------------------\n\n", i);

	a = -2;
	while (a < 2)
	{
		b = 2;
		while (b < 2)
		{
			ret = ft_printf("Moi : |%*.*x|", a, b, 42);
			ft_printf("MoiR : ret = |%d|\n", ret);
			ret = printf("Lui : |%*.*x|", a, b, 42);
			printf("LuiR : ret = |%d|\n", ret);
			i++;
			ft_printf("i = %d\n\n-------------------\n\n", i);
			b++;
		}
		a++;
	}

	printf("/////////// X   /////////////\n\n");

	ret = ft_printf("Moi : |%X|", 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%X|", 0);
	printf("LuiR : ret = |%d|\n", ret);
	i++;
	ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%.X|", 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%.X|", 0);
	printf("LuiR : ret = |%d|\n", ret);
	i++;
	ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%0.0X|", 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%0.0X|", 0);
	printf("LuiR : ret = |%d|\n", ret);
	i++;
	ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%X|", -12354);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%X|", -12354);
	printf("LuiR : ret = |%d|\n", ret);
	i++;
	ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%.0X|", 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%.0X|", 0);
	printf("LuiR : ret = |%d|\n", ret);
	i++;
	ft_printf("i = %d\n\n-------------------\n\n", i);

	a = -2;
	while (a < 2)
	{
		b = -2;
		while (b < 2)
		{
			ret = ft_printf("Moi : |%*.*X|", a, b, 42);
			ft_printf("MoiR : ret = |%d|\n", ret);
			ret = printf("Lui : |%*.*X|", a, b, 42);
			printf("LuiR : ret = |%d|\n", ret);
			i++;
			ft_printf("i = %d\n\n-------------------\n\n", i);
			b++;
		}
		a++;
	}

	printf("/////////// mélange   /////////////\n\n");

	ret = ft_printf("Moi : |%-10.8X|%d|%5.4d|%x|%X|d|", -1, 123, 456, 11, 12);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%-10.8X|%d|%5.4d|%x|%X|d|", -1, 123, 456, 11, 12);
	printf("LuiR : ret = |%d|\n", ret);
	i++;
	ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%-10.8X|%-10.8i|%5.4u|%x|%X|d|%*c|%*s|", -1, 123, 456, 111, 111, 10, 'z', -10, "bonjour");
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%-10.8X|%-10.8i|%5.4u|%x|%X|d|%*c|%*s|", -1, 123, 456, 111, 111, 10, 'z', -10, "bonjour");
	printf("LuiR : ret = |%d|\n", ret);
	i++;
	ft_printf("i = %d\n\n-------------------\n\n", i);

	/*while (1)
	{}*/
	return (0);
}