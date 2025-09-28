# Changelog
A specialized NDS emulator for optimal performance on handheld devices.  
https://github.com/steward-fu/nds  

## v1.8 (2024/02/02)
- Improved video performance by up to 18% (tested with *Final Fantasy III*).
- Replaced OpenGL ES libraries with dummy versions to save ~25MB RAM.
- Added new background images (contributions from 河馬, 路人乙, and 雯瑾文曦).
- Added support for custom save state paths.
- Integrated unit testing framework (Unity project).
- Added automatic screen resolution detection (640x480 or 752x560) in `launch.sh`.
- Added fast-forward speed adjustment in the custom menu.
- Added support for FunKey S, RG Nano, and F(x)tec Pro1 (Qx1000).
- Users can now change background images in both the custom and DraStic menus.
- Updated background image notification to show the folder name instead of an index number.
- Fixed inverted screen issue in Display Modes 0 and 1.

## v1.7 (2023/12/02)
- Added support for 752x560 resolution.
- Added new 752x560 background images (contributed by 河馬).
- Added new 640x480 background images (contributed by 路人乙 and Koriki).
- Expanded options in the custom menu.
- Added auto-save and auto-load functionality.
- Added support for screen rotation (0°, 90°, 270°).
- Introduced new book-style display mode.
- Added `half_vol` and `auto-slot` options in `settings.json`.
- Improved low-speed stylus performance.
- Optimized NEON instructions for better performance.
- Key mapping aligned with Onion OS.
- Fixed repeated key input after switching to stylus mode.
- First release for TRIMUI SMART.

## v1.6 (2023/10/22)
- Improved video performance by up to 20% (Keypad mode only).
- Added multi-language support.
- Introduced custom DraStic menu (replaces original menu).
- Added splash screen on first run (images by 河馬).
- Added custom background for DraStic menu (images by 河馬).
- Added new config options: `menu_c0`, `menu_c1`, `menu_c2`, `cust_menu`, `lang`, `dpad_90d` in `settings.json`.
- Stylus now centers automatically when enabled.
- Updated `launch.sh` with splash screen and optimized sync behavior.
- Refined save state settings: disabled compression and backup options.

## v1.5 (2023/10/11)
- Fixed stylus pen not displaying correctly in Display Modes 2 and 3.
- Added `swap_l1l2` and `swap_r1r2` options in `settings.json`.
- Added filter support (blur and pixel filters).
- Refined hotkey functionality.

## v1.4 (2023/10/07)
- Fixed diagonal movement issue with stylus.
- Fixed stylus visibility issues in both standard and high-res modes.
- Fixed crash when switching display modes.
- Added custom menu support.
- Added Pikachu-themed wallpapers (contributed by 河馬).
- Added font rendering support (`resources/font/font.ttf`).
- Added overlay support and images (from common-overlays GitHub).
- Added `mincpu` option in `settings.json`.
- Adjusted alpha setting range from 0–9 to 0–7.
- Updated stylus size in high-res mode.
- Removed digital display modes and related assets.
- Refined hotkey configuration.

## v1.3 (2023/09/30)
- Enhanced audio performance.
- Removed `audio feed` and `audio delay` settings from `settings.json`.
- Integrated ARM NEON optimizations for audio/video (`nenon_memcpy()`).
- Enabled high-resolution 3D support.
- Added high-res 3D background images (contributed by 河馬).
- Introduced book-style display mode.
- Added themed backgrounds for book-style mode (contributed by 河馬).
- Added alpha transparency settings for Display Modes 00 and 01.
- Added max CPU clock configuration in `settings.json`.
- Added adjustable screen positioning for Display Modes 00 and 01.
- Stylus can now be shown on either screen.

## v1.2 (2023/09/25)
- Added audio feed and delay configuration in `settings.json`.
- Fine-tuned audio latency (default: `feed=768`, `delay=1000`).

## v1.1 (2023/09/24)
- Fixed background noise (occurring every second).
- Set default frameskip to 4 to reduce latency (aligns with DraStic defaults).

## v1.0 (2023/09/23)
- Improved overall sound performance.
- Included 13 built-in display modes (images by 河馬).
- Added 4 built-in wallpapers (images by 河馬).
- Added 6 custom stylus pen images.
- Enabled overclocking support.
- Customized stylus direction and movement speed.
- Customized DraStic logo (images by 河馬).
- Optimized swap ratio settings in `launch.sh`.
- Removed `ram.img` swap file (cachefile used instead).

## RC4 (2023/09/11)
- Enhanced sound performance.

## RC3 (2023/09/11)
- Fixed issue where last pressed button repeats when VOL-/VOL+ is triggered.
- Fixed incorrect speed (1.5×) by adjusting frameskip to 2 (default: 4).
- Tuned sound library for improved performance.

## RC2 (2023/09/10)
- Added `"noaudiofix": 1` option in `config.json` (for Stock OS).
- Added `stop_audioserver.sh` to `launch.sh` (for Onion OS).

## RC1 (2023/09/10)
- Implemented custom ALSA library for DraStic emulator.
- Users can now change background images:
  - `bg_s.png`: single screen (non-stretched)
  - `bg_v.png`: vertical screen (non-stretched)
  - `bg_h.png`: horizontal screen (non-stretched)
  - `bg_vh.png`: vertical/horizontal (stretched)
- Users can change stylus pen image via `pen.png` (any WxH, e.g., 32x32, 64x128).
- Toggle stretch mode with SELECT + START.
- Swap screens with R2.
- Enable stylus mode with L2:
  - Only L2, D-PAD, and A are active in this mode.
  - Press L2 again to return to D-PAD mode.
