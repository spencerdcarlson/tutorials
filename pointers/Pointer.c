#include <stdio.h>
#include <stdlib.h>

int main(){
	// Declare int a
	int i = 5;
	printf("\n	01.) Declare int i = 5;\n");
	printf("		=> i = %d\n", i);
	printf("		=> addr 'i'  = %p\n\n", &i);

	// Declare pointer p
	int *p = &i;
	printf("	02.) Declare int *p = &i;\n");
	printf("		=> addr 'p' = %p\n\n", p); 	
	
	// Change value of a, therfore the value stored at p is also changed. (They are the same item)
	i = 6;
	printf("	03.) set i = 6;\n");
	printf("		=> i = %d\n", i);
	printf("	Q1.) Does the value of *p change?\n");
	printf("		=> *p = %d\n\n", *p);

	// Change object stored at *p
	*p = 10;
	printf("	04.) set *p = 10;\n");
	printf("		=> *p = %d\n", *p);
	printf("	Q2.) Does the value of i change?\n");
	printf("		=> i = %d\n\n", i);

	// Get a pointer to a free  memory address
	void *mem = malloc(sizeof(int));	
	// cast *mem from void * to long to get decimal memory address 
	long add = (long)mem;

	
	// Change pointer p to some new value
	// this will actually alter the memory address of p
	p = (int *)add; 
	printf("	05.) set p = %lu;\n", add);
	printf("	Q3.) What is the value of *p now?\n");
	printf("		=> *p = %d\n", *p);
	printf("	Q4.) What is the address of p now?\n");
	printf("		=> addr 'p' = %p or %lu in decimal\n", p,(long)mem); 	
	printf("	A1.) p = <some int value>;  // Changes the memory address of the pointer.( The new address of 'p' in decimal is the same as 05.) )\n");
	printf(" 	A2.) *p = <some int value>; // Changes the value of the object stored at the memory address of p along with any other references to that object.\n\n"); 

	free(mem);	
	return 0;
}
