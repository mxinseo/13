#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student{
	int ID;
	char name[10];
	double grade;
};

int main(int argc, char *argv[]) {
	struct student s1 = {1, "minseo", 4.3};
	
	s1.ID = 123456;
	strcpy(s1.name, "Juyeop");
	s1.grade = 4.2; 
	
	printf("ID : %d\nname: %s\ngrade: %lf", s1.ID, s1.name, s1.grade);
	return 0;
}
