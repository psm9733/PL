#pragma warning(disable:4996)
#include "header.h"

List* readData(char *path) {
	int Numberofpeople = 0;
	int NumberofSubject = 0;
	int ch;
	int m, n;
	FILE *fp;
	List *list;
	Student *TempStudent;
	Student *test = (Student*)malloc(sizeof(Student));

	list = (List *)malloc(sizeof(List));
	fp = fopen(path, "rt");
	InitList(list);
	if (fp == NULL) {
		printf("File doesn't exit\n");
		return;
	}
	InitList(list);
	while ((ch = fgetc(fp)) != EOF) {
		printf("ch = %c\n", ch);
		if (ch == 10) {
			Numberofpeople++;
		}
		else if (ch == 32 && Numberofpeople == 0) {
			NumberofSubject++;
		}
	}
	Numberofpeople++;
	NumberofSubject++;
	SetStudent(TempStudent, Numberofpeople, NumberofSubject);
	SetStudent(test, Numberofpeople, NumberofSubject);

	printf("Numberofpeople = %d\n", Numberofpeople);
	printf("NumberofSubject = %d\n", NumberofSubject);
	fseek(fp, 0, SEEK_SET);
	for (m = 0; m < Numberofpeople; m++) {
		TempStudent = (Student*)malloc(sizeof(Student));
		for (n = 0; n < NumberofSubject; n++) {
			fscanf(fp, "%d", &(TempStudent->score[n]));
			if (feof(fp)) {
				break;
			}
		}
		Linsert(list, *TempStudent);
	}
	fclose(fp);
	return list;
}