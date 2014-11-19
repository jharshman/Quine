/**
* goldblum.c
*
* You're implying that a group composed entirely of female animals will... breed?
* No, I'm, I'm simply saying that life, uh... finds a way. 
*
* Written By:
* Josh Harshman <joshgreyhat@gmail.com>
* 
* Self replicating program
* Makes use of the C precompiler and macros to repicate itself
* 
* */

#include <stdio.h>
#define C(S) void main(void){FILE*fp=fopen("output","w+");fprintf(fp,"#include <stdio.h>\n#define C(S) %s\nC(%s)\n",#S,#S);puts("output written to file");}
C(void main(void){FILE*fp=fopen("output","w+");fprintf(fp,"#include <stdio.h>\n#define C(S) %s\nC(%s)\n",#S,#S);puts("output written to file");})
