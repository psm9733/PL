#pragma warning(disable:4996)
#include "decl.h"

int readData(char *path) {
	char ch;
	int index = 0;
	int student_number = 0;
	FILE *fp;
	fp = fopen(path, "rt");
	while ((ch = fgetc(fp)) != EOF) {
		if (ch == 10) 									//Ascii  \n -> 10 
			student_number++;
	}
	fseek(fp, 0, SEEK_SET);
	if (student_number == 0) {
		printf("student_number is zero\n");
		exit(true);
	}
	student_list[student_number];
	for(index = 0; index < student_number; index++)
		fscanf(fp, "%d %d", &student_list[index].mid, &student_list[index].final);
	fclose(fp);
	return student_number;
}