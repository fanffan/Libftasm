#include "libfts_tests.h"

int main(void)
{
	t_frame	frame;

	bzero(&frame, sizeof(t_frame));
    isalnum_launcher(&frame);
    isalpha_launcher(&frame);
    isascii_launcher(&frame);
    isdigit_launcher(&frame);
    isprint_launcher(&frame);
    tolower_launcher(&frame);
    toupper_launcher(&frame);
    strcat_launcher(&frame);
	print_output(&frame);
	return (0);
}
