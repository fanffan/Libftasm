#ifndef TEST_H
# define TEST_H

#include "libunit.h"
#include <string.h>

void        launcher(int *check);
int         test_ok(void);
int         test_ko(void);
int         test_segv(void);
int         test_buse(void);

#endif