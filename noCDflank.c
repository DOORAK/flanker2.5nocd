#include <stdio.h>
#include <windows.h>
FILE* f;
const char magic[] = {0xb0,0x01,0x90,0x90,0x90};
void _start() { main();}

int main() {
	f = fopen("flanker.exe","rb+");
	if (f != NULL) 	{ 			fseek(f,0x9239,0);
						fwrite(&magic,5,1,f);
						return 0;	}
	
	MessageBox(0,"NO flanker.exe here", "ERROR",0);
}
