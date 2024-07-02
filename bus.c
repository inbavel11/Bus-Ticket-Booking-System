#include <stdio.h>
#include <conio.h>
int s = 1, n1 = 5533101, e = 1;
char s1[5][14] = {"chennai", "vellore", "vilupuram", "madurai", "nellai"};
void time()
{
	printf("\n\tdate=%s\ttime=%s", __DATE__, __TIME__);
}
void b()
{
	printf("\t\tMetro Transport Corporation\n\t1-\tchennai\n\t2-\tvellore\n\t3-\tvilupuram\n\t4-\tmadurai\n\t5-\tnellai");
}
void bus(int s)
{
	int n;
	while (s > 0)
	{
		b();
		printf("\nEnter starting point=");
		scanf("%d", &s);
		clrscr();
		b();
		printf("\nEnter goto place=");
		scanf("%d", &e);
		clrscr();
		b();
		if (e == 0)
			break;
		printf("\nnumber of tickets=");
		scanf("%d", &n);

		clrscr();
		printf("\t\tMetro Transport Corporation");
		n1 = n1 + n;
		if (n == 1)
			printf("\n\tTicket no=%d", n1);
		else
			printf("\n\tTicket no=%d-%d", n1 - n + 1, n1);

		printf("\t%s to %s", s1[s - 1], s1[e - 1]);
		time();
		printf("\n\tNumber of passengers=%d", n);
		printf("\tRs:₹%d", n * (e - s) * 200);
		printf("\n\t\t     Happy Journey!\n");
		int i;
		scanf("%d",&i);
		clrscr();
	}
}
int main()
{
	printf("\t\tMetro Transport Corporation\n\t1-\tchennai\n\t2-\tvellore\n\t3-\tvilupuram\n\t4-\tmadurai\n\t5-\tnellai");

	while (s > 0)
	{
		clrscr();
switch (s)
		{
		case 1:
			bus(1);
			break;
		case 2:
			bus(2);
			break;
		case 3:
			bus(3);
			break;
		case 4:
			bus(4);
			break;
		case 5:
			bus(5);
			break;
		}
	}

	return 0;
}