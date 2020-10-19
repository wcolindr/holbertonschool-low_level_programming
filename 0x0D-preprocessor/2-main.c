#include <stdio.h>

void filename(void)
{
	printf("%s\n", __FILE__);
}

int main(int argc, char ** argv)
{
	(void) argc;
	(void) ** argv;
	filename();
	return 0;
}
