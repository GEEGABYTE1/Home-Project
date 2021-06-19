# Home 🏡


Mini Home Project made with Arduino. This machine automates tasks regarding temperature and humidity. 

![IMG_1673](https://user-images.githubusercontent.com/68164588/122654334-883c3700-d118-11eb-8e38-ff50395c37a3.jpg)

# Temperature Sensors 🌡

With the humidity sensor and the LM35 sensor, the arduino compares temperatures every second and does the corresponding tasks. If the temperature is less than 28 degrees Celsius, the green LED will turn on, if the temperature is between the 28 and 30 degrees, the blue LED will turn on, and last but not least, when the temperature exceeds 30 degrees, the yellow LED will turn on. 

![IMG_1670](https://user-images.githubusercontent.com/68164588/122654304-6cd12c00-d118-11eb-8812-04a7fa16d3b1.jpg)


When the temperature exceeds 30 degrees, the Fan (DC Motor) will turn on, and will be turned off automatically when the temperature decreases under 30 degrees Celsius. Users can also turn the fan off on their command by pressing `2` on the IR Remote sensor.

Room Temperatures can be seen manually by command pressing `#` on the IR Remote.

![IMG_1669](https://user-images.githubusercontent.com/68164588/122653819-51185680-d115-11eb-8c5e-e88e4f1478bb.jpg)


# Right from your hand 👋🏼

The IR remote has also been integrated to automate certain tasks. Like stated before, if the users would like to turn on the fan by their command, they can press `1` to turn it on and `2` to turn it off. 

If users want a certain constant light source, the IR remote has the ability to turn on the RGB LED and choose a specific colour. 
  - `Top arrow`: Turns the RGB on with the colour green
  - `Left arrow`: Turns the RGB on with the colour blue
  - `Right arrow`: Turns the RGB on with the colour red
  - `Bottom arrow`: Turns the RGB off completely. 
![IMG_1671](https://user-images.githubusercontent.com/68164588/122654325-7bb7de80-d118-11eb-9f76-3a336ee79afa.jpg)


Users can also see the amount of vapour content they have in their current air by pressing `*` on the IR Remote sensor.

![IMG_1674](https://user-images.githubusercontent.com/68164588/122654010-7f4a6600-d116-11eb-93be-1f87a5082b72.jpg)


The last thing the users can do with the remote sensor currently is to prin the current temperature on LCD Display. Users can find out their room temperature with high degree of accuracy by pressing `#` on the IR remote. 
![IMG_1675](https://user-images.githubusercontent.com/68164588/122654203-c8e78080-d117-11eb-9fbe-ef14edc68380.jpg)


# More Information 🤖

All the results of the actions made using the IR Remote (for ex, pressing `#`) will be displayed on the LCD. For example, if you pressed `1` on the remote to turn the fan on, the LCD will display `"The Fan is On."` Similarly, if you turn a certain colour of the RGB with the Remote, the LCD will display that `"The colour LED is on."` 

The temperature sensors may not be as accurate in terms of the full temperature. These sensors will mostly pickup the temperature near the machine itself. Therefore, users may get an inflated temperature due the temperature of the breadboard at times.

The IR Remote does have a slight delay, thus, spamming a button will not work. 


