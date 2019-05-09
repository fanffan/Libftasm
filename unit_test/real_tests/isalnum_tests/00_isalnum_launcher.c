#include "real_test.h"

void     isalnum_launcher(int *check)
{
	t_frame *lst;
	int 	res[2];

	lst = NULL;
	res[0] = 0;
	res[1] = 0;
	write(1,"ISALNUM:\n",9);
	load_test(&lst, "\tNum test", &num_test);
	load_test(&lst, "\tChar test", &char_test);
	load_test(&lst, "\tHash test", &hash_test);
	launch_test(lst, check, res);
	aff_res(res);
}