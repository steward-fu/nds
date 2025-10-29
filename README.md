# NDS Emulator (DraStic) for Handheld Devices
This repository contains all necessary resources - including the customized SDL2 and ALSA source code - required for supported devices. The NDS emulator used in this project is DraStic (closed-source), extracted from the RetroPie package. The provided ELF binary is compiled for ARM32, not AArch64. The specific DraStic version is v2.5.0.4 with the SHA-1 checksum **ae9c215bdea88359cbcb3c259ce0d60a1f59986c**. This port primarily focuses on integrating and customizing the SDL2 and ALSA libraries, along with extensive modifications to the DraStic emulator itself. As a result, several internal hooking points are used to ensure proper functionality. Please ensure that you are using the exact DraStic version specified above. Suggestions and issue reports are welcome via GitHub. However, please note that I cannot guarantee that all reported issues or feature requests will be resolved or included in future release builds. Finally, since the SDL2 library in this repository is heavily customized, it is not recommended for general-purpose use on other supported devices.

&nbsp;

## Layout Modes
Normal Mode 0  
![image](image/layout/n0.bmp)  

Normal Mode 1  
![image](image/layout/n1.bmp)  

Normal Mode 2  
![image](image/layout/n2.bmp)  

Normal Mode 3  
![image](image/layout/n3.bmp)  

Normal Mode 4  
![image](image/layout/n4.bmp)  

Normal Mode 5  
![image](image/layout/n5.bmp)  

Normal Mode 6  
![image](image/layout/n6.bmp)  

Normal Mode 7  
![image](image/layout/n7.bmp)  

Normal Mode 8  
![image](image/layout/n8.bmp)  

Normal Mode 9  
![image](image/layout/n9.bmp)  

Normal Mode 10  
![image](image/layout/n10.bmp)  

Normal Mode 11  
![image](image/layout/n11.bmp)  

Normal Mode 12  
![image](image/layout/n12.bmp)  

Normal Mode 13  
![image](image/layout/n13.bmp)  

Normal Mode 14  
![image](image/layout/n14.bmp)  

Normal Mode 15  
![image](image/layout/n15.bmp)  

Book Mode 0  
![image](image/layout/b0.bmp)  

Book Mode 1  
![image](image/layout/b1.bmp)  

Book Mode 2  
![image](image/layout/b2.bmp)  

Book Mode 3  
![image](image/layout/b3.bmp)  

&nbsp;

## Hotkey
The HOTKEY is user-configurable and can be rebound to the MENU or SELECT key via the SDL2 menu.    

| **Keypad Mode**       | Description                         |
| --------------------- | ----------------------------------- |
| R2                    | Swap Screen                         |
| L2                    | Switch Keypad or Touch Mode         |
| HOTKEY + UP           | Toggle Microphone                   |
| HOTKEY + DOWN         | Toggle LCD Hinge                    |
| HOTKEY + LEFT         | Change Layout Mode                  |
| HOTKEY + RIGHT        | Change Layout Mode                  |
| HOTKEY + A            | Alternate Layout Mode               |
| HOTKEY + B            | Change Filter (Blur or Pixel)       |
| HOTKEY + X            | Show Help                           |
| HOTKEY + Y            | Change Background Image             |
| HOTKEY + L1           | Quit Emulator                       |
| HOTKEY + L2           | Load State                          |
| HOTKEY + R1           | Fast Forward                        |
| HOTKEY + R2           | Save State                          |
| HOTKEY + SELECT       | Enter DraStic Menu                  |
| HOTKEY + START        | Enter SDL2 Menu                     |  

| **Touch Mode**        | Description                         |
| --------------------- | ----------------------------------- |
| DPAD                  | Move Touch                          |
| A                     | Touch Screen                        |
| R1                    | Lower Moving Speed                  |
| HOTKEY + Y            | Change Touch Image                  |  

| **Drastic/SDL2 Menu** | Description                         |
| --------------------- | ----------------------------------- |
| HOTKEY + Y            | Change Background Image             |
