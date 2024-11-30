# Problem Analysis
+ **Input** - file size
+ **Output** - transmission time
+ **Operation** -\
          - read the input, file size\
          - calculate the transmission time\
          - convert the transmission time into days, hours and minutes\
          - display the transmission time
# Algorithm Design
## Pseudocode
+ *step 1*: start
+ *step 2*: read the input, file size
+ *step 3*: convert the file size in mb into file size in bytes as,
  ```
  file_size*=1048576
  ```
+ *step 4*: calculate transmission time as,
  ```
  time = file_size/transmission_speed(960bytes/second)
  ```
+ *step 5*: convert time(s) in to hours,days and minutes :\
      - 5.1: `days= time/86400`\
      - 5.2: `hours= time/3600`\
      - 5.3 `minutes= time/60`\
step 6: print days,hours,minutes and time\
step 7: stop
## Flow Chart

```mermaid
graph TD;
    A([start]) --> B[//input: Read file_size/];
    B -->C[file_size*=1048576];
    C -->D[time=file_size/transmission_speed];
    D--> E[days=time/86400
          hours=time/3600
          minutes=time/60];
    E --> F[Print: time, days, hours, minutes];
    F --> G([End])











