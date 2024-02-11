#include <windows.h>
#include <tchar.h> 

INT WINAPI _tWinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPTSTR lpszCmdLine, int nCmdShow) {
    const TCHAR* i1 = TEXT("Ivaskevich");
    const TCHAR* i2 = TEXT("Daria");
    const TCHAR* i3 = TEXT("Serhiivna");
    const TCHAR* i4 = TEXT("Student");
    const TCHAR* resumeParts[] = { i1, i2, i3, i4 };
    int sum = 0;
    for (int i = 0; i < sizeof(resumeParts) / sizeof(resumeParts[0]); i++) {
        MessageBox(0, resumeParts[i], TEXT("Info Resume"), MB_OK | MB_ICONINFORMATION);
        sum += lstrlen(resumeParts[i]);
    }

    int avgLen = sum / 4;
    TCHAR avStringLength[10];
    _itot_s(avgLen, avStringLength, 10, 10);
    MessageBox(0, avStringLength, TEXT("is"), MB_OK | MB_ICONINFORMATION);
}