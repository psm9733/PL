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
}StudentScore;

extern int exam_number;
extern StudentScore sTable[];
extern int readData(char path[], StudentScore sTable[]);
extern void calcGrade(int student_number, StudentScore sTable[]);
extern void outputResult(char path[], int student_number, StudentScore sTable[]);