#include <stdio.h>
#include <stdlib.h>

int show(const char *buf)
{
	printf("%s\n", buf);
	return 0;
}

int main(int argc, char* argv[])
{
	show("hello, world!");
	return 0;
}
