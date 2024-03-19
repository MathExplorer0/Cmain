#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define WIDTH 100
#define HEIGHT 100	

int main()
{
	int pixels[WIDTH][HEIGHT];

	FILE *f = fopen("ppmFile.ppm", "wb");
	fprintf(f, "P6\n%d %d\n255\n", WIDTH, HEIGHT);

	for(size_t i = 0; i < HEIGHT; i++)
	{for(size_t j = 0; j < WIDTH; j++)		
	{
		char pixel[3] = {30, 30, 30};
		if(pixels[i][j] == 50)
		{for (size_t x = 0; x < 3; x++){pixel[x] = 255;}}
		fwrite(pixel, sizeof(pixel), 1, f);
		printf("%ld\n",pixels[i][j]);
	}}
	fclose(f);
	return 0;
}
