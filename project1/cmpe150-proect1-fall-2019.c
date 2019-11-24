#include <stdio.h>
#include <stdlib.h>

int main() {

	int n,i, j, slash,space,trunk1,slash2,space2,trunk2;
	char sym;
	scanf("%d %c", &n, &sym);

	for(i=1; i<n; i++){
		for(j=i; j<i*2; j++){
			for(space=1; space<n*2-j; space++){
				printf(" ");
			}
			for(slash=j; slash<j*2; slash++){
				printf("/");
			}
				printf("%c",sym);
			for(slash2=j; slash2<j*2; slash2++){
				printf("\\");
			}
				printf("\n");
		}
	}

	for(trunk1=1;trunk1<n-1;trunk1++){
		for(space2=1;space2<=n*2-1-n/2;space2++){
			printf(" ");
		}
		for(trunk2=1;trunk2<=n;trunk2++){
			printf("%c", sym);
		}
			printf("\n");
	}
	return 0;
	}

