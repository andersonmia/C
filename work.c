#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	char buffer[300];
	char fileName[30];
	char name[100];
	char prevline[300] = "";
	FILE *fp;
	FILE *instream;
	int num, i;

	printf("Enter the name of the file: ");
	scanf("%s", fileName);

	fp = fopen(fileName, "w");

	if(fp == NULL) {
		printf("ERROR!");
		exit(1);
	}

	printf("Enter the number of names you want to write: ");
	scanf("%d", &num);

	for(i=1; i<=num; i++) {
		printf("Enter name %d: ", i);
		scanf("%s", name);
		fprintf(fp, "%s\n", name);
	}
	fclose(fp);

	if((instream = fopen(fileName, "r")) == NULL) {
		printf("Unable to open file %s\n", fileName);
		exit(-1);
	}
	printf("\n%s:\n", fileName);

	while (fgets(buffer,sizeof(buffer)-1,instream) != NULL) {
    	if (!strncmp(buffer,prevline,4))
    		printf("%s and %s have the same four characters\n",prevline,buffer);
    	strcpy(prevline,buffer);
  }

  fclose(instream);

}
