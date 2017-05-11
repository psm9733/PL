#include "decl.h"

void outputResult(char* path, int student_number, StudentScore sTable[]) {
	int index = 0;
	FILE *fp;
	fp = fopen(path, "wt");
	for (index = 0; index < student_number; index++) {
		fprintf(fp, "%d %d ", sTable[index].mid, sTable[index].final);
		fprintf(fp, "%.1f \r\n", sTable[index].average);
	}
	fclose(fp);
	return;
}