# Quantum-leap-
# Library Management System

This is a simple flowchart-based description of a **Library Management System** for both librarians and patrons.

---

## **System Workflow**

### **1. Start**
- The system begins by displaying the **Main Menu**.

### **2. Main Menu Options**
The main menu provides the following options:
- **0**: Register as Librarian
- **1**: Login as Librarian
- **2**: Register as Patron
- **3**: Login as Patron
- **4**: Cancel Membership
- **5**: Exit

---

### **3. Register as Librarian**
- If the user selects **0**, they are prompted to:
  - **Create a password and security question**.
  - **Enter their details** (e.g., name, contact information).
- After registration, the user is redirected to the **Main Menu**.

---

### **4. Login as Librarian**
- If the user selects **1**, they are prompted to:
  - Enter their **librarian credentials**.
- The system checks if the **password is correct**:
  - **If yes**: The user is granted access to the **Librarian Section**.
  - **If no**: The system displays an **"Incorrect password"** message and returns to the **Main Menu**.

#### **Librarian Section**
- The librarian can:
  - **Manage books** (add, remove, update).
  - **Manage patrons** (add, remove, update).
- After completing their tasks, the system **ends the session**.

---

### **5. Register as Patron**
- If the user selects **2**, they are prompted to:
  - **Enter their details** (e.g., name, contact information, address).
- After registration, the user is redirected to the **Main Menu**.

---

### **6. Login as Patron**
- If the user selects **3**, they are prompted to:
  - Enter their **patron ID**.
- The system checks if the **patron ID exists**:
  - **If yes**: The user is granted access to the **Patron Menu**.
  - **If no**: The system displays a **"Patron not found"** message and returns to the **Main Menu**.

#### **Patron Menu**
- The patron can:
  - **Borrow books**.
  - **Return books**.
- After completing their tasks, the system **ends the session**.

---

### **7. Cancel Membership**
- If the user selects **4**, their membership is canceled, and the system **ends the session**.

---

### **8. Exit**
- If the user selects **5**, the system **ends**.

---

## **Flowchart Summary**

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
