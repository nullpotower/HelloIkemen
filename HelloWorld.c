#include <stdio.h>

main()
{
	char ikemen;
	
	while(1)
	{
		printf("Are you Ikemen?(y/n)\n");
		scanf("%c",&ikemen);
	
		if(ikemen == "y")
		{
			printf("Hello Ikemen\n");
		}
		else if(ikemen == "n")
		{
			printf("Hello Neet\n");
		}
		else
		{
			printf("you are kasu."\n);
			break;
		}
	}

}