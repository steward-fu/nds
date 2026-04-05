# drastic_ds_shaders

Some shaders for [DraStic DS](https://play.google.com/store/apps/details?id=com.dsemu.drastic&hl=en_GB), the Nintendo DS emulator for Android.

- All shaders include a '+ NDS Color' variant, which applies colour correction to simulate the display characteristics of a DS Phat

- All shaders include a '+ Natural Vision' variant, which applies ShadX's 'Natural Vision' colour (saturation) enhancement

- All shaders include a '+ NDS Color + Natural Vision' variant, which applies DS Phat colour correction followed by ShadX's 'Natural Vision' colour enhancement

- All shaders work correctly with 'High-Resolution 3D Rendering' turned ON or OFF

- All shaders run at full speed on mid-to-low-range Android devices

## LCD1x

A very simple 'scanline' shader, based on LCD3x from RetroArch. Differs from LCD3x in that it omits the 3-band colour separation and has correctly aligned scanlines. Works well on low resolution displays (i.e. 720p).

## Sharp Bilinear

A port of the 'sharp-bilinear'/'sharp-bilinear-simple' shader from RetroArch. Creates sharp pixels without scaling artefacts by performing an automatic optimal integer prescale followed by linear downscaling to the display size.

## zFast LCD

A port of the 'zfast_lcd' shader from RetroArch. Creates an LCD effect by adding a subtle grid lattice to the screen. REQUIRES a high resolution display (at least 1080p). Works best with integer screen scaling, but fine without.

## *Extras*

### NDS Color

A stand-alone DS Phat colour correction shader, which may be combined (as a first pass) with other shaders not included in this repository.

### Natural Vision

A stand-alone 'Natural Vision' colour (saturation) enhancement shader, which may be combined (as a first pass) with other shaders not included in this repository.
