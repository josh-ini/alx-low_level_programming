#include <stdio.h>

/**
 *main-program entry point.
 *Return:0 success, non zero error.
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num == '9')
		{
			break;
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
<<<<<<< HEAD
		putchar('\n');
	}
		return (0);
=======
	}
	putchar('\n');
	return (0);
>>>>>>> 4fb2b02e8cc1a6137b18a25a58cfe3af81e55fe8
}
