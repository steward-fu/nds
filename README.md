# NDS Emulator (DraStic) for Handheld Devices
This repository contains all necessary resources - including the customized SDL2 and ALSA source code - required for supported devices. The NDS emulator used in this project is DraStic (closed-source), extracted from the RetroPie package. The provided ELF binary is compiled for ARM32, not AArch64. The specific DraStic version is v2.5.0.4 with the SHA-1 checksum **ae9c215bdea88359cbcb3c259ce0d60a1f59986c**. This port primarily focuses on integrating and customizing the SDL2 and ALSA libraries, along with extensive modifications to the DraStic emulator itself. As a result, several internal hooking points are used to ensure proper functionality. Please ensure that you are using the exact DraStic version specified above. Suggestions and issue reports are welcome via GitHub. However, please note that I cannot guarantee that all reported issues or feature requests will be resolved or included in future release builds. Finally, since the SDL2 library in this repository is heavily customized, it is not recommended for general-purpose use on other supported devices.

 - [Miyoo Mini Plus](#miyoo-mini-plus)
 - [Miyoo Flip](#miyoo-flip)
 - [Trimui Smart](#trimui-smart)
 - [Trimui Brick](#trimui-brick)
 - [GKD Pixel 2](#gkd-pixel-2)  
 - [GKD Mini Plus](#gkd-mini-plus)
 - [Motorola Droid 4](#motorola-droid-4)  
 - [Motorola Photon Q](#motorola-photon-q)
 - [Credits](#credits)

&nbsp;

## Miyoo Mini Plus
![image](image/miyoo_mini_plus.jpg)  

Device
```
Model: MY354  
Operating System: 202305052130 Onion_v4.3.1-1  
```  

Building Source
```
# Debian 12

$ cd
$ wget https://github.com/steward-fu/website/releases/download/miyoo-mini/mini_toolchain-v1.0.tar.gz
$ tar xvf mini_toolchain-v1.0.tar.gz
$ sudo mv mini /opt
$ sudo mv prebuilt /opt

$ git clone https://github.com/steward-fu/nds
$ cd nds
$ make -f Makefile.miyoo_mini clean
$ make -f Makefile.miyoo_mini
```

Installation
```
Copy the "drastic" folder to "Emu/"
```

Layout  
![image](image/layout/base.bmp)  

Button
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

P.S. The HOTKEY is user-configurable and can be rebound to the MENU or SELECT key via the SDL2 menu.  

&nbsp;

## Miyoo Flip
![image](image/miyoo_flip.jpg)  

Device
```
Model: MY355  
Operating System: 20250526143414
```

Building Source
```
# Debian 12

$ cd
$ wget https://github.com/steward-fu/website/releases/download/miyoo-flip/flip-toolchain-v1.0.tar.gz
$ tar xvf flip-toolchain-v1.0.tar.gz
$ sudo mv flip /opt

$ git clone https://github.com/steward-fu/nds
$ cd nds
$ make -f Makefile.miyoo_flip clean
$ make -f Makefile.miyoo_flip
```

Installation
```
Copy the "drastic" folder to "Emu/"
```
  
Layout  
![image](image/layout/base.bmp)  

Button  
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

P.S. The HOTKEY is user-configurable and can be rebound to the MENU or SELECT key via the SDL2 menu.  

&nbsp;

## Trimui Smart
![image](image/trimui_smart.jpg)  

Device
```
Model: TG2040  
Operating System: 1.0.0 UI_20240510 Kernel_3.4.39  
```

Building Source
```
# Debian 12

$ cd
$ wget https://github.com/steward-fu/website/releases/download/miyoo-mini/mini_toolchain-v1.0.tar.gz
$ tar xvf mini_toolchain-v1.0.tar.gz
$ sudo mv mini /opt
$ sudo mv prebuilt /opt

$ git clone https://github.com/steward-fu/nds
$ cd nds
$ make -f Makefile.trimui_smart clean
$ make -f Makefile.trimui_smart
```

Installation
```
Copy the "drastic" folder to "Emus/"
```
  
Layout N0  
![image](image/layout/n2.bmp)  

Layout N1  
![image](image/layout/n3.bmp)  

Button
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
![image](image/trimui_brick.jpg)  

Device
```
Model: TG3040  
Operating System: 1.1.0 UI_20250610 Kernel_4.9.191  
```

Building Source
```
# Debian 12

$ cd
$ wget https://github.com/steward-fu/website/releases/download/miyoo-mini/mini_toolchain-v1.0.tar.gz
$ tar xvf mini_toolchain-v1.0.tar.gz
$ sudo mv mini /opt
$ sudo mv prebuilt /opt

$ git clone https://github.com/steward-fu/nds
$ cd nds
$ make -f Makefile.trimui_brick clean
$ make -f Makefile.trimui_brick
```

Installation
```
Copy the "drastic" folder to "Emus/"
```
  
Layout  
![image](image/layout/base.bmp)  

Button
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

P.S. The HOTKEY is user-configurable and can be rebound to the MENU or SELECT key via the SDL2 menu.  

&nbsp;

## GKD Pixel 2
![image](image/gkd_pixel_2.jpg)  

Device
```
Model: GKD Pixel 2  
Operating System: IUX UI_v2.5_Jan_15_2025 Kernel_5.10.198  
```

Building Source
```
# Debian 12

$ cd
$ wget https://github.com/steward-fu/website/releases/download/miyoo-mini/mini_toolchain-v1.0.tar.gz
$ tar xvf mini_toolchain-v1.0.tar.gz
$ sudo mv mini /opt
$ sudo mv prebuilt /opt

$ git clone https://github.com/steward-fu/nds
$ cd nds
$ make -f Makefile.gkd_pixel2 clean
$ make -f Makefile.gkd_pixel2
```

Installation
```
1. Copy the "drastic" folder to "STORAGE/"
2. Copy the "14nds" file to "STORAGE/iux/sections/handheld/14nds"
```
  
Layout  
![image](image/layout/base.bmp)  

Button
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

P.S. The HOTKEY is user-configurable and can be rebound to the MENU or SELECT key via the SDL2 menu.  

&nbsp;

## GKD Mini Plus
![image](image/gkd_mini_plus.jpg)  

Device
```
Model: GKD Mini Plus   
Operating System: IUX Jul_14_2025  
```

Building Source
```
# Debian 12

$ cd
$ wget https://github.com/steward-fu/website/releases/download/miyoo-mini/mini_toolchain-v1.0.tar.gz
$ tar xvf mini_toolchain-v1.0.tar.gz
$ sudo mv mini /opt
$ sudo mv prebuilt /opt

$ git clone https://github.com/steward-fu/nds
$ cd nds
$ make -f Makefile.gkd_pixel2 clean
$ make -f Makefile.gkd_pixel2
```

Installation
```
1. Copy the "drastic" folder to "STORAGE/"
2. Copy the "14nds" file to "STORAGE/miniplus/sections/02handheld/14nds"
```

Layout  
![image](image/layout/base.bmp)  

Button
| ( Keypad Mode )       | (Function)                          |
| --------------------- | ----------------------------------- |
| F1                    | Fast Forward                        |
| F2                    | HOTKEY                              |
| R2                    | Swap Screen                         |
| L2                    | Switch Keypad or Touch Mode         |
| R3                    | Save State                          |
| L3                    | Load State                          |
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

P.S. The HOTKEY is user-configurable and can be rebound to the F2 or SELECT key via the SDL2 menu.  

&nbsp;

## Motorola Droid 4
![image](image/moto_xt894.jpg)  

Device
```
Model: XT894
Operating System: Sailfish OS 4.5.0.24
```

Building Source
```
# Sailfish OS 4.5.0.24

$ cd
$ git clone https://github.com/steward-fu/nds
$ cd nds
$ make -f Makefile.moto_xt894 clean
$ make -f Makefile.moto_xt894
```

Layout  
![image](image/layout/base.bmp)  

Button
| ( Keypad Mode )       | (Function)                          |
| --------------------- | ----------------------------------- |
| BACKSPACE             | Swap Screen                         |
| TAB                   | Switch Keypad or Touch Mode         |
| 1                     | Save State                          |
| 0                     | Load State                          |
| W                     | UP                                  |
| S                     | DOWN                                |
| A                     | LEFT                                |
| D                     | RIGHT                               |
| L                     | A                                   |
| K                     | B                                   |
| O                     | X                                   |
| I                     | Y                                   |
| Q                     | L1                                  |
| E                     | R1                                  |
| COMMA                 | SELECT                              |
| PERIOD                | START                               |
| SPACE + W             | Toggle Microphone                   |
| SPACE + S             | Toggle LCD Hinge                    |
| SPACE + A             | Change Layout Mode                  |
| SPACE + D             | Change Layout Mode                  |
| SPACE + L             | Alternate Layout Mode               |
| SPACE + K             | Change Filter (Blur or Pixel)       |
| SPACE + I             | Change Background Image             |
| ENTER                 | Quit Emulator                       |
| SPACE + COMMA         | Enter DraStic Menu                  |
| SPACE + PERIOD        | Enter SDL2 Menu                     |  
| ( Touch Mode )        |                                     |
| WASD                  | Move Touch                          |
| L                     | Touch Screen                        |
| E                     | Lower Moving Speed                  |
| SPACE + K             | Change Touch Image                  |  
| ( SDL2 Menu )         |                                     |
| SPACE + I             | Change Background Image             |  
| ( DraStic Menu )      |                                     |
| SPACE + I             | Change Background Image             |

&nbsp;

## Motorola Photon Q
![image](image/moto_xt897.jpg)  

Device
```
Model: XT897
Operating System: Sailfish OS 4.4.0.68
```

Building Source
```
# Sailfish OS 4.4.0.68

$ cd
$ git clone https://github.com/steward-fu/nds
$ cd nds
$ make -f Makefile.moto_xt897 clean
$ make -f Makefile.moto_xt897
```

Layout  
![image](image/layout/base.bmp)  

Button
| ( Keypad Mode )       | (Function)                          |
| --------------------- | ----------------------------------- |
| BACKSPACE             | Swap Screen                         |
| TAB                   | Switch Keypad or Touch Mode         |
| 1                     | Save State                          |
| 0                     | Load State                          |
| W                     | UP                                  |
| S                     | DOWN                                |
| A                     | LEFT                                |
| D                     | RIGHT                               |
| L                     | A                                   |
| K                     | B                                   |
| O                     | X                                   |
| I                     | Y                                   |
| Q                     | L1                                  |
| E                     | R1                                  |
| COMMA                 | SELECT                              |
| PERIOD                | START                               |
| SPACE + W             | Toggle Microphone                   |
| SPACE + S             | Toggle LCD Hinge                    |
| SPACE + A             | Change Layout Mode                  |
| SPACE + D             | Change Layout Mode                  |
| SPACE + L             | Alternate Layout Mode               |
| SPACE + K             | Change Filter (Blur or Pixel)       |
| SPACE + I             | Change Background Image             |
| ENTER                 | Quit Emulator                       |
| SPACE + COMMA         | Enter DraStic Menu                  |
| SPACE + PERIOD        | Enter SDL2 Menu                     |  
| ( Touch Mode )        |                                     |
| WASD                  | Move Touch                          |
| L                     | Touch Screen                        |
| E                     | Lower Moving Speed                  |
| SPACE + K             | Change Touch Image                  |  
| ( SDL2 Menu )         |                                     |
| SPACE + I             | Change Background Image             |  
| ( DraStic Menu )      |                                     |
| SPACE + I             | Change Background Image             |

&nbsp;

## Credits
![image](image/credits.jpg)  
