#include "decl.h"

int main(int argc, char *argv[]) {
	char *inputFilename = argv[0];
	char *ouputFilename = argv[1];
	int student_number = 0;
	if (argc < 2) {
		printf("argc number is less than 2.\n");
		exit(true);
	}
	student_number = readData(inputFilename);
	calcGrade(student_number);
	outputResult(ouputFilename, student_number);

	return 0;
}