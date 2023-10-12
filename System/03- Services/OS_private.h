#ifndef OS_PRIVATE_H
#define OS_PRIVATE_H
static Task OS_Tasks[NUMBER_OF_TASKS] = {NULL};
typedef struct{
	u16 priodicity		;
	(void)(*Fptr)(void)	;
	u8 firstDelay		;
	u8 State			;
}Task;

#endif