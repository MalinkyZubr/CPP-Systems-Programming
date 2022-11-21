#include <iostream>
#include <fstream>
#include <Windows.h>


int main()
{
    BOOL bDir; // bool is a microsoft datatype that stores as an int
    LPCSTR path = "hello";
    bDir = CreateDirectoryA(path, NULL); //CreateDirectory(filename, security attributes)
    if (bDir == FALSE)
    { // FALSE is an ms boolean, not the same as standard C++
        std::cout << "CreateDirectory Fails & Error No - " << GetLastError() << std::endl; //capture the last error if the create directory returns false
    }
    else
    {
        std::cout << "CreateDirectory Success" << std::endl;
    }
    system("PAUSE"); 

    std::cout << "Now removing " << std::endl;

    bDir = RemoveDirectoryA(path);

    if (bDir == FALSE)
    { // FALSE is an ms boolean, not the same as standard C++
        std::cout << "RemoveDirectory Fails & Error No - " << GetLastError() << std::endl; //capture the last error if the create directory returns false
    }
    else
    {
        std::cout << "RemoveDirectory Success" << std::endl;
    }

    return 0;
}
