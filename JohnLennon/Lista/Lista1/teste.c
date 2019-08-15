#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n=0, i=0, r=0, alice=0, beto=0;

	while(1){
		scanf("%d", &n);
		alice =0;
		beto =0;
		if(n==0)
		{
			break;
		}
		else
		{	
			for(i=1; i<=n; i++)
			{
				scanf("%d", &r);
				if(r==0)
					alice++;
				else
					beto++;
			}

		printf("Alice ganhou %d e Beto ganhou %d\n", alice, beto);

		}
	};
	
	return 0;

}