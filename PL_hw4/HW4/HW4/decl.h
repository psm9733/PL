#pragma once
#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0


typedef struct {
	int mid;
	int final;
	double average;
}student;

extern int exam_number;
extern student student_list[];
extern int readData(char *path);
extern void calcGrade(int student_number);
extern void outputResult(char* path, int student_number);