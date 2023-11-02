# NDS Emulator (DraStic) for Miyoo Mini (Plus)
 - [Introduction](#introduction)
 - [Terminology](#terminology)
 - [New Features](#new-features)
   - [Display Modes (Normal Resolution)](#display-modes-normal-resolution)
     - [Mode 0 - 640x480, 170x128](#mode-0)
     - [Mode 1 - 640x480, 256x192](#mode-1)
     - [Mode 2 - 512x384](#mode-2)
     - [Mode 3 - 640x480](#mode-3)
     - [Mode 4 - 256x192, 256x192](#mode-4)
     - [Mode 5 - 320x240, 320x240](#mode-5)
     - [Mode 6 - 256x192, 256x192](#mode-6)
     - [Mode 7 - 320x240, 320x240](#mode-7)
     - [Mode 8 - 480x360, 160x120](#mode-8)
     - [Mode 9 - 384x288, 256x192](#mode-9)
     - [Mode 10 - 384x288, 256x192](#mode-10)
     - [Mode 11 - 384x288, 256x192](#mode-11)
     - [Mode 12 - 427x320, 427x320](#mode-12)
   - [Display Modes (High Resolution)](#display-modes-high-resolution)
     - [Mode 0 - 512x384](#mode-0)
     - [Mode 1 - 640x480](#mode-1)
   - [Video Filters](#video-filters)
     - [Pixel](#pixel) 
     - [Blur](#blur)
   - [Refined Menu](#refined-menu)
   - [Hotkeys](#hotkeys)
 - [Build from Scratch](#build-from-scratch)
   - [How to prepare the build environment (Docker)](#how-to-prepare-the-build-environment-docker)
   - [How to build all libraries](#how-to-build-all-libraries)
   - [How to delete the build environment (Docker)](#how-to-delete-the-build-environment-docker)
 - [Installation](#installation)
 - [Limitations](#limitations)
 - [Q & A](#q--a)

## Introduction
This repository hosts all of resources, which include SDL2 and ALSA source code, needed for NDS emulator on Miyoo Mini (Plus) handheld. The NDS emulator we used is DraStic emulator (close-source) that obtained from RetroPie package and the ELF binary is in ARM32 format, not AArch64. The DraStic version is v2.5.0.4 and sha1 is ae9c215bdea88359cbcb3c259ce0d60a1f59986c. In this porting, I focusd on SDL2 and ALSA libraries and heavily customized for DraStic emulator on Miyoo Mini (Plus) handheld. Therefore, there are some hooking points used in this emulator. To make sure it works as expected, please use the correct DraStic emulator. It is welcome to file any suggestion or issue to this GitHub but I must say that I cannot make sure whether it can be fixed. Since this porting is heavily customized, it is not recommended for generic use-case on Miyoo Mini (Plus) handheld.  

In DraStic emulator, it only supports 3 display modes, which are vertical, horizontal and single. In order to improve user experience on Miyoo Mini (Plus), I decided to heavily customize the display mode based on DraStic's vertical mode (Screen orientation). So, the "Screen orientation" MUST be set as vertical to make sure all of operations work on Miyoo Mini (Plus). In current design, there are 13 display modes for normal resolution (256x192) and 2 display modes for high resolution (512x384). All of display modes are addressed as the following description.

&nbsp;

## Terminology
|  Term         | Description                                                |
| ------------- | ---------------------------------------------------------- |
| Keypad Mode   | This is the default mode and it is so-called gamepad mode. |
| Stylus Mode   | In this mode, the touch pen shows on either top or bottom screen. DPAD is used for moving touch pen and A button acts touch point. | 

&nbsp;

## New Features
### Display Modes (Normal Resolution)
#### Mode 0
Screen Resolution: 640x480, 170x128
| ![image](images/dis_0.png) |
|-|

&nbsp;

#### Mode 1
Screen Resolution: 640x480, 256x192
| ![image](images/dis_1.png) |
|-|

&nbsp;

#### Mode 2
Screen Resolution: 512x384  
Background Image: bg_s0.png
| ![image](images/dis_2.png) |
|-|

&nbsp;

#### Mode 3
Screen Resolution: 640x480
| ![image](images/dis_3.png) |
|-|

&nbsp;

#### Mode 4
Screen Resolution: 256x192, 256x192  
Background Image: bg_v0.png
| ![image](images/dis_4.png) |
|-|

&nbsp;

#### Mode 5
Screen Resolution: 320x240, 320x240  
Background Image: bg_v1.png
| ![image](images/dis_5.png) |
|-|

&nbsp;

#### Mode 6
Screen Resolution: 256x192, 256x192  
Background Image: bg_h0.png
| ![image](images/dis_6.png) |
|-|

&nbsp;

#### Mode 7
Screen Resolution: 320x240, 320x240  
Background Image: bg_h1.png
| ![image](images/dis_7.png) |
|-|

&nbsp;

#### Mode 8
Screen Resolution: 480x360, 160x120  
Background Image: bg_s0.png
| ![image](images/dis_8.png) |
|-|

&nbsp;

#### Mode 9
Screen Resolution: 384x288, 256x192  
Background Image: bg_s1.png
| ![image](images/dis_9.png) |
|-|

&nbsp;

#### Mode 10
Screen Resolution: 384x288, 256x192  
Background Image: bg_c0.png
| ![image](images/dis_10.png) |
|-|

&nbsp;

#### Mode 11
Screen Resolution: 384x288, 256x192  
Background Image: bg_c1.png
| ![image](images/dis_11.png) |
|-|

&nbsp;

#### Mode 12
Screen Resolution: 427x320, 427x320  
Background Image: bg_hh0.png
| ![image](images/dis_12.png) |
|-|

&nbsp;

### Display Modes (High Resolution)
#### Mode 0
Screen Resolution: 512x384  
Background Image: bg_hres0.png
| ![image](images/hres_0.png) |
|-|

&nbsp;

#### Mode 1
Screen Resolution: 640x480
| ![image](images/hres_1.png) |
|-|

&nbsp;

### Video Filters
#### Pixel
| ![image](images/filter_pixel.png) |
|-|

&nbsp;

#### Blur
| ![image](images/filter_blur.png) |
|-|

&nbsp;

### Refined Menu
Original Main Menu
| ![image](images/menu_2.png) |
|-|

&nbsp;

Refined Main Menu
| ![image](images/menu_0.png) |
|-|

&nbsp;

Original Cheat Menu
| ![image](images/menu_3.png) |
|-|

&nbsp;

Refined Cheat Menu
| ![image](images/menu_1.png) |
|-|

&nbsp;

### Hotkeys
|  Keys         | Functionality                    |
| ------------- | -------------------------------- |
| R2            | Swap screen                      |
| L2            | Change Keypad mode / Stylus mode |
|SELECT + R1    | Fast forward                     |
|SELECT + R2    | Quick save state                 |
|SELECT + L2    | Quick load state                 |
|SELECT + L1    | Exit DraStic emulator            |
|SELECT + START | Enter the customized menu        |

&nbsp;

**Only for customized menu**
|  Keys         | Functionality                    |
| ------------- | -------------------------------- |
| UP / DOWN     | Select item                      |
| LEFT / RIGHT  | Change setting                   |
| B             | Apply changes and then exit      |

&nbsp;

**Only for Keypad mode**
|  Keys      | Functionality                       |
| ---------- | ----------------------------------- |
| MENU       | Enter DraStic’s menu                |
| SELECT + A | Alternate display mode              |
| SELECT + B | Change video filter (blur or pixel) |
| SELECT + Y | Change background image             |

&nbsp;

**Only for Stylus mode**
|  Keys         | Functionality                   |
| ------------- | ------------------------------- |
| DPAD          | Move the stylus pen             |
| A             | Touch screen                    |
| SELECT + Y    | Change stylus pen               |
| SELECT + UP   | Show the stylus pen on screen 1 |
| SELECT + DOWN | Show the stylus pen on screen 0 |

&nbsp;

## Build from Scratch
### How to prepare the build environment (Docker)
```
$ sudo docker build -t mmiyoo .
```

### How to build all libraries
```
$ sudo docker run -it --rm -v $(pwd):/nds_miyoo mmiyoo /bin/bash
$ make config
$ make
```

### How to delete the build environment (Docker)
```
$ sudo docker image rm mmiyoo
```

## Installation
```
1. put drastic into Emu folder
2. put ROMs into Roms/NDS folder
```

## Limitations
 - Screen orientation MUST be set as vertical on DraStic menu as the following image because all of display modes are handled by SDL2 library, not DraStic emulator  
![image](images/setting_0.png)  

&nbsp;

## Q & A
Q1: How to change the DraStic’s menu back to the original one ?  
A1: Change the value of  cust_menu in resources/settings.json file to 0.  
