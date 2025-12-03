# NDS Emulator (DraStic) for Handheld Devices
This repository contains all necessary resources - including the customized SDL2 and ALSA source code - required for supported devices. The NDS emulator used in this project is DraStic (closed-source), extracted from the RetroPie package. The provided ELF binary is compiled for ARM32, not AArch64. The specific DraStic version is v2.5.0.4 with the SHA-1 checksum **ae9c215bdea88359cbcb3c259ce0d60a1f59986c**. This port primarily focuses on integrating and customizing the SDL2 and ALSA libraries, along with extensive modifications to the DraStic emulator itself. As a result, several internal hooking points are used to ensure proper functionality. Please ensure that you are using the exact DraStic version specified above. Suggestions and issue reports are welcome via GitHub. However, please note that I cannot guarantee that all reported issues or feature requests will be resolved or included in future release builds. Finally, since the SDL2 library in this repository is heavily customized, it is not recommended for general-purpose use on other supported devices.

 - [Miyoo Mini Plus](#miyoo-mini-plus)
 - [Miyoo Flip](#miyoo-flip)
 - [Trimui Smart](#trimui-smart)
 - [Trimui Brick](#trimui-brick)

&nbsp;

## Miyoo Mini Plus
Model: MY354  
Operating System: 202305052130 Onion_v4.3.1-1  
![image](image/miyoo_mini_plus.jpg)  

Layout N0  
![image](image/layout/n0.bmp)  

Layout N1  
![image](image/layout/n1.bmp)  

Layout N2  
![image](image/layout/n2.bmp)  

Layout N3  
![image](image/layout/n3.bmp)  

Layout N4  
![image](image/layout/n4.bmp)  

Layout N5  
![image](image/layout/n5.bmp)  

Layout N6  
![image](image/layout/n6.bmp)  

Layout N7  
![image](image/layout/n7.bmp)  

Layout N8  
![image](image/layout/n8.bmp)  

Layout N9  
![image](image/layout/n9.bmp)  

Layout N10  
![image](image/layout/n10.bmp)  

Layout N11  
![image](image/layout/n11.bmp)  

Layout N12  
![image](image/layout/n12.bmp)  

Layout N13  
![image](image/layout/n13.bmp)  

Layout N14  
![image](image/layout/n14.bmp)  

Layout N15  
![image](image/layout/n15.bmp)  

Layout B0  
![image](image/layout/b0.bmp)  

Layout B1  
![image](image/layout/b1.bmp)  

Layout B2  
![image](image/layout/b2.bmp)  

Layout B3  
![image](image/layout/b3.bmp)  

&nbsp;

The HOTKEY is user-configurable and can be rebound to the MENU or SELECT key via the SDL2 menu.  

| ( Keypad Mode )       | (Function)                          |
| --------------------- | ----------------------------------- |
| R2                    | Swap Screen                         |
| L2                    | Switch Keypad or Touch Mode         |
| HOTKEY + UP           | Toggle Microphone                   |
| HOTKEY + DOWN         | Toggle LCD Hinge                    |
| HOTKEY + LEFT         | Change Layout Mode                  |
| HOTKEY + RIGHT        | Change Layout Mode                  |
| HOTKEY + A            | Alternate Layout Mode               |
| HOTKEY + B            | Change Filter (Blur or Pixel)       |
| HOTKEY + Y            | Change Background Image             |
| HOTKEY + L1           | Quit Emulator                       |
| HOTKEY + L2           | Load State                          |
| HOTKEY + R1           | Fast Forward                        |
| HOTKEY + R2           | Save State                          |
| HOTKEY + SELECT       | Enter DraStic Menu                  |
| HOTKEY + START        | Enter SDL2 Menu                     |  
| ( Touch Mode )        |                                     |
| DPAD                  | Move Touch                          |
| A                     | Touch Screen                        |
| R1                    | Lower Moving Speed                  |
| HOTKEY + Y            | Change Touch Image                  |  
| ( SDL2 Menu )         |                                     |
| HOTKEY + Y            | Change Background Image             |  
| ( DraStic Menu )      |                                     |
| HOTKEY + Y            | Change Background Image             |

&nbsp;

## Miyoo Flip
Model: MY355  
Operating System: 20250526143414  
![image](image/miyoo_flip.jpg)  

Layout N0  
![image](image/layout/n0.bmp)  

Layout N1  
![image](image/layout/n1.bmp)  

Layout N2  
![image](image/layout/n2.bmp)  

Layout N3  
![image](image/layout/n3.bmp)  

Layout N4  
![image](image/layout/n4.bmp)  

Layout N5  
![image](image/layout/n5.bmp)  

Layout N6  
![image](image/layout/n6.bmp)  

Layout N7  
![image](image/layout/n7.bmp)  

Layout N8  
![image](image/layout/n8.bmp)  

Layout N9  
![image](image/layout/n9.bmp)  

Layout N10  
![image](image/layout/n10.bmp)  

Layout N11  
![image](image/layout/n11.bmp)  

Layout N12  
![image](image/layout/n12.bmp)  

Layout N13  
![image](image/layout/n13.bmp)  

Layout N14  
![image](image/layout/n14.bmp)  

Layout N15  
![image](image/layout/n15.bmp)  

Layout B0  
![image](image/layout/b0.bmp)  

Layout B1  
![image](image/layout/b1.bmp)  

Layout B2  
![image](image/layout/b2.bmp)  

Layout B3  
![image](image/layout/b3.bmp)  

&nbsp;

The HOTKEY is user-configurable and can be rebound to the MENU or SELECT key via the SDL2 menu.  

| ( Keypad Mode )       | (Function)                          |
| --------------------- | ----------------------------------- |
| R2                    | Swap Screen                         |
| L2                    | Switch Keypad or Touch Mode         |
| HOTKEY + UP           | Toggle Microphone                   |
| HOTKEY + DOWN         | Toggle LCD Hinge                    |
| HOTKEY + LEFT         | Change Layout Mode                  |
| HOTKEY + RIGHT        | Change Layout Mode                  |
| HOTKEY + A            | Alternate Layout Mode               |
| HOTKEY + B            | Change Filter (Blur or Pixel)       |
| HOTKEY + Y            | Change Background Image             |
| HOTKEY + L1           | Quit Emulator                       |
| HOTKEY + L2           | Load State                          |
| HOTKEY + R1           | Fast Forward                        |
| HOTKEY + R2           | Save State                          |
| HOTKEY + SELECT       | Enter DraStic Menu                  |
| HOTKEY + START        | Enter SDL2 Menu                     |  
| ( Touch Mode )        |                                     |
| DPAD                  | Move Touch                          |
| A                     | Touch Screen                        |
| R1                    | Lower Moving Speed                  |
| HOTKEY + Y            | Change Touch Image                  |  
| ( SDL2 Menu )         |                                     |
| HOTKEY + Y            | Change Background Image             |  
| ( DraStic Menu )      |                                     |
| HOTKEY + Y            | Change Background Image             |

&nbsp;

## Trimui Smart
Model: TG2040  
Operating System: 1.0.0 UI_20240510 Kernel_3.4.39  
![image](image/trimui_smart.jpg)  

Layout N0  
![image](image/layout/n2.bmp)  

Layout N1  
![image](image/layout/n3.bmp)  

&nbsp;

| ( Keypad Mode )       | (Function)                          |
| --------------------- | ----------------------------------- |
| MENU + UP             | Toggle Microphone                   |
| MENU + DOWN           | Toggle LCD Hinge                    |
| MENU + RIGHT          | Swap Screen                         |
| MENU + LEFT           | Switch Keypad or Touch Mode         |
| MENU + A              | Change Layout Mode                  |
| MENU + Y              | Change Background Image             |
| MENU + L1             | Sabe State                          |
| MENU + R1             | Load State                          |
| MENU + SELECT         | Enter DraStic Menu                  |
| MENU + START          | Quit Emulator                       |  
| ( Touch Mode )        |                                     |
| DPAD                  | Move Touch                          |
| A                     | Touch Screen                        |
| R1                    | Lower Moving Speed                  |
| MENU + Y              | Change Touch Image                  |  
| ( DraStic Menu )      |                                     |
| MENU + Y              | Change Background Image             |

&nbsp;

## Trimui Brick
Model: TG3040  
Operating System: 1.1.0 UI_20250610 Kernel_4.9.191  
![image](image/trimui_brick.jpg)  

Layout N0  
![image](image/layout/n0.bmp)  

Layout N1  
![image](image/layout/n1.bmp)  

Layout N2  
![image](image/layout/n2.bmp)  

Layout N3  
![image](image/layout/n3.bmp)  

Layout N4  
![image](image/layout/n4.bmp)  

Layout N5  
![image](image/layout/n5.bmp)  

Layout N6  
![image](image/layout/n6.bmp)  

Layout N7  
![image](image/layout/n7.bmp)  

Layout N8  
![image](image/layout/n8.bmp)  

Layout N9  
![image](image/layout/n9.bmp)  

Layout N10  
![image](image/layout/n10.bmp)  

Layout N11  
![image](image/layout/n11.bmp)  

Layout N12  
![image](image/layout/n12.bmp)  

Layout N13  
![image](image/layout/n13.bmp)  

Layout N14  
![image](image/layout/n14.bmp)  

Layout N15  
![image](image/layout/n15.bmp)  

Layout B0  
![image](image/layout/b0.bmp)  

Layout B1  
![image](image/layout/b1.bmp)  

Layout B2  
![image](image/layout/b2.bmp)  

Layout B3  
![image](image/layout/b3.bmp)

&nbsp;

The HOTKEY is user-configurable and can be rebound to the MENU or SELECT key via the SDL2 menu.  

| ( Keypad Mode )       | (Function)                          |
| --------------------- | ----------------------------------- |
| F1                    | Save State                          |
| F2                    | Load State                          |
| R2                    | Swap Screen                         |
| L2                    | Switch Keypad or Touch Mode         |
| HOTKEY + UP           | Toggle Microphone                   |
| HOTKEY + DOWN         | Toggle LCD Hinge                    |
| HOTKEY + LEFT         | Change Layout Mode                  |
| HOTKEY + RIGHT        | Change Layout Mode                  |
| HOTKEY + A            | Alternate Layout Mode               |
| HOTKEY + B            | Change Filter (Blur or Pixel)       |
| HOTKEY + Y            | Change Background Image             |
| HOTKEY + L1           | Quit Emulator                       |
| HOTKEY + L2           | Save State                          |
| HOTKEY + R1           | Fast Forward                        |
| HOTKEY + R2           | Load State                          |
| HOTKEY + SELECT       | Enter DraStic Menu                  |
| HOTKEY + START        | Enter SDL2 Menu                     |  
| ( Touch Mode )        |                                     |
| DPAD                  | Move Touch                          |
| A                     | Touch Screen                        |
| R1                    | Lower Moving Speed                  |
| HOTKEY + Y            | Change Touch Image                  |  
| ( SDL2 Menu )         |                                     |
| HOTKEY + Y            | Change Background Image             |  
| ( DraStic Menu )      |                                     |
| HOTKEY + Y            | Change Background Image             |
