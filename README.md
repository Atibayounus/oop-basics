# 🧩 OOP Basics in C++

A beginner-friendly collection of **Object-Oriented Programming (OOP) concepts implemented in C++**. This repository contains simple examples and practice programs designed to build a strong foundation in OOP and understand how real-world problems can be modeled using classes and objects.

🔗 **Repository:** https://github.com/Atibayounus/oop-basics.git

---

## 📚 About the Project

Object-Oriented Programming is a programming paradigm that organizes code around **objects and classes** rather than only functions and procedures.

This repository covers the fundamental OOP concepts in C++ through small, easy-to-understand programs. Each example focuses on a specific concept so that the code can be studied and practiced individually.

The goal of this repository is to develop a clear understanding of OOP fundamentals before moving toward more advanced C++ programming.

---

## 🧠 OOP Concepts Covered

### 1. 🏗️ Classes & Objects

A **class** is a blueprint for creating objects, while an **object** is an instance of a class.

```cpp
class Student {
public:
    string name;

    void display() {
        cout << "Name: " << name;
    }
};

int main() {
    Student s1;
    s1.name = "Atiba";
    s1.display();
}
```

**Key concepts:**

* Class declaration
* Object creation
* Data members
* Member functions

---

### 2. 🔐 Encapsulation

Encapsulation means **wrapping data and functions together inside a class** and controlling access to that data.

It is commonly implemented using:

* `private`
* `public`
* `protected`

Example:

```cpp
class BankAccount {
private:
    double balance;

public:
    void setBalance(double amount) {
        balance = amount;
    }

    double getBalance() {
        return balance;
    }
};
```

---

### 3. 👨‍👩‍👧 Inheritance

Inheritance allows one class to **acquire properties and behaviors of another class**.

```cpp
class Animal {
public:
    void eat() {
        cout << "Eating...";
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Barking...";
    }
};
```

Here, `Dog` inherits the functionality of `Animal`.

Types of inheritance include:

* Single Inheritance
* Multilevel Inheritance
* Multiple Inheritance
* Hierarchical Inheritance
* Hybrid Inheritance

---

### 4. 🔄 Polymorphism

Polymorphism means **one interface, multiple forms**.

It allows the same function or operation to behave differently depending on the situation.

Two major types are:

#### Compile-Time Polymorphism

Usually achieved through:

* Function Overloading
* Operator Overloading

Example:

```cpp
class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }
};
```

#### Runtime Polymorphism

Usually achieved using:

* Function Overriding
* Virtual Functions

---

### 5. 🎭 Abstraction

Abstraction means **hiding unnecessary implementation details and showing only the important functionality**.

In C++, abstraction can be implemented using:

* Classes
* Access specifiers
* Abstract classes
* Pure virtual functions

Example:

```cpp
class Shape {
public:
    virtual void draw() = 0;
};
```

---

### 6. 🛠️ Constructors

A constructor is a special member function that is automatically called when an object is created.

```cpp
class Student {
public:
    Student() {
        cout << "Student object created";
    }
};
```

Types commonly studied include:

* Default Constructor
* Parameterized Constructor
* Copy Constructor

---

### 7. 🗑️ Destructors

A destructor is automatically called when an object is destroyed.

```cpp
class Student {
public:
    ~Student() {
        cout << "Object destroyed";
    }
};
```

A destructor is identified by the `~` symbol before the class name.

---

### 8. 📦 Access Specifiers

C++ provides three main access specifiers:

| Access Specifier | Same Class | Derived Class | Outside Class |
| ---------------- | ---------- | ------------- | ------------- |
| `public`         | ✅          | ✅             | ✅             |
| `protected`      | ✅          | ✅             | ❌             |
| `private`        | ✅          | ❌             | ❌             |

These are important for implementing encapsulation and controlling access to class members.

---

## 📁 Repository Structure

```text
oop-basics/
│
├── Classes & Objects/
├── Encapsulation/
├── Inheritance/
├── Polymorphism/
├── Abstraction/
├── Constructors/
├── Destructors/
├── Access Specifiers/
│
└── README.md
```

> The folder structure may evolve as more OOP concepts and practice programs are added.

---

## 💻 Technologies Used

* **Language:** C++
* **Paradigm:** Object-Oriented Programming
* **Compiler:** G++ / GCC
* **Editor:** Visual Studio Code
* **Version Control:** Git & GitHub

---

## 🚀 How to Run

### 1. Clone the repository

```bash
git clone https://github.com/Atibayounus/oop-basics.git
```

### 2. Open the project

```bash
cd oop-basics
```

### 3. Compile a C++ program

```bash
g++ filename.cpp -o program
```

### 4. Run the program

On Windows:

```bash
program.exe
```

Or:

```bash
./program
```

---

## 🎯 Learning Objectives

Through this repository, I am working on understanding:

* How classes and objects work
* How data is encapsulated
* How inheritance reduces code duplication
* How polymorphism provides flexibility
* How abstraction simplifies complex systems
* How constructors and destructors work
* How access specifiers control data visibility
* How OOP concepts can be applied to practical problems
* How to write organized and reusable C++ code

---

## 📈 Learning Progress

* [x] Classes & Objects
* [x] Encapsulation
* [x] Access Specifiers
* [x] Constructors
* [x] Destructors
* [x] Inheritance
* [x] Polymorphism
* [x] Abstraction
* [ ] Advanced OOP Concepts
* [ ] OOP-Based Mini Projects

---

## 🧪 Practice Approach

Each concept is practiced through small C++ programs rather than only theoretical definitions.

The examples are intentionally kept simple so that the focus remains on understanding **how and why each OOP concept works**.

As my understanding improves, I plan to add more complex examples and mini-projects based on these concepts.

---

## 🌱 Future Improvements

This repository will continue to grow with:

* More OOP practice problems
* Real-world examples
* Advanced inheritance examples
* Virtual functions
* Abstract classes
* Operator overloading
* Friend functions
* Static members
* Exception handling
* OOP-based mini projects

---

## 👨‍💻 Author

**Atiba Dar**

🎓 Computer Science Student
🏫 University of Gujrat, Pakistan
💻 Learning C++ & Object-Oriented Programming

### 🔗 Connect

* GitHub: [@Atibayounus](https://github.com/Atibayounus)

---

## ⭐ Support

If you find this repository useful for learning C++ OOP concepts, consider giving it a ⭐ on GitHub.

---

> **"Learn the concept. Write the code. Break it. Fix it. Repeat."** 🧑‍💻
