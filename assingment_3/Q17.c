// write a program witch takes length of sides of triangle as an input. Display wether Triangle is valid or not.
#include <stdio.h>

int triangleIsValid(int x, int y, int z){
	if(x + y <= z || x + z <= y || y + z <= x)
		return 0;
	return 1;
}

int main(){
	int x, y, z;
	printf(" > Three Sides of Trianglr: ");
	scanf("%d %d %d", &x, &y, &z);

	if(triangleIsValid(x,y,z)){
		printf(" Trianle is Valid");
	}
	else{
		printf(" Triangle is inValid");
	}

	return 0;
}
