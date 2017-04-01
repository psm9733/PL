#ifndef __HEADER_H__
#define __HEADER_H__
#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0
#define PERSON_NUM 3
#define SUBJECT_NUM 2
#define ARRAY_LEN PERSON_NUM * SUBJECT_NUM

/* Data define */

typedef struct student {
	int score[SUBJECT_NUM];
	float average;
	struct student *next;
}Student;


/* --file handling -- */





/* Linked list */

typedef struct linkedlist {
	Student *head;
	Student *cur;
	Student *tail;
	int numofData;
}List;

Student *InitList(List *list);
Student *LInsert(List *list, Student student);
int LDelete(List *list, Student student);
int Lnext(List *list);
void LNumOfData(List *list, int *number);

/* ---------- */
#endif