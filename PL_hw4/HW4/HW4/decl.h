#pragma once
#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0
#define test_number 2

typedef struct {
	int mid;
	int final;
	double average;
}student;

extern student student_list[];
extern int readData(char *path);
extern void calcGrade(int student_number);
extern void outputResult(char* path, int student_number);