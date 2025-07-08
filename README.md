# Random Password Generator with File Storage

A simple C++ console application that generates secure random passwords and stores them locally with platform names.

## 🔐 Features
- Generates strong passwords with letters, digits, and symbols
- Custom password length input
- Stores each password with its related platform (e.g., Gmail, Facebook)
- Saves to a local file: `passwords.txt`

## 🛠️ Technologies Used
- C++
- `cstdlib`, `ctime` for randomness
- `fstream` for file I/O

## 📝 Example

```text
Enter the length of the password: 12
Generated Password => fA#93jd!KzXQ
Enter platform name: Gmail
Password saved successfully to 'passwords.txt'
