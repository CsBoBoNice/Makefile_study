#include "show.h"
#include <time.h>
#include <stdio.h>


void show(void)
{
	time_t timep;
	struct tm *p;
	time (&timep);
	p=gmtime(&timep);
	printf("%d-",1900+p->tm_year);/*��ȡ��ǰ���,��1900��ʼ������Ҫ��1900*/
	printf("%d-",1+p->tm_mon);/*��ȡ��ǰ�·�,��Χ��0-11,����Ҫ��1*/
	printf("%d ",p->tm_mday);/*��ȡ��ǰ�·�����,��Χ��1-31*/
	printf("%d:",8+p->tm_hour);/*��ȡ��ǰʱ,�����ȡ������ʱ��,�պ����˸�Сʱ*/
	printf("%d:",p->tm_min); /*��ȡ��ǰ��*/
	printf("%d\n",p->tm_sec); /*��ȡ��ǰ��*/
}







