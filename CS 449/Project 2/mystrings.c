#include <stdio.h>
# include <stdlib.h>
# include <string.h>
int main(int argc, char* argv[]) {
 unsigned int length;
int test=0;
 FILE *fp=fopen(argv[1],"r");
 if(fp==NULL){ 
printf("File not found. Exiting mystrings..."); 
return 1;
}
fseek(fp, 0L, SEEK_END);
 int sz = ftell(fp);
// printf("File Size: %d\n",sz); 
fseek(fp, 0L, SEEK_SET);

char *buffer1 = (char *)malloc(sz); 
char *bufferPointer = buffer1; 
int flag =0; 
while(1){
 char c;
 size_t n= fread(&c, sizeof(c), 1, fp);
 unsigned int aciiVal=(unsigned int) c;
 if((n==1)&&(aciiVal>=32 && aciiVal<=126) || (aciiVal==9)){ 
*bufferPointer++ =c; 
length++;
}
else{
        if(length >3 || flag){
	 *bufferPointer='\0';
if(test==0){
printf("%s", buffer1);
test++;
}       
else{
 printf("%s\n", buffer1);
}     
   }
bufferPointer=buffer1; 
flag=0; 
length=0;
if(n==0){
 break;
}
}
if(length == (sz-1)){ 
*bufferPointer="\0";
 printf("%s\n", buffer1); 
bufferPointer=buffer1; 
flag=1;
 length=0;
}}
free(buffer1);
 close(fp);
 return 0;
}
