#ifndef __HEADER_H__
#define __HEADER_H__
#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0

/* Data define */

typedef struct student {
	int *score;
	int subject_number;
	float average;
	struct student *next;
}Student;

void SetStudent(Student* std, int* Numberofpeople, int* NumberofSubject);
void Getsubject_number(Student *std);
/* Linked list */

typedef struct linkedlist {
	Student *head;
	Student *cur;
	Student *tail;
	int numofData;
	int size;
}List;

void InitList(List* list);
int Linsert(List* list, Student student);
int LFirst(List* list, Student* getdata);
int Lnext(List* list, Student* getdata);
void getNumOfData(List* list, int* number);
void getSize(List* list, int* size);
/* --file handling -- */

List* readData(char* path);
List* calcGrade(List* list);
void outputResult(List* list, char* path);
#endif