#include <bits/stdc++.h>
#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <ctime>
using namespace std;

void greetings()
{
    time_t now = time(0);
    tm *time = localtime(&now);
    if (time->tm_hour < 12)
    {
        cout << "Good Morning Master Ajay Soni" << endl;
        string phrase = "Good Morning Master Ajay Soni";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
    else if (time->tm_hour >= 12 && time->tm_hour <= 16)
    {
        cout << "Good Afternoon Master Ajay Soni" << endl;
        string phrase = "Good Afternoon Master Ajay Soni";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
    else if (time->tm_hour > 16 && time->tm_hour < 24)
    {
        cout << "Good Evening Master Ajay Soni" << endl;
        string phrase = "Good Evening Master Ajay Soni";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
}

void dateTime()
{
    time_t now = time(0);
    char *dt = ctime(&now);
    cout << "The data and time is " << endl
         << dt << endl;
}
int main()
{
    system("cls");
    cout << "\t<###################################### Personal Assistant #####################################>" << endl;
    string password; // to take password
    string command;  // to take command from the user
    do
    {
        cout << "************************************************************************************************" << endl;
        cout << "| ENTER THE PASSWORD TO CONFRIM YOU ARE MASTER AJAY SONI" << endl;
        cout << "************************************************************************************************" << endl;
        string phrase = "ENTER THE PASSWORD TO CONFIRM YOU ARE MASTER AJAY SONI";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
        getline(cin, password);
        STARTUPINFO startInfo = {0};
        PROCESS_INFORMATION processInfo = {0};
        if (password == "Silent Night")
        {
            cout << "******************************************************************************************" << endl;
            greetings();
            do
            {
                cout << "\n******************************************************************************************" << endl;
                cout << "\nHow can i help you Master Ajay Soni" << endl
                     << endl;
                string phrase = "How can i help you Master Ajay Soni";
                string command = "espeak \"" + phrase + "\"";
                const char *charCommand = command.c_str();
                system(charCommand);
                cout << "Enter your Question ===> ";
                getline(cin, command);
                cout << endl;
                cout << "Answer to your question ===> ";
                if (command == "hello" || command == "hi")
                {
                    cout << "Hello Master Ajay Soni......." << endl;
                    string phrase = "Hello Master Ajay Soni";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
                else if (command == "who are you" || command == "who is speaking")
                {
                    cout << "I'm a personal assistant created by Master Ajay Soni !" << endl;
                    string phrase = "I'm a personal assistant created by Master Ajay Soni !";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
                else if (command == "open notepad")
                {
                    cout << "openining notepad" << endl;
                    string phrase = "openining notepad";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Program Files\\WindowsApps\\Microsoft.WindowsNotepad_10.2103.6.0_x64__8wekyb3d8bbwe\\Notepad\\Notepad.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }
                else if (command == "open wordpad")
                {
                    cout << "openining wordpad" << endl;
                    string phrase = "openining wordpad";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Program Files\\Windows NT\\Accessories\\wordpad.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }
                else if (command == "open Microsoft Word")
                {
                    cout << "openining Microsoft Word" << endl;
                    string phrase = "openining Microsoft Word";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Program Files\\Microsoft Office\root\\Office16\\WINWORD.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }
                else if (command == "open Microsoft Excel")
                {
                    cout << "openining Microsoft Excel" << endl;
                    string phrase = "openining Microsoft Excel";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Program Files\\Microsoft Office\\root\\Office16\\EXCEL.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }
                else if (command == "open Microsoft Paint")
                {
                    cout << "openining Microsoft Paint" << endl;
                    string phrase = "openining Microsoft Paint";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Program Files\\WindowsApps\\Microsoft.Paint_11.2110.0.0_x64__8wekyb3d8bbwe\\PaintApp\\mspaint.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }
                else if (command == "open Application Form")
                {
                    cout << "openining Application Form" << endl;
                    string phrase = "openining Application Form";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    ShellExecute(NULL, "open", "D:\\extra document\\ApplicantForm.pdf", NULL, NULL, SW_NORMAL);
                }
                else if (command == "show my pic")
                {
                    cout << "openining your pic" << endl;
                    string phrase = "openining your pic";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    ShellExecute(NULL, "open", "E:\\Silent Night 1\\Pictures\\Ajay picuture\\AjaySoni.jpg", NULL, NULL, SW_NORMAL);
                }
                else if (command == "open google")
                {
                    cout << "openining google" << endl;
                    string phrase = "openining google";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.google.com");
                }
                else if (command == "open youtube")
                {
                    cout << "openining youtube" << endl;
                    string phrase = "openining youtube";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.youtube.com");
                }
                else if (command == "close chrome browser")
                {
                    cout << "closing chrome browser" << endl;
                    string phrase = "closing chrome browser";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("TASKKILL /IM chrome.exe /F");
                }
                else if (command == "play music")
                {
                    cout << "openining music now" << endl;
                    string phrase = "openining music now";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    ShellExecute(NULL, "open", "E:\\Silent Night 1\\Music\\background music\\Cartoon.mp3", NULL, NULL, SW_NORMAL);
                }
                else if (command == "bye" || command == "exit")
                {
                    cout << "Good bye Master Ajay Soni,see you soon..." << endl;
                    string phrase = "Good bye Master Ajay Soni,see you soon...";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    exit(0);
                }
                else
                {
                    cout << "Sorry could not understant your command please try again!";
                    string phrase = "Sorry could not understant your command please try again!";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
            } while (1);
        }
        else
        {
            system("cls");
            cout << "#################################### Personal Assistant #################################";
            cout << "*****************************************************************************************" << endl;
            cout << "X Incorrect Password, PLEASE ENTER CORRECT PASSWORD! X" << endl;
            cout << "*****************************************************************************************" << endl
                 << endl;
            string phrase = "Incorrect Password, please enter correct password!";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
        }
    } while (1);
    return 0;
}