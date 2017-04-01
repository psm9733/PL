#include "header.h"

Student* InitList(List *list) {
	Student *header = (Student *)malloc(sizeof(Student));
	list->head = header;
	list->tail = header;
	list->cur = header;
	list->numofData = 0;
	return header;
}

Student* Linsert(List *list, Student student) {
	Student *allo_student = (Student *)malloc(sizeof(Student));
	*allo_student = student;
	if (list->numofData == 0) {
		list->head->next = allo_student;
		list->tail = list->head->next;
		list->tail->next = NULL;
		list->numofData++; //inital numofData = 1;
	}
	else {
		list->tail->next = allo_student;
		list->tail = list->tail->next;
		list->tail->next = NULL;
		list->numofData++;
	}
	return allo_student;
}

int LFirst(List *list) {
	if (list->numofData == 0) {
		list->cur = list->head->next;
		return true;
	}
	return false;
}

int Lnext(List *list) {
	if (list->cur->next != NULL) {
		list->cur = list->cur->next;
		return true;
	}
	else if (list->numofData != 0 && list->cur->next == NULL) {
		list->cur = list->head->next;
		return false;
	}
	return false;
}

void getNumOfData(List *list, int *number) {
	*number = list->numofData;
}