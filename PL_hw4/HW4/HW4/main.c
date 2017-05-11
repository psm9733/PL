#include "decl.h"

int main(int argc, char *argv[]) {
	char *inputFilename = argv[1];
	char *ouputFilename = argv[2];
	int student_number = 0;
	StudentScore sTable[128];

	if (argc < 3) {
		printf("argc number is less than 3.\n");
		exit(true);
	}
	student_number = readData(inputFilename, sTable);
	calcGrade(student_number, sTable);
	outputResult(ouputFilename, student_number, sTable);

	return 0;
}