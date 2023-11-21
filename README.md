# Simple Backdoor

Simple backdoor for linux and windows for OSCP preparation

It just create a new admin user with credentials
```c
hacker : hacker
```

---
### For Linux

Compilation
```
gcc -static -o addRoot addRootLin.c
gcc -static -m32 -o addRoot32 addRootLin.c
```

---
### For Windows

Compilation with arguments
```
x86_64-w64-mingw32-gcc -static createUser.c -o createUser.exe
i686-w64-mingw32-gcc -static createUser.c -o createUser32.exe
```

Compilation backdoor DLL
```
x86_64-w64-mingw32-gcc -static createUserDLL.cpp --shared -o createUser.dll
i686-w64-mingw32-gcc -static createUserDLL.cpp --shared -o createUser32.dll
```