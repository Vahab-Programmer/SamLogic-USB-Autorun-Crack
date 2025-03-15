#include <windows.h>
int main(){
    HWND hwnd=GetConsoleWindow();
    ShowWindow(hwnd,SW_HIDE);
    HKEY key;
    system("taskkill /f /im USBsupervisor.exe /t");
    RegOpenKeyEx(HKEY_CURRENT_USER,"SOFTWARE\\SamLogic\\US20XE",0,KEY_ALL_ACCESS,&key);
    RegDeleteKey(HKEY_CURRENT_USER,"SOFTWARE\\SamLogic\\US20XE");
    RegCloseKey(key);
    system("USBACEditor.exe");
    return 0;
}
