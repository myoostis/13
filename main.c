#include <stdio.h>
#include <string.h>          //문자열 함수를 사용하였으므로  
#include <stdlib.h>
#define MAX_NAME            20
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


struct student{
	int ID;
	char name[MAX_NAME];
	double grade;
};


int main(int argc, char *argv[]) {
	
	struct student student1 = {2114114, "HyojinPark", 4.3};          //instance
	
	student1.ID = 2111893;
	strcpy(student1.name, "SuinKim");
	student1.grade = 3.3;
	
	printf("ID : %i\n", student1.ID);
	printf("name : %s\n", student1.name);
	printf("grade : %lf\n", student1.grade);
	
	return 0;
}
