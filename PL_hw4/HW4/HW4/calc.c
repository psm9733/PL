#include "decl.h"

void calcGrade(int student_number){
	int index, sum;
	char *str = "SCORE";
	float average;
	index = sum = 0;
	printf("--------grade.txt--------\n");
	for (index = 0; index < test_number; index++) {
		printf("%6s%d", str, index);
	}
	str = "AVERAGE";
	printf("%9s\n", str);
	for (index = 0; index < student_number; index++) {
		printf("%7d%7d", student_list[index].mid, student_list[index].final);
		sum = student_list[index].mid + student_list[index].final;
		average = (float)sum / test_number;
		student_list[index].average = average;
		printf("%9.1f\n", student_list[index].average);
		sum = 0;
	}
}