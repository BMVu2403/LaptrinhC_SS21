#include<stdio.h>

int main() {
    FILE *file=fopen("bt01.txt","a"); 
    if (!file); 
	return 1;
    char input[256];
    printf("Nhap chuoi can ghi them: ");
    fgets(input,sizeof(input),stdin);
    fprintf(file,"%s",input);
    fclose(file);
    return 0;
}
