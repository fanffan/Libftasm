#include "test.h"


int main(void)
{
	int check[2];

	check[0] = 0;
	check[1] = 0;
    launcher(check);
	aff_res(check);
	if (check[0] == check[1])
		return (0);
	else
		return (1);
}
