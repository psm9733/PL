#include "decl.h"

void calcGrade(int student_number, StudentScore sTable[]){
	int index, sum;
	int exam_number = 2;
	float average;
	char *str = "AVERAGE";
	index = sum = 0;
	printf("--------grade.txt--------\n");
	printf("%7s", "mid");
	printf("%7s", "final");
	printf("%9s\n", str);
	for (index = 0; index < student_number; index++) {
		printf("%7d%7d", sTable[index].mid, sTable[index].final);
		sum = sTable[index].mid + sTable[index].final;
		average = (float)sum / exam_number;
		sTable[index].average = average;
		printf("%9.1f\n", sTable[index].average);
		sum = 0;
	}
}