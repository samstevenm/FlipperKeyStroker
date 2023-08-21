#pragma once

#include <gui/view.h>

typedef struct UsbHidstroker UsbHidstroker;

UsbHidstroker* usb_hid_stroker_alloc();

void usb_hid_stroker_free(UsbHidstroker* usb_hid_stroker);

View* usb_hid_stroker_get_view(UsbHidstroker* usb_hid_stroker);

void usb_hid_stroker_set_connected_status(UsbHidstroker* usb_hid_stroker, bool connected);
