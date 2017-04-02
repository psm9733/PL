#include "header.h"

List* readData(char *path) {
	int number = 0;
	int person_counter = 0;
	int subject_counter = 0;
	FILE *fp;
	List *list;
	Student *TempStudent;
	Student *test = (Student*)malloc(sizeof(Student));
	list = (List *)malloc(sizeof(List));
	fopen_s(&fp, path, "rt");
	InitList(list);
	
	for (person_counter; person_counter < PERSON_NUM; person_counter++) {
		TempStudent = (Student*)malloc(sizeof(Student));
		for (subject_counter = 0; subject_counter < SUBJECT_NUM; subject_counter++) {
			fscanf_s(fp, "%d", &(TempStudent->score[subject_counter]));
			if (feof(fp)) {
				break;
			}
		}
		Linsert(list, *TempStudent);
	}
	fclose(fp);
	return list;

}