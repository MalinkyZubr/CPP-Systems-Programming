#include <iostream>
#include <fstream>
#include <Windows.h> 


int main()
{
    HANDLE hFile; // handle variable to see if successful
    hFile = CreateFileA(
        LPCSTR("C:\\Users\\ahuma\\Desktop\\Programming\\C-CPP-Programs\\misc-projects\\systems-programming\\Source Files\\test.txt"), //lpcstr is a pointer to a string (long pointer)
        GENERIC_READ | GENERIC_READ,//desired access
        FILE_SHARE_READ, // share mode, what can other people do wiuth this
        NULL, //security attribute
        CREATE_NEW, // creation disposition
        FILE_ATTRIBUTE_NORMAL, // normal file attribute
        NULL
    );
    if (hFile == INVALID_HANDLE_VALUE)
    {
        std::cout << "CreateFile Failed & Error No - " << GetLastError() << std::endl;
    }
    else
    {
        std::cout << "CreateFileSuccess" << std::endl;
    }
}