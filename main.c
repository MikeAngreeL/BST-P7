#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "binarytree.h"


int main(int argc, char *argv[]){

	//check if there is too few arguments
	if(argc < 2){
		printf("Error, too few arguments.\n");
		printf("Launch this program with './P7 \"textfile.txt\"'\n");
		exit(1);
	}
	//check if there is too many arguments
	else if(argc > 2){
		printf("Error, too many arguments.\n");
		printf("Launch this program with './P7 \"textfile.txt\"'\n");
		exit(1);
	}
	//check if the file exsists and if so opens it
	FILE *myfile;

	if((myfile = fopen(argv[1],"r"))==NULL){
		printf("Error! Can't open file.\n");
		exit(1);
	}

	//Main chunk of code
	_Bool found;
	binary_tree bt;

	 printf("Print in order\n");
	 printinorder(&bt);
	 printf("\nPrint pre order\n");
	 printpreorder(&bt);
	 printf("\nPrint post order\n");
	 printpostorder(&bt);
	 printf("\n");
	 found = search(&bt,33);
	 if (found){
	 printf("FOUND 33\n");
	 }
	 found = search(&bt,38);
	 if (found){
	 printf("FOUND 38\n");
	 }
	 printf("Number of elements in tree: %d\n", btsize(&bt));
	 printf("Tree height: %d\n", treeheight(&bt));

}
