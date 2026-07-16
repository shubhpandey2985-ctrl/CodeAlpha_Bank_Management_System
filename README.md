# 🏦 Bank Management System

A **menu-driven Bank Management System** developed in **C** as part of the **CodeAlpha C Programming Internship**. This project demonstrates the implementation of **bank account management** using **Structures**, **File Handling**, and **Modular Programming**. It allows users to create accounts, manage transactions, and securely store account information in binary files for persistent data storage.

---

# 📌 Features

- 🆕 Create Bank Account
- 💰 Deposit Money
- 💸 Withdraw Money
- 📊 Balance Enquiry
- 👤 View Account Details
- ✏️ Update Account Information
- 🗑️ Delete Account
- 💾 Persistent Storage using Binary File Handling
- 🧩 Modular Project Structure
- 📋 Menu-Driven Interface

---

# 📋 Main Menu

```text
========================================
        BANK MANAGEMENT SYSTEM
========================================
1. Create Account
2. Deposit Money
3. Withdraw Money
4. Balance Enquiry
5. View Account Details
6. Update Account
7. Delete Account
8. Exit
========================================
Enter your choice:
```

---

# 📖 Program Flow (Flowchart)

```text
                     START
                        │
                        ▼
              Display Main Menu
                        │
                        ▼
               Read User Choice
                        │
     ┌──────────────────┼──────────────────┐
     │                  │                  │
     ▼                  ▼                  ▼
Create Account      Deposit Money    Withdraw Money
     │                  │                  │
     ├──────────────────┼──────────────────┤
     ▼                  ▼                  ▼
Balance Enquiry   View Account      Update Account
     │                  │                  │
     ├──────────────────┼──────────────────┤
     ▼                  ▼                  ▼
 Delete Account       Exit Program
                        │
                        ▼
              Perform Selected Action
                        │
                        ▼
               Save Changes to File
                        │
                        ▼
              Return to Main Menu
                        │
                   Exit Selected?
                   │           │
                  No          Yes
                   │           │
                   └───────────▼
                        END
```

---

# 📂 Project Structure

```text
CodeAlpha_Bank_Management_System/
│
├── src/
│   ├── main.c
│   ├── account.c
│   ├── transaction.c
│   ├── file_handler.c
│   └── utils.c
│
├── include/
│   ├── account.h
│   ├── transaction.h
│   ├── file_handler.h
│   └── utils.h
│
├── data/
│   └── accounts.dat
│
├── screenshots/
│   ├── main-menu.png
│   ├── create-account.png
│   ├── deposit.png
│   ├── withdraw.png
│   ├── balance-enquiry.png
│   ├── view-account.png
│   ├── update-account.png
│   └── delete-account.png
│
├── .gitignore
├── LICENSE
├── README.md
└── Makefile (Optional)
```

---

# 🛠 Technologies Used

- C Programming Language
- GCC Compiler
- Standard C Library
- Binary File Handling

---

# 📚 Concepts Used

- Structures (`struct`)
- Functions
- Header Files
- Modular Programming
- File Handling (`fopen`, `fread`, `fwrite`, `fclose`)
- Binary Files
- CRUD Operations
- Input Validation
- Conditional Statements
- Loops
- Menu-Driven Programming

---

# 🎯 What I Learned

This project helped me understand:

- Designing modular applications in C.
- Managing structured data using `struct`.
- Performing banking transactions through file operations.
- Reading, writing, updating, and deleting records from binary files.
- Organizing source code into multiple source and header files.
- Implementing reusable and maintainable code.
- Applying input validation and error handling in real-world applications.

---

# 📄 Account Information

Each account contains the following information:

| Field | Type |
|------|------|
| Account Number | Integer |
| Holder Name | Character Array |
| Mobile Number | Character Array |
| Email Address | Character Array |
| Account Type | Character Array |
| Balance | Float |

---

# 💾 Data Storage

All account records are stored in:

```text
data/accounts.dat
```

The file is automatically created when the first account is added.

---

# ⚙️ Requirements

- GCC Compiler
- Windows / Linux / macOS
- Terminal or Command Prompt

---

# 🚀 How to Compile

### Windows / Linux / macOS

```bash
gcc src/*.c -Iinclude -o bank_management.exe
```

---

# ▶️ How to Run

### Windows

```bash
bank_management.exe
```

or

```bash
.\bank_management.exe
```

### Linux / macOS

```bash
./bank_management.exe
```

---

# 💻 Sample Workflow

```text
========================================
        BANK MANAGEMENT SYSTEM
========================================
1. Create Account
2. Deposit Money
3. Withdraw Money
4. Balance Enquiry
5. View Account Details
6. Update Account
7. Delete Account
8. Exit
========================================

Enter your choice: 1

Account Number : 1001
Holder Name    : John Doe
Mobile Number  : 9876543210
Email Address  : john@example.com
Account Type   : Savings
Initial Deposit: 5000

Account created successfully.
```

---

# ✅ Project Requirements

This project fulfills the following internship requirements:

- ✔ Menu-Driven Banking System
- ✔ Create Account
- ✔ Deposit Money
- ✔ Withdraw Money
- ✔ Balance Enquiry
- ✔ View Account Details
- ✔ Update Account
- ✔ Delete Account
- ✔ Structures
- ✔ File Handling
- ✔ Modular Programming
- ✔ Persistent Data Storage

---

# 🔮 Future Improvements

- User Login & Authentication
- PIN-Based Transactions
- Transaction History
- Fund Transfer Between Accounts
- Interest Calculation
- Mini Statement
- Account Lock/Unlock
- Password Encryption
- Export Data to CSV
- Colored Console Interface

---

# 📸 Screenshots

Store screenshots in the `screenshots/` folder.

Suggested screenshots:

- Main Menu
- Create Account
- Deposit Money
- Withdraw Money
- Balance Enquiry
- View Account Details
- Update Account
- Delete Account

---

# 📜 License

This project is licensed under the **MIT License**.

---

# 👨‍💻 Author

Developed as part of the **CodeAlpha C Programming Internship**.

If you found this project useful, consider giving it a ⭐ on GitHub!
