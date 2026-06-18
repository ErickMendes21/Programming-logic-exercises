# 💻 Beecrowd Programming Challenges

This repository contains my solutions to programming challenges from the **Beecrowd** platform, implemented in both **C++** and **JavaScript**.

The goal is to improve my problem-solving skills, strengthen algorithmic thinking, and become a better software engineer by solving challenges from different categories and difficulty levels.

---

## 🎯 Goals

The main objectives of this repository are:

- 🧠 Practice problem-solving with C++ and JavaScript
- ⚙️ Strengthen programming logic and algorithm fundamentals
- 🚀 Improve data structures and algorithm knowledge
- 📚 Track my learning progress through Beecrowd challenges

---

## 🛠️ Technologies

Languages used in this repository:

- C++
- JavaScript (Node.js)

---

## 📂 Repository Structure

The solutions are organized by language and Beecrowd category.

### Example

```text
C++
│
├── BEGINNER/
    ├── number - name.cpp
    ...
├── AD-HOC/
    ├── number - name.cpp
    ...
├── DATA STRUCTURES AND LIBRARIES/
    ├── number - name.cpp
    ...
└── ...

JavaScript
│
└── BEGINNER/
    ├── number - name.js
    ├── number - name.js
    └── ...
└── ...
```

Each solution contains:

- ✔️ Complete solution
- ✔️ Clean and readable code
- ✔️ Problem ID in the filename
- ✔️ Organized by category

---

# ▶️ Running JavaScript Solutions Locally

Beecrowd reads the input from **`/dev/stdin`**, but this path doesn't work when running the code directly on Windows.

To test the solutions locally:

### 1. Create a file named `stdin`

The file must be in the **same folder** as the JavaScript solution.

Example:

```text
BEGINNER/
│
├── number - name.js
└── stdin
```

The `stdin` file should contain exactly the input provided by the Beecrowd problem.

### 2. Change the input line

When testing locally, replace:

```javascript
var input = require('fs').readFileSync('/dev/stdin', 'utf8');
```

with:

```javascript
var input = require('fs').readFileSync('stdin', 'utf8');
```

This tells Node.js to read the input from the local `stdin` file.

### 3. Before submitting to Beecrowd

**Don't forget to change the line back** to:

```javascript
var input = require('fs').readFileSync('/dev/stdin', 'utf8');
```

Otherwise, the solution will not work on the Beecrowd online judge.

> **Summary**
>
> **Local execution**
>
> ```javascript
> var input = require('fs').readFileSync('stdin', 'utf8');
> ```
>
> **Beecrowd submission**
>
> ```javascript
> var input = require('fs').readFileSync('/dev/stdin', 'utf8');
> ```

---

## 📈 Progress

I will continuously update this repository as I solve more Beecrowd problems and improve my programming skills.

---

## 👨‍💻 Author

**Erick Mendes Rocha**  
Computer Engineering Student passionate about software development, algorithms, and technology.

---

## 🔗 Beecrowd Profile

https://judge.beecrowd.com/pt/profile/1036040

---

## 📄 License

This repository is intended for educational purposes and personal learning.

---

⭐ If you find this repository useful, feel free to leave a star!
