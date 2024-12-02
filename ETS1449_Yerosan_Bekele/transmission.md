# Problem Analysis
+ **Input** - file size
+ **Output** - transmission time in days, hours, minutes, seconds
+ **Operation** -\
          - read input, file_size\
          - calculate the transmission_time\
          - convert the transmission time into days, hours, minutes and seconds\
          - display the days, hours, minutes and seconds
# Algorithm Design
## Pseudocode
+ *step 1*: start
+ *step 2*: read input, `file_size` and make `transmission_rate = 960` constant
+ *step 3*: convert the `file_size` in MB into file size in bytes as ```file_size *= 1048576```
+ *step 4*: calculate `transmission_time` as ```transmission_time = file_size / transmission_rate```
+ *step 5*: decompose `transmission_time` in to days, hours, minutes and seconds:\
      - 5.1: `days= transmission_time/86400`\
      - 5.2: `transmission_time %= 86400`\
      - 5.3: `hours= transmission_time/3600`\
      - 5.4: `transmission_time %= 3600`\
      - 5.4: `minutes= transmission_time/60`\
      - 5.5: `transmission_time %= 60`\
      - 5.6: `seconds = transmission_time`\
step 6: print days,hours,minutes and seconds\
step 7: stop

## Flowchart

![titled](https://github.com/user-attachments/assets/1cb80858-cadc-42aa-b7f3-9f202daa184b)

