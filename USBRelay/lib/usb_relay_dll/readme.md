## How to use in Vistual Studio.
1. Creat a new C++ Porject
2. In stdfax.h file, add this code:
   #include "usb_relay_device.h"
   #pragma comment(lib, "usb_relay_device.lib")

3. Copy the usb_relay_device.dll file into the dir that generate your applicaiton. Like the Release or Debug dir

## The way to use funcation:
1. call usb_relay_init() to init the lib.
2. call usb_relay_device_enumerate() to get all the device pluged into pc
3. call usb_relay_device_open() open the device you need
4. other operation funcation:
call sb_relay_device_open_one_relay_channel() to open one way relay
call usb_relay_device_open_all_relay_channel() to open all relays
call usb_relay_device_close_one_relay_channel()to close one way relay
call usb_relay_device_close_all_relay_channel()to close all relays