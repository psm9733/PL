#ifndef __HEADER_H__
#define __HEADER_H__
#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0
#define PERSON_NUM 3
#define SUBJECT_NUM 2

/* Data define */

typedef struct student {
	int score[SUBJECT_NUM];
	float average;
	struct student *next;
}Student;

/* Linked list */

typedef struct linkedlist {
	Student *head;
	Student *cur;
	Student *tail;
	int numofData;
}List;

void InitList(List* list);
int Linsert(List* list, Student student);
int LFirst(List* list, Student* getdata);
int Lnext(List* list, Student* getdata);
void getNumOfData(List* list, int* number);

/* --file handling -- */

List* readData(char* path);
List* calcGrade(List* list);
void outputResult(List* list, char* path);
#endif