#include "decl.h"

int main(int argc, char *argv[]) {
	char *inputFilename = argv[1];
	char *ouputFilename = argv[2];
	int student_number = 0;
	student student_list[128];

	if (argc < 3) {
		printf("argc number is less than 3.\n");
		exit(true);
	}
	student_number = readData(inputFilename, student_list);
	calcGrade(student_number, student_list);
	outputResult(ouputFilename, student_number, student_list);

	return 0;
}