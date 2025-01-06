# Quantum-leap-
Quantum leap team repo
\Yoseph Asrat Kebede 1535/16
## Flowchart
```mermaid
graph TD

    A([Start]) --> B[/Show Menu/]
    B --> |0| C[/Register as Librarian/]
    C --> D[/Create password and security question/]
    D --> E[Enter details]
    B --> |1| F[/Login Librarian/]
    F --> G{Password correct?}
    G --> |Yes| H[/Librarian Section/]
    H --> I[Option to manage books and patrons]
    B --> |2| J[/Register Patron/]
    J --> K[Enter details]
    B --> |3| L[/Login Patron/]
    L --> M{Patron ID exists?}
    M --> |Yes| N[/Patron Menu/]
    N --> O[Option to borrow/return books]
    M --> |No| P[/Patron not found/]
    B --> |4| Q[/Cancel Membership/]
    B --> |5| R([Exit/End])
    G --> |No| S[/Incorrect password/]
    I --> T([End])
    O --> T
    P --> T
    S --> T
    Q --> T
    R --> T
