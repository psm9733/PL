#include "decl.h"

int readData(char *path, StudentScore sTable[]) {
	char ch;
	int index = 0;
	int exam_number = 0;
	int student_number = 0;
	FILE *fp;
	fp = fopen(path, "rt");
	while ((ch = fgetc(fp)) != EOF) {
		if (ch == 32) {		//Ascii  space(" ") -> 32
			if(student_number == 0)
				exam_number++;
			student_number++;
		}
	}
	exam_number++;
	fseek(fp, 0, SEEK_SET);
	if (student_number == 0) {
		printf("student_number is zero\n");
		exit(true);
	}
	for(index = 0; index < student_number; index++)
		fscanf(fp, "%d %d", &sTable[index].mid, &sTable[index].final);
	fclose(fp);
	return student_number;
}