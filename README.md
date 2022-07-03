# pigtail_splitter
This Repository consist of the CODEs used in testing of the different sequence of operation with the Help of modules such as Arduino and ESP32
-The Test codes are used to deliver data to the input side of the `PIGTAIL PCB`- please refer to the design files- with the help of the Modules or othe rsources
-The Pigtail then performs the bit splitting operation according to the constants provided in the code. the constants
                * strip_1 and
                * strip_2
provide the necessary switching such that the bytes are split according to the user needs.

Formula for obtaining the valures for `strip_1` and `strio_2` is
              1. detemine number of u want to be shown on strip 1 and 2
              2. then take strip_1 = Bits(of interest) * 1000000/800000
              3. this gives u the answer for which to assign the srip_1 .thus is the value in microsecond for which the splitter will use to split data between the two lines
              4. Do the same for strip_2
- MPLABX-IDE can b e used to build and test the code and its Proramming interface `IPE` can be used to load the firmware to the PCB
- These pins are udes for programming of the PCB
![image](https://user-images.githubusercontent.com/85989401/176424291-09e38db1-b8ec-422d-bc08-a35bc0a201d8.png)

![image](https://user-images.githubusercontent.com/85989401/176424731-474c1b83-21a9-46e9-b498-9977391d3971.png)
- Some soldering will be needed

## Requirements
- Set up the IDE, application you will need to download the Arduino ide here if you don't have it already installed for your distributions. This is for use with the testcodes 
- Instal the board support package for ESP32 by goin to Tools > Board:xx > Board Manager. In the search bar type ESP32 and select install ESP32 by Espressid Systems. 3) Now select Devkit_V1 from Tools > Board:xx > ESP32 Arduino > Devkit_V1 if there is need to use the ESP32 dev modules

- Download and Setup MPLabX- IDE and IPE with XC8 complier for compling and generating Hex files for 8bit PICs fro programming the PIC16f1823 on the PCB. [Tutorial](https://www.youtube.com/watch?v=RCqM1cpGo_I&t=2s)

## Download the files
Download all the files on the Code🔽 on this platform, In your downloads you will get the a folder 📁 pigtail_splitter and it will have:
📁 neopixel_testcodes folder - with all the codes used to run the Neopixels and
📁 splitter_v1.X - has the necessary code to control the switching of the signal with pic16f1823
- you can change the constants `Strip_1` and `strip_2` to as described above to achieve different outcomes

# THANK YOU.
