Here’s a clean and complete **`README.md`** file for your C password hasher project using bcrypt:

---

```markdown
# 🔐 C Password Hasher using bcrypt

A simple C program that securely hashes and verifies passwords using the bcrypt algorithm. Ideal for learning, demonstrations, or building authentication systems in C.

---

## 📌 Features

- 🔒 Password hashing with bcrypt
- ✅ Password verification
- 🧱 Minimal and clear C code
- 🎓 Beginner-friendly for C learners

---

## 🧠 How It Works

This program uses `bcrypt_hashpw()` to hash a password with a randomly generated salt and `bcrypt_checkpw()` to verify passwords.

### Example Output:

```

Hashed Password: \$2b\$12\$...
Password is correct!

```

---

## 📂 Project Files

```

.
├── main.c         # Contains password hashing and verification logic
├── bcrypt.h       # Bcrypt library (you must install or include)
└── README.md      # Project documentation

````

---

## ⚙️ Installation & Compilation

### ✅ Prerequisites

- A C compiler (e.g., GCC)
- A bcrypt library for C (e.g., [libbcrypt](https://github.com/rg3/bcrypt))

### 🔧 Compile

```bash
gcc main.c -o password_hasher -lbcrypt
````

> Make sure the bcrypt library is correctly installed and linked.

---

## 🚀 Run the Program

```bash
./password_hasher
```

---

## 🛠 Code Overview

```c
const char *password = "my_secure_password";
char hashed_password[61];

hash_password(password, hashed_password);
printf("Hashed Password: %s\n", hashed_password);

if (verify_password(password, hashed_password)) {
    printf("Password is correct!\n");
} else {
    printf("Password is incorrect.\n");
}
```

---

## 🐞 Fix Notes

A few fixes to make your code run correctly:

* Change `#define HASH_LEN 60 ;` to `#define HASH_LEN 61`
* Remove extra `s` after `}` in `hash_password()`

---

## 🧑‍💻 Author

Created by \ Farhan  – feel free to contribute!

---

## 📄 License

This project is open source and available under the [MIT License](LICENSE).

```

---

Let me know if you'd like help creating a `Makefile`, `.gitignore`, or `LICENSE` file, or instructions to **upload it to GitHub using Git Bash**.
```
