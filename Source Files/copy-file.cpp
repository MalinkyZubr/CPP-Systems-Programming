#include <iostream>
#include <fstream>
#include <Windows.h>


int main()
{
    BOOL bFile;
    bFile = CopyFileA(
        LPCSTR("create-directory.cpp"),
        LPCSTR("ExampleCopy.cpp"),
        TRUE);
    
    if (bFile == FALSE)
    {
        std::cout << "CopyFile Failed & Error No - " << GetLastError() << std::endl;
    }
    else
    {
        std::cout << "CopyFile Success" << std::endl;
    }
    return 0;
}