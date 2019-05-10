#include "libfts_tests.h"

int main(void)
{
	t_frame	frame;

	bzero(&frame, sizeof(t_frame));
	puts("\n#############################");
	puts("#           PART1           #");
	puts("#############################\n");
    isalnum_launcher(&frame);
    isalpha_launcher(&frame);
    isascii_launcher(&frame);
    isdigit_launcher(&frame);
    isprint_launcher(&frame);
    tolower_launcher(&frame);
    toupper_launcher(&frame);
    strcat_launcher(&frame);
	puts("\n#############################");
	puts("#           PART2           #");
	puts("#############################\n");
    strlen_launcher(&frame);
    memset_launcher(&frame);
    memcpy_launcher(&frame);
    strdup_launcher(&frame);
	print_output(&frame);
	return (0);
}
