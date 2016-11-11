/* ************************************************************************
 *       Filename:  b.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2016年11月11日 22时30分05秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
int main(int argc, char *argv[])
{
	srand((unsigend int)time(NULL));
	int i=0;
	int tmp=0;
	for(i=0;i<10;++i)
	{
		tmp=rand();

		printf("tmp=%d\n",tmp);
	}
	return 0;
}


