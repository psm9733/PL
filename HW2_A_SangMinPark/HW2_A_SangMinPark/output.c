#include "header.h"

void outputResult(List* list, char* path) {
	int person_counter, subject_counter;
	Student *temp = (Student*)malloc(sizeof(Student));
	FILE *fp;
	fopen_s(&fp, path, "wt");
	for (person_counter = 0; person_counter < PERSON_NUM; person_counter++) {
		fprintf(fp, "%d %d %4.1f \r\n", list->cur->score[0], list->cur->score[1], list->cur->average);
		Lnext(list, temp);
	}
	fclose(fp);
	return;
}