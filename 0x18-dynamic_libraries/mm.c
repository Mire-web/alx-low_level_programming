#include <stdio.h>
#include <unistd.h>


int make_rand()
{
	static int ln = -1;

	switch (ln)
	{
	case 0:
		return (8);
		break;

	case 1:
		return (8);
		break;

	case 2:
		return (7);
		break;
	
	case 3:
		return (9);
		break;
		
	case 4:
		return (23);
		break;
	
	case 5:
		return (74);
		break;
	default:
		return (ln * ln % 30000);
		break;
	}
}
