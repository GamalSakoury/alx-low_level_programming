nclude <stdio.h>

int main(void)
{
	int fcounter;
	int scounter;

	for (fcounter = 48; fcounter < 58; fcounter++)
	{
		scounter = fcounter + 1;
		switch (fcounter)
		{
			case 49:
				scounter = fcounter + 1;
				break;
						
			case 50:
				scounter = fcounter + 1;
				break;
						
			case 51:
				scounter = fcounter + 1;
				break;
						
			case 52:
				scounter = fcounter + 1;
				break;
						
			case 53:
				scounter = fcounter + 1;
				break;
						
			case 54:
				scounter = fcounter + 1;
				break;
						
			case 55:
				scounter = fcounter + 1;
				break;

			default:
				break;
		}
		for (; scounter < 58; scounter++)
		{
			putchar(fcounter);
			putchar(scounter);
			if (scounter == 57 && fcounter == 56)
				break;
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
