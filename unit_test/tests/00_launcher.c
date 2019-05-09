#include "test.h"

void     launcher(int *check)
{
	t_frame *lst;
	int 	res[2];

	lst = NULL;
	res[0] = 0;
	res[1] = 0;
	write(1, "TEST :\n", 7);
	load_test(&lst, "\tEasy test", &test_ok);
	load_test(&lst, "\tNULL test", &test_ko);
	load_test(&lst, "\tBig string", &test_segv);
	load_test(&lst, "\tBus error", &test_buse);
	launch_test(lst, check, res);
	write(1, "\t",1);
	aff_res(res);
}
