#ifndef OS_INTERFACE_H
#define OS_INTERFACE_H




void OS_voidCreateTask(u8 COPY_u8Id, u16 COPY_u16priodicity, (void)(*ptr)(void),u8 COPY_u8firstDelay);
void OS_voidStart(void);


#endif
