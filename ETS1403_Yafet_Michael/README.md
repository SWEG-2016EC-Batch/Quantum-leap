flowchart TD
    A([Start]) --> B[/Input Height/]
    B --> C{Height <= 0?}
    C -->|Yes| D[/Display Invalid Input/]
    D --> B
    C -->|No| E[/Input Weight/]
    E --> F(Calculate BMI)
    F --> G{BMI > 25?}
    G -->|Yes| H[/Display Overweight/]
    G -->|No| I{BMI > 18.5?}
    I -->|Yes| J[/Display Normal Weight/]
    I -->|No| K[/Display Underweight/]
    H --> L[/Ask to Continue?/]
    J --> L
    K --> L
    L --> M{Choice == 'y'?}
    M -->|Yes| B
    M -->|No| N([End])
