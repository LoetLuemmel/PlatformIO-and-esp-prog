# PlatformIO-and-esp-prog
```Apple Mac Setup``` for ESP32 development on PlatformIO and using an ESP Debug Board with ESP-WROOM-32<br>
<br>
The following two lines of code (one line is just a comment) in <b>platformio.ini</b> will make the big change:

<code>
; upload via esp-prog JTAG
upload_protocol = esp-prog
upload_port = /dev/cu.usbserial-3400
</code><br>
<br>
You find a sample here in the Test3 folder along with the classic blink Arduino asample.<br>

# Connection of the ESP-WROOM-32 module

TDI - IO12 - P4L (4th port from botton on the "L" left side)<br>
TMS - IO14 - P5L<br>
TCK - IO13 - P3L<br>
TDO - IO15 - P3R<br>

# Kudos

Thanks to the following sources with helpful information about PlatformIO and debugging:<br>
<br>
https://dialedin.com.au/blog/esp32-jtag-debugging-esp-prog<br>
https://www.haraldkreuzer.net/en/news/esp32-jtag-debugging-platformio-and-only-one-usb-connection<br>
<br>
...and not to forget Rui and Sara from https://randomnerdtutorials.com where I got inspired to start again with embedded technology.<br>
