void    ft_putnbr_bin(void *content)
{
    t_number    *num;
    int 		i;
    int			y;

    y = 7;
    num = content;
    i = num->index;
    while (y != -1)
    {
        if (((i >> y) & 1) == 1)
            write(1, "1", 1);
        else
            write(1, "0", 1);
        y--;
    }
    write(1, " ", 1);
}