#include <stdio.h>
int main()
{
	int offer;
	printf("1.Data deals \n");
	printf("2. Daily bundles \n");
	printf("3. Go Monthly \n");
	printf("4. Okoa Data \n");
	printf("5. Hot minutes \n");
	printf("select an offer: ");
	scanf("%d", &offer);
	switch(offer)
	{
	case 1:
		printf("Data Deals Selected \n");
		break;
	case 2:
		printf("Daily Bundles Selected \n");
		break;
	case 3:
		printf("Monthly Data Selected \n");
		break;
	case 4:
		printf("Okoa Data Selected \n");
		break;
	case 5:
		printf("Hot minutes  Selected \n");
		break;
	default: printf("invalid choice \n");
	}


	return 0;
}
