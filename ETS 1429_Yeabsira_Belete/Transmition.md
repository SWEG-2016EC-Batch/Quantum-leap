# Algorithm and Flowchart for C++ Code

## Algorithm

1. **Start**: Begin the program execution.
2. **Input unit type**: Prompt the user to select a unit type for file size (TeraBytes, GigaBytes, MegaBytes, KiloBytes, or Bytes).
3. **Input file size**: Prompt the user to enter the size of the file in the chosen unit.
4. **Unit conversion**:
   - Use a `switch` statement to assign the appropriate conversion multiplier based on the unit type.
   - If the unit type is invalid, display an error message and terminate the program.
5. **Calculate total transfer time**:
   - Convert the file size into bytes using the multiplier.
   - Divide the total bytes by 960 (bytes per second) to calculate the time in seconds.
6. **Break down time**:
   - Convert the total time (in seconds) into years, months, weeks, days, hours, minutes, and remaining seconds.
7. **Output result**:
   - Display the total transfer time in terms of years, months, weeks, days, hours, minutes, and seconds.
8. **End**: Terminate the program.

---

## Flowchart

```mermaid
---
config:
  layout: TD
  look: default
  theme: neutral
---
graph TD;
    A([Start]) --> b{Input unit of data size};
    b --> c[/t for unit = TeraBytes/];
    b --> d[/g for unit = GigaBytes/];
    b --> e[/m for unit = MegaBytes/];
    b --> f[/k for unit = KiloBytes/];
    b --> g[/b for unit = Bytes/];
    d --> h["Input data size"];
    c --> h;
    e --> h;
    f --> h;
    g --> h;
    h --> i{Is unit valid?};
    i --> |"No"|E[/Display 'Invalid input. Check capslock'/] --> F[End]
    i --> |"Yes"|G["Convert size to Bytes based on unit"]
    G --> H["Calculate total time: (Size in Bytes / 960)"]
    H --> I["Breakdown time: years = time / 31536000"]
    I --> J["time %= 31536000"]
    J --> K["months = time / 2628288 (average seconds per month)"]
    K --> L["time %= 2628288"]
    L --> M["weeks = time / 604800"]
    M --> N["time %= 604800"]
    N --> O["days = time / 86400"]
    O --> P["time %= 86400"]
    P --> Q["hours = time / 3600"]
    Q --> R["time %= 3600"]
    R --> S["minutes = time / 60"]
    S --> T["seconds = time"]
    T --> U[/Display the breakdown: years, months, weeks, days, hours, minutes, and seconds/]
    U --> F[End]
