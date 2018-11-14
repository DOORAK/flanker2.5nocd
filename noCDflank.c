#include <stdio.h>
#include <windows.h>
void _start(){ main();}

int main(){
	FILE* f = fopen("flanker.exe","rb+");
	if (f == NULL) { 
						MessageBox(0,"NO flanker.exe here", "ERROR",0);
						printf("ERRRRREOROOEOROOEOOROOEORORORERRRRRR!!!!!!!!!!");
						return 0;
					}
	fseek(f,0x9239,0);
	fputc(0xb0,f);
	fputc(0x01,f);
	fputc(0x90,f);
	fputc(0x90,f);
	fputc(0x90,f);
	fclose(f);
	return 0;
}
