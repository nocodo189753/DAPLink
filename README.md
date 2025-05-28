
# 简介
1. 本项目为针对 DAPLINK-HS (EEmaker) 硬件的个人修改
2. HID 改 BULK（CMSIS DAP v1 -> v2）
3. 添加JTAG操作支持
4. LED灯变动
5. USER按键改为SW reset。DAPLINK默认reset动作都是操作硬件nRESET脚（包括U盘烧写后的自动复位功能），这个默认特性没有变，有需要的可以自己在 swd_set_target_reset() 里取消注释
6. U盘烧写的 target改为 stm32f103rc

# 其他
1. BULK模式下，DAP_PACKET_COUNT 只能设成1，否则pyocd 烧写会连发多个命令，每个命令都需要回复512字节，此时BULK IN的buffer大小不够会导致USB异常，可以尝试阉割MSC/CDC等功能
2. BULK和HID的速度差异数据未测试
---


[![DAPLink](/docs/images/daplink-website-logo-link.png)](https://daplink.io/)

[![Linux Build (main)](https://github.com/ARMmbed/DAPLink/actions/workflows/linux.yml/badge.svg?branch=main)](https://github.com/ARMmbed/DAPLink/actions/workflows/linux.yml)
[![Linux Build (develop)](https://github.com/ARMmbed/DAPLink/actions/workflows/linux.yml/badge.svg?branch=develop)](https://github.com/ARMmbed/DAPLink/actions/workflows/linux.yml)
[![Join us on Slack](https://img.shields.io/static/v1?label=Slack&color=4A154B&logo=slack&style=social&message=Join%20us%20on%20Slack)](https://join.slack.com/t/pyocd/shared_invite/zt-zqjv6zr5-ZfGAXl_mFCGGmFlB_8riHA)

----

Arm Mbed DAPLink is an open-source software project that enables programming and debugging application software running on Arm Cortex CPUs. Commonly referred to as interface firmware, DAPLink runs on a secondary MCU that is attached to the SWD or JTAG port of the application MCU. This configuration is found on nearly all development boards. Enumerating as a USB composite device, it creates a bridge between your development computer and the CPU debug access port. DAPLink enables developers with:

* MSC - drag-n-drop programming flash memory
* CDC - virtual com port for log, trace and terminal emulation
* CMSIS-DAPv2 WinUSB (driver-less vendor-specific bulk) - CMSIS compliant debug channel
* CMSIS-DAPv1 HID - CMSIS compliant debug channel
* WebUSB CMSIS-DAP HID - CMSIS compliant debug channel

More features are planned and will show up gradually over time. The project is constantly under heavy development by Arm, its partners, numerous hardware vendors and the open-source community around the world. DAPLink has superseded the mbed CMSIS-DAP interface firmware project. You are free to use and contribute. Enjoy!

For more detailed usability information [see the users guide.](docs/USERS-GUIDE.md)

## Compatibility
There are many ARM microcontroller-based Hardware Interface Circuits (HICs) that DAPLink interface firmware runs on. These can be found as standalone boards (debugger) or as part of a development kit. Some branded circuits that are known to be IO compatible are:

* [Maxim Integrated MAX32625PICO based on MAX32625](https://www.maximintegrated.com/en/products/microcontrollers/MAX32625PICO.html)
* Nuvoton Nu-Link2-Me based on M48SSIDAE
* [NXP LPC-Link2 based on LPC11U35 or LPC4322](https://www.nxp.com/support/developer-resources/hardware-development-tools/lpcxpresso-boards:LPCXPRESSO-BOARDS)
* [NXP MCU-LINK on LPC55xx](https://www.nxp.com/design/microcontrollers-developer-resources/mcu-link-debug-probe:MCU-LINK)
* [NXP OpenSDA based on K20, K22, KL26Z and KL27Z](http://www.nxp.com/products/software-and-tools/run-time-software/kinetis-software-and-tools/ides-for-kinetis-mcus/opensda-serial-and-debug-adapter:OPENSDA)
* [Segger J-Link OB based on Atmel SAM3U](https://www.segger.com/products/debug-probes/j-link/models/j-link-ob/)
* [STMicroelectronics ST-LINK/V2 (on NUCLEO boards) based on STM32F103CB](https://www.st.com/en/evaluation-tools/stm32-nucleo-boards.html)

You can find more information on the microcontrollers supported [here](docs/hic/README.md).

## Releases
There are many board builds (board = HIC + target combination) created from this repository. Quarterly releases will contain new features and bugfixes. Standalone bugfixes are released once reported, verified and fixed. Both quarterly and bugfix releases will result in the build number being incremented. Many development kits and products ship with DAPLink interface firmware or are capable of running DAPLink firmware. **[The current release builds and instructions for updating DAPLink interface firmware is hosted on the DAPLink release site.](https://daplink.io/)** Release notes and previous release builds can be found under GitHub releases.

## Contribute

We welcome contributions to DAPLink in any area. Look for an interesting feature or defect
[under issues](https://github.com/ARMmbed/DAPLink/issues). Start a new thread [in the
discussions](https://github.com/ARMmbed/DAPLink/discussions) or
[in Slack](https://join.slack.com/t/pyocd/shared_invite/zt-zqjv6zr5-ZfGAXl_mFCGGmFlB_8riHA)
to engage with the developers and maintainers.

Please see the [contribution guidelines](CONTRIBUTING.md) for detailed requirements for
contributions.

To report bugs, please [create an issue](https://github.com/ARMmbed/DAPLink/issues/new) in the
GitHub project.

## Develop
Information for setting up a development environment, running the tests or creating a release build [can be found in the developers guide.](docs/DEVELOPERS-GUIDE.md)

## License
DAPLink is licensed with the permissive Apache 2.0 license. See the [LICENSE](LICENSE) file for the
full text of the license.

Copyright © 2006-2023 Arm Ltd
