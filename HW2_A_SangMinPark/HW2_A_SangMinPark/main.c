#include "header.h"

int main() {

	List *list = (List *)malloc(sizeof(List));
	int number;
	Student std1,std2;
	std1.score[0] = 30;
	std1.score[1] = 60;
	std2.score[0] = 50;
	std2.score[1] = 60;
	InitList(list);

	Linsert(list, std1);
	Linsert(list, std2);
	printf("data number = %d \n", list->numofData);
	while (Lnext(list)) {
		printf("score[0] = %d, score[1] = %d \n", list->cur->score[0], list->cur->score[1]);
	}

	free(list);
	return 0;
}