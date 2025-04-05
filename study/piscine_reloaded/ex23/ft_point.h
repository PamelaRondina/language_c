/*
Files to turn in : ft_point.h
Allowed functions : None

• Create a file ft_point.h that’ll compile the following main :

Crie um arquivo ft_point.h que compilará o seguinte main:

#include "ft_point.h"

void set_point(t_point *point)
{
point->x = 42;
point->y = 21;
}
int main(void)
{
t_point point;
set_point(&point);
return (0);
}
*/