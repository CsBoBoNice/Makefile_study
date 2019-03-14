#include "ProgressBar.h"
#include <stdio.h>
#include <string.h>


void ProgressBar(unsigned char Num)
{
	char buf[103];
	char index[6] = "-\\|/\0";

	memset(buf, ' ', sizeof(buf));

	buf[0] = '[';
	buf[101] = ']';
	buf[102] = '\0';
	if(Num>100)
	{	
		return ;
	}
	memset(&buf[1],'=',Num);

	printf("%s [%d%%][%c]\r", buf, Num, index[Num % 4]);
	fflush(stdout);//Ë¢ÐÂ»º³åÇø
	if(Num>=100)
	{
		printf("\n");
	}
}

