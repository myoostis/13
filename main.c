#include <stdio.h>
#include <string.h>          //문자열 함수를 사용하였으므로
#include <math.h>  
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


struct point{
	int x;
	int y;
};


int main(int argc, char *argv[]) {
	
	struct point p1, p2;
	int xdiff, ydiff;
	double dist;
	
	printf("input p1 coordinate (x y) : ");
	scanf("%d %d", &p1.x, &p1.y);
	
	printf("input p2 coordinate (x y) : ");
	scanf("%d %d", &p2.x, &p2.y);
	
	//p1, p2간의 거리를 계산하고 출력 
	//calculate xdiff
	xdiff = p2.x - p1.x;
	
	//calculate ydiff 
	ydiff = p2.y - p1.y;
	
	//sqrt(xdiff^2 + ydiff^2) -> dist	
	dist = sqrt(xdiff*xdiff + ydiff*ydiff);
	
	printf("distance : %lf\n", dist);
	
	return 0;
}
