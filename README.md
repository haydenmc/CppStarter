# C++ Starter
This is a quick start template for C++ projects that provides a
[meson/ninja](https://mesonbuild.com/) build and
[spdlog](https://github.com/gabime/spdlog) logging.

Mostly for my own use, since I end up setting these up repeatedly for each
project.

## Prerequisites
- [Meson and Ninja](https://mesonbuild.com/Getting-meson.html)

## Building
```powershell
meson setup builddir
meson compile -C builddir
```