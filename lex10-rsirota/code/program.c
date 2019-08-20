#include <limits.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int VIN_IsValid(char *f){
	int INT_MIN = 0;
	int product = 0;
	char[17] newf
	strcpy(newf, f);
	int[] weights = {8, 7, 6, 5, 4, 3, 2, 10, 0, 9, 8, 7, 6, 5, 4, 3, 2};
	if(f == null || sizeof(f) != 17){
		INT_MIN = (-1);
		return INT_MIN;	
	} 
	for(int x = 0; x < sizeof(f); x++){
		if(newf[x] == 'A'){ c[x] = 1; }
		else if(newf[x] == 'B'){ c[x] = 2; }
		else if(newf[x] == 'C'){ c[x] = 3; }
		else if(newf[x] == 'D'){ c[x] = 4; }
		else if(newf[x] == 'E'){ c[x] = 5; }
		else if(newf[x] == 'F'){ c[x] = 6; }
		else if(newf[x] == 'G'){ c[x] = 7; }
		else if(newf[x] == 'H'){ c[x] = 8; }
		else if(newf[x] == 'J'){ c[x] = 1; }
		else if(newf[x] == 'K'){ c[x] = 2; }
		else if(newf[x] == 'L'){ c[x] = 3; }
		else if(newf[x] == 'M'){ c[x] = 4; }
		else if(newf[x] == 'N'){ c[x] = 5; }
		else if(newf[x] == 'P'){ c[x] = 7; }
		else if(newf[x] == 'R'){ c[x] = 9; }
		else if(newf[x] == 'S'){ c[x] = 2; }
		else if(newf[x] == 'T'){ c[x] = 3; }
		else if(newf[x] == 'U'){ c[x] = 4; }
		else if(newf[x] == 'V'){ c[x] = 5; }
		else if(newf[x] == 'W'){ c[x] = 6; }
		else if(newf[x] == 'X'){ c[x] = 7; }
		else if(newf[x] == 'Y'){ c[x] = 8; }
		else if(newf[x] == 'Z'){ c[x] = 9; }
	}
	for(int y = 0; y < sizeof(f); y++){
		product = product + weights[y] * newf[x];
	}
	if(product % 11 == 10){ INT_MIN = 1; return INT_MIN; }
	INT_MIN = 0;	
	return INT_MIN;
}
