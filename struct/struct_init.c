#include <stdio.h>
void main ()
{
	struct stu
	{
		int num;
		char *name;
		char sex;
		float score;
	}boy2,boy1={101,"Liangqian",'m',80.9};
	boy2=boy1;
 printf("Number=%d\nName=%s\n",boy2.num,boy2.name);
printf("Sex=%c\nScore=%f\n",boy2.sex,boy2.score);
}
