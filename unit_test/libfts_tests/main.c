#include "libfts_tests.h"

int main(void)
{
	t_frame	frame;

	bzero(&frame, sizeof(t_frame));
    isalnum_launcher(&frame);
    isalpha_launcher(&frame);
	print_output(&frame);
	return (0);
}
