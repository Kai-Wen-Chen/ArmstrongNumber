#include <stdio.h>
#include <stdlib.h>

int main () {
	int lb, ub;
	int tmp;
	int count;
	
	while ((scanf("%d %d", &lb, &ub)) != EOF) {
		count = 0;
		for (int i=lb; i<=ub; i++) {
			int I = i;
			int digit;
			tmp = 0;
			
			if (I < 10) digit = 1;
			else if (I < 100) digit = 2;
			else if (I < 1000) digit = 3;
			else if (I < 10000) digit = 4;
			else if (I < 100000) digit = 5;
			else if (I < 1000000) digit = 6;
			else digit = 7;
			
			while (I > 0) { 
				int d = I % 10;
				for (int j=1; j<digit; j++) d *= I % 10;
				tmp += d;
				I /= 10;
			}
			
			if (tmp == i && count == 0) {
				printf("%d", tmp);
				count++;
			} else if (tmp == i && count > 0) {
				printf(" %d", tmp);
				count++;
			}
		}
		
		if (count == 0) printf("none");
		printf("\n");
	}
} 
