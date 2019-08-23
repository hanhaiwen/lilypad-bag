# Lilypad-Bag with temperature control
A RGB-LED on the outside indicates the temperature inside. Based on the Lilypad Arduino SimpleSnap. Below 0°C the LED lights up in blue. Up to 10°C it turns green, then orange up to 20°C and finally red. The Arduino sketch includes serial connection output for easy debugging.

![Bag with LED on red](/Pictures/Lilypad-Bag.jpeg)

## Components used
* [Lilypad Arduino SimpleSnap](https://www.arduino.cc/en/Main.ArduinoLilyPadSimpleSnap)
* [Lilypad Temperature Sensor](https://www.sparkfun.com/products/8777)
* [LilyPad Tri-Color LED](https://www.sparkfun.com/products/8467)
* [FTDI Cable](https://www.sparkfun.com/products/9718) – to upload the code
* [Alligator Clips](https://www.sparkfun.com/products/12978) – just for testing
* Conductive Thread
* Needle
* Clear nail polish
* Hot glue (or [LED diffusor of choice](https://www.instructables.com/id/13-Ideas-for-Diffusing-LEDs/))
* [Arduino Software (or web editor)](https://www.arduino.cc/en/main/software)

## Guides for beginners
* [Getting Started with LilyPad](https://learn.sparkfun.com/tutorials/getting-started-with-lilypad)
* [LilyPad Temperature Sensor Hookup Guide](https://learn.sparkfun.com/tutorials/lilypad-temperature-sensor-hookup-guide)
* [LilyPad Tri-Color LED Hookup Guide](https://learn.sparkfun.com/tutorials/lilypad-tri-color-led-hookup-guide) – please note that the example code does not match the Lilypad LED pins, green and blue are mixed up. Use 11 for red, 10 for blue, 9 for green.

## Further Notes
* I used the Lilypad SimpleSnap because the microcontroller board is detachable, so I can still wash the bag. It also features a switch and a rechargeable battery, otherwise you would need additional components for the power supply, like a [Coin Cell Battery Holder](https://www.sparkfun.com/products/13883) and a coin cell.
* The Lilypad SimpleSnap requires the FTDI cable instead of a regular USB cable. You might need to [install the FTDI driver](https://learn.sparkfun.com/tutorials/how-to-install-ftdi-drivers/all), then it's pretty easy to use: There are little labels on the Lilypad (B for black and G for green) to help you connect it with the right orientation.
* The temperature board is sewed on with the actual sensor facing the fabric because I don't want to damage it by accident. Of course, it's less acurate this way.

![Electronics on the inside with Nail polish](/Pictures/Nail-polish.jpeg)

* I [started this project five years ago](https://stratum0.org/wiki/Leuchtkram) and didn't get around to finish it for a long time. Due to chronic illness I had little energy and my first idea was way too complicated and useless. Then I finally sat down, reduced it to the mere basics and completed it in bits:
  * Test the single components with the example code from the tutorials.
  * Map out all the components on paper.
  * Sketch the possible connections, based on the tutorials. Remember: the thread cannot cross itself.
  * Put together a basic sketch, using the serial connection for debugging.
  * Wire the components with alligator clips.
  * Test the programming sketch.
  * Debug, debug, debug – I realized that the LED example code didn't match the colours I got.
  * Sew the components onto the bag/shirt/whatever. Debug again if necessary – I accidentally sewed the + pin of the Temperature sensor to pin 5.
  * Insulate the exposed thread with nail polish and secure knots.
  * Use hot glue as a diffusor on the LED.
  * ENJOY!
