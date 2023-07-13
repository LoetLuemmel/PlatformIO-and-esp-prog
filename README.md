# PlatformIO-and-esp-prog
```Apple Mac Setup``` for ESP32 development on PlatformIO and using an ESP Debug Board with ESP-WROOM-32<br>
<br>
The following two lines of code (one line is just a comment) in <b>platformio.ini</b> will make the big change:

<code>
;upload via esp-prog JTAG
upload_protocol = esp-prog
upload_port = /dev/cu.usbserial-3400
</code><br>
<br>
You find a sample here in the Test3 folder along with the classic blink Arduino asample.<br>

# Q&A

Q: Do I need to switch away from the Arduino IDE and learn the Espressiv IDF?<br>
A: Nope, you continue programming the used way like with the Arduino IDE. You will make use of the PIO (PlatformIO) integrated development environment and you can still use for instance the Sketch samples.<br>
<br>
Q: I do not want to follow the simplified Arduino programming paradighm, but programming classic C/C++ style instead.<br>
A: The choice is up to you! I was surprised the *.INO sketches are still possible to use, by simply adding the '#include arduino.h' statement in the header.<br>
<br>
Q: How long does it take for an average programmer to switch from the Arduino IDE to PIO?<br>
A: I'd say a day. - The only 'complicated' thing for me, was to find a way looking at the Serial Monitor. But even that unix device path I could simply copy and being guided by the PIO plugin. For Windows users it is just a matter of naming the relevant Com-Port mentioned by the Windows Device Manager.<br>
<br>
Q: How many cables do I need to connect the ESP Debugging Board and the ESP32 target?<br>
A: One cable only for programming and debugging.<br>
If you want to look a the serial monitor (appreciated), a 2nd USB cable from your cross compile machine to the ESP32 board will be required.<br>
<br>

# Connection of the ESP-WROOM-32 module

<p>Power and Ground connections are obvious, but pay attention on the voltage setting of the ESP-PROG board.
I decided to power the ESP-VROOM-32 board with 5 volts on VIN. The voltage regulator will be active and also 5V sensors could be used with voltage dividers to protect ESP input gates.</p>

<table>
  <tr><b>JTAG Connections</b></tr>
  <tr><th>ESP-Prog</th><th>ESP-WROOM-32</th><th>Location</th></tr>
  <tr><td>TDI</td><td>IO12</td><td>P4L (4th port from botton on the "L" left side)</td></tr>
  <tr><td>TMS</td><td>IO14</td><td>P5L</td></tr>
  <tr><td>TCK</td><td>IO13</td><td>P3L</td></tr>
  <tr><td>TDO</td><td>IO15</td><td>P3R</td></tr>
  <tr><td>VJTAG</td><td>VIN</td><td>P1L</td></tr>
  <tr><td>GMD</td><td>GND</td><td>P2L</td></tr>
</table>

# Kudos

Thanks to the following sources with helpful information about PlatformIO and debugging:<br>
<br>
Dialedin from Australia: https://dialedin.com.au/blog/esp32-jtag-debugging-esp-prog<br>
Harald Kreuzer from Vienna: https://www.haraldkreuzer.net/en/news/esp32-jtag-debugging-platformio-and-only-one-usb-connection<br>
<br>
...and not to forget Rui and Sara from https://randomnerdtutorials.com where I got inspired to start again with embedded technology.<br>
