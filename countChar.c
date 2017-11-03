#include <stdio.h>
#include<ctype.h>

void main(){
  FILE *fopen(), *fp;
  int c;
  fp = fopen("test.txt","r");
  printf("Characters found in text: \n");
  char charArr[26]= {0};
  c = toupper(fgetc(fp));

  while(c!=EOF) {
     charArr[c-'A']=charArr[c-'A']+1;
     c = toupper(fgetc(fp));
  }
  fclose(fp);
  for(int i=0;i<26;i++){
  printf("\nIndex: %c | Count= %d ",i+65,charArr[i]);
  }
} 

