#pragma warning(disable:4996)
#include "decl.h"

void outputResult(char* path, int student_number) {
	int index = 0;
	FILE *fp;
	fp = fopen(path, "wt");
	for (index = 0; index < student_number; index++) {
		fprintf(fp, "%d %d ", student_list[index].mid, student_list[index].final);
		fprintf(fp, "%.1f \r\n", student_list[index].average);
	}
	fclose(fp);
	return;
}