#include <windows.h>


LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);       //回调函数


int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR szCmdLine, int iCmdShow)

{

    static TCHAR szAppName[] = TEXT("MyWindows");       //定义一个静态的扩展字符名

    HWND hwnd;      //定义一个句柄

    MSG msg;        //定义一个消息结构

    WNDCLASS wndclass;      //定义一个窗口类结构


    wndclass.style = CS_HREDRAW | CS_VREDRAW;       //窗口风格

    wndclass.lpfnWndProc = WndProc;                 //回调函数

    wndclass.cbClsExtra = 0;                        //预留的额外空间

    wndclass.cbWndExtra = 0;                        //预留的额外空间

    wndclass.hInstance = hInstance;                 //该窗口的句柄

    wndclass.hIcon = LoadIcon(NULL, IDI_APPLICATION);       //为所有基于该窗口类的窗口设定一个图标

    wndclass.hCursor = LoadCursor(NULL, IDC_ARROW);         //为所有基于该窗口类的窗口设定一个鼠标指针

    wndclass.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);       //指定窗口背景色

    wndclass.lpszMenuName = NULL;           //指定窗口菜单

    wndclass.lpszClassName = szAppName;     //指定窗口类名,面向程序员


    if (!RegisterClass(&wndclass))      //注册且测试该窗口类

    {

        MessageBox(NULL, TEXT("这个程序需要在 Windows NT 才能执行！"), szAppName, MB_ICONERROR);

        return 0;

    }


    hwnd = CreateWindow(        //创建窗口

        szAppName,              //窗口类名,面向程序员

        TEXT("与窗口的第一次"),     //窗口名,面向用户

        WS_OVERLAPPEDWINDOW,    //窗口风格

        CW_USEDEFAULT,          //指定窗口的初始水平位置

        CW_USEDEFAULT,          //指定窗口的初始垂直位置

        CW_USEDEFAULT,          //指明窗口的宽度

        CW_USEDEFAULT,          //指明窗口的高度

        NULL,                   //指向被创建窗口的父窗口或所有者窗口的句柄

        NULL,                   //菜单句柄

        hInstance,              //与窗口相关联的模块事例的句柄

        NULL);                  //暂忽略

    

    ShowWindow(hwnd, iCmdShow); //设置指定窗口的显示状态

    UpdateWindow(hwnd);         //暂忽略


    while (GetMessage(&msg, NULL, 0, 0))    //从消息队列中获取消息并放在msg结构中

    {

        TranslateMessage(&msg);     //将虚拟键消息转换为字符消息

        DispatchMessage(&msg);      //调度一个消息给窗口程序

    }


    return msg.wParam;

}


LRESULT CALLBACK WndProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)

{

    HDC hdc;

    PAINTSTRUCT ps;

    RECT rect;


    switch (message)

    {

    case WM_PAINT:

        hdc = BeginPaint(hwnd, &ps);

        GetClientRect(hwnd, &rect);

        DrawText(hdc, TEXT("这是我的第一个窗口程序！"), -1, &rect,

            DT_SINGLELINE | DT_CENTER | DT_VCENTER);

        EndPaint(hwnd, &ps);

        return 0;


    case WM_DESTROY:

        PostQuitMessage(0);

        return 0;

    }


    return DefWindowProc(hwnd, message, wParam, lParam);
