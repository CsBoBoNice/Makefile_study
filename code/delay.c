#include "delay.h"
#include <stdio.h>
#include "show.h"


#include "ProgressBar.h"

void delay(unsigned int time)
{
	unsigned int i=0XFFFF*time;
	unsigned int j=0;
	unsigned char num=0;
	unsigned char  num_l=0;
	j=i;
	printf("delay star!\n");
	printf("delay:%d\n",i);
	show();
	while(i--)
	{
		num=(unsigned char)(((j-i)*100.0f)/j);
		if(num!=num_l)
		{
			ProgressBar((unsigned char)num);
			num_l=num;	
		}
	};
	show();
	printf("delay End!\n");
}












