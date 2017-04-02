#include "header.h"

int main() {
	List *list = (List*)malloc(sizeof(List));
	list = readData("points.txt");
	list = calcGrade(list);
	outputResult(list, "grade.txt");
	return 0;
}