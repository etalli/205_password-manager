# password-manager, 205

Oct 19, 2024

This tool simplifies password entry. It acts as a USB keyboard, sending a pre-programmed password when its button is pressed.

![alt text](image.png)

## Here's how it works

* **Functionality:**  Emulates a USB keyboard to automatically type a stored password.
* **Hardware:**  Uses a push-button switch connected to specific pins on a microcontroller board.  This board is called KB2040, which is RP2040 baesd.
    * **Pin Configuration:** By default, the push-button connects to pins GP9 and GP11. You can customize these pins if needed.
    * **Push switch:** Recommended to use a push switch for mouse click, that is 2.54mm pitch, it is fit into the pins of kb2040 board.
* **Firmware:**  Based on the QMK firmware, based on `qmk_firmware/keyboards/handwired/onekey/kb2040/`. This means it's highly customizable.

This tool is ideal for:

* **Securely storing and quickly entering complex passwords.**
* **Automating logins for frequently used accounts.**
* **Simplifying password entry on devices with limited input methods.**

## How to use

1. Connect the device to your computer's USB port.
2. Press the button to automatically type the stored password.

