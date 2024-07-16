# DigiSpark-Scripts
The Digispark is a tiny development board powered by the ATtiny85 microcontroller, known for its compact size, affordability, and USB interface. With limited I/O pins and flash memory, it is suitable for small-scale projects and offers compatibility with the Arduino IDE, making it accessible to hobbyists and makers.

![image](https://github.com/mishqatabid/DigiSpark-Scripts/assets/145700715/3b1f1c07-9e53-4504-a3b7-575ef13b3556)

This is a set of hand-written DigiSpark sketches for the Arduino IDE that utilize the DigiKeyboard.h library making the DigiSpark to act as a keyboard and execute a variety of actions.

# INSTRUCTIONS
- To deploy the payload, we will download the [Arduino IDE](https://www.arduino.cc/en/software)
- Open the IDE, create a new sketch file and write down the code for Digispark Attiny85.
- The script is then compiled and uploaded on Arduino present in Digispark Attiny85

# SCRIPTS DESCRIPTION

- [**Create_Account**](https://github.com/mishqatabid/DigiSpark-Scripts/blob/main/Create_Account.ino): Creates a new admin account and optionally hides it
- [**DNS Poisoner**](https://github.com/mishqatabid/DigiSpark-Scripts/blob/main/DNS_Poisoner.ino): Injects lines into the Windows hosts file and redirects URLs to wherever you want
- [**Execute_Powershell_Script**](https://github.com/mishqatabid/DigiSpark-Scripts/blob/main/Execute_Powershell_Script.ino): Downloads and executes a powershell script in hidden mode
- [**Fake_Apple_Update**](https://github.com/mishqatabid/DigiSpark-Scripts/blob/main/Fake_Apple_Update.ino): Open a fake apple update that will never end
- [**Fake_Windows_10_Update**](https://github.com/mishqatabid/DigiSpark-Scripts/blob/main/Fake_Windows_10_update.ino): Opens a fake windows update that will never end
- [**Fork_Bomb**](https://github.com/mishqatabid/DigiSpark-Scripts/blob/main/Fork_Bomb.ino): Opens up an obfuscated windows terminal and makes it multiply itself uncontrolably causing the machine to either lock or crash
- [**Hi_Chewy**](https://github.com/mishqatabid/DigiSpark-Scripts/blob/main/Hi_Chewy.ino): Opens a hidden powershell window, downloads a 60 second wav file of random Chewbacca from Star Wars clips, waits 5 minutes and then plays it.
- [**Instant_Shell**](https://github.com/mishqatabid/DigiSpark-Scripts/blob/main/Instant_Shell.ino): Get instant interactive reverse powershell in less than a minute and send commands remotely to victim machine
- [**KeyLogger**](https://github.com/mishqatabid/DigiSpark-Scripts/blob/main/KeyLogger.ino): Drops a payload in the temp directory, runs it in the background, records keystrokes for a set duration, then sends the recorded keystrokes to webhook.site and deletes all keylogger data from the temp directory.
- [**Remote BackDoor**](https://github.com/mishqatabid/DigiSpark-Scripts/blob/main/Remote%20Backdoor.ino): Creates account with admin privileges with name blanka and passwd Ping@123. Also hides it from login screen and turn on remote desktop to be accessible from remote location.
- [**RickRoll**](https://github.com/mishqatabid/DigiSpark-Scripts/blob/main/RickRoll.ino): Plays Never Gonna Give you up while performing a fake windows update
- [**Silly_Mouse**](https://github.com/mishqatabid/DigiSpark-Scripts/blob/main/Silly_Mouse.ino): Switches primary and secondary mouse buttons, display mouse trails, decreases mouse speed and other mouse related pranks
- [**Talker**](https://github.com/mishqatabid/DigiSpark-Scripts/blob/main/Talker.ino): Makes the computer speak out a message using powershell
- [**UAC_Bypass_Taskmanager**](https://github.com/mishqatabid/DigiSpark-Scripts/blob/main/UAC_Bypass_Taskmanager.ino): Starts taskmgr throw some keys and launch cmd in Admin mode. For the sake of POC it executes regedit and stops
- [**Wallpaper_Changer**](https://github.com/mishqatabid/DigiSpark-Scripts/blob/main/Wallpaper_Changer.ino): Downloads and applies a wallpaper via powershell.
- [**Wallpaper_Changer_macOS**](https://github.com/mishqatabid/DigiSpark-Scripts/blob/main/Wallpaper_Changer_macOS.ino): Downloads and applies a wallpaper via applescript on macOS.
- [**Wallpaper_Prank**](https://github.com/mishqatabid/DigiSpark-Scripts/blob/main/Wallpaper_Prank.ino): Takes a screenshot of the desktop, sets it as the wallpaper, hides desktop icons
- [**WiFi_Profile_Grabber**](https://github.com/mishqatabid/DigiSpark-Scripts/blob/main/Wifi_Profile_Grabber.ino): Extracts wifi profiles and saves the csv to a USB drive
- [**WiFi_Profile_Mailer**](https://github.com/mishqatabid/DigiSpark-Scripts/blob/main/Wifi_Profile_Mailer.ino): Writes the wireless network credentials to a csv file and emails it
- [**Window_Jammer**](https://github.com/mishqatabid/DigiSpark-Scripts/blob/main/Window_Jammer.ino): Spams ALT + F4 and CTRL + W key combos to force close all active windows
- [**Windows_Phisher**](https://github.com/mishqatabid/DigiSpark-Scripts/blob/main/Window_Phisher.ino): Logs all entered credentials inculding the invalid ones. It stores them in temporary directory on file rake and in the end delete the created file after sending them when correct credentials are entered.


