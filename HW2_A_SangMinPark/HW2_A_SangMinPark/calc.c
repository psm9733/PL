#include "header.h"

List* calcGrade(List* list) {
	int index = 0;
	int sum = 0;
	float average;
	int NumberofSubject = 0;
	Student* temp = (Student*)malloc(sizeof(Student));
	NumberofSubject = list->head->NumberOfSubject;

	printf("-------grade.txt-------\n");
	while (Lnext(list, temp)) {
		for (index = 0; index < NumberofSubject; index++) {
			sum += list->cur->score[index];
			printf("%5d", list->cur->score[index]);
		}
		average = (float)sum / NumberofSubject;
		(list->cur->average) = average;
		printf("%7.1f\n", list->cur->average);
		sum = 0;
	}
	return list;
}