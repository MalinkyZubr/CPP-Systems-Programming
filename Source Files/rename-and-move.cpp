#include <iostream>
#include <fstream>
#include <Windows.h> 


int main()
{
    BOOL bFile;
    bFile = MoveFileA(
        LPCSTR("ExampleCopy.cpp"),
        LPCSTR("C:\\Users\\ahuma\\Desktop\\Programming\\C-CPP-Programs\\NewFile.cpp")
    );
    if (bFile == FALSE)
    {
        std::cout << "MoveFile Failse & error No - " << GetLastError() << std::endl;
    }
    else
    {
        std::cout << "MoveFile Success" << std::endl;
    }
}