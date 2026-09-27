# OOPS – C++ Programs

This repository contains the C++ programs developed as part of my
**Object-Oriented Programming (OOPS)** coursework.

The programs are organized topic-wise and cover concepts ranging from
basic C++ programming to classes, objects, constructors, destructors,
static members, friend functions, and inheritance.

## Student Details

| Field | Details |
|---|---|
| **Name** | Pragati Abbigeri |
| **Division** | C |
| **Roll No** | 302 |
| **USN** | 01FE23BEC089 |

## Repository Structure

```text
OOPS/
│
├── oops_programs/
│   │
│   ├── basic/
│   │   ├── area_of_rectangle.cpp
│   │   ├── biggest_number.cpp
│   │   ├── first.cpp
│   │   ├── palindrome_string.cpp
│   │   ├── string_length.cpp
│   │   ├── swap.cpp
│   │   ├── swap_passref.cpp 
│   │   └── swap_passvalue.cpp
│   │
│   ├── classes and objects/
│   │   ├── function outside the class.cpp
│   │   ├── object as argument.cpp
│   │   ├── object as argument_complex.cpp
│   │   ├── object as argument_time.cpp
│   │   ├── rect_area.cpp
│   │   ├── set and display.cpp
│   │   ├── student.cpp
│   │   └── time.cpp
│   │
│   ├── constructor and destructor/
│   │   ├── constructor_car.cpp
│   │   ├── constructor_employee.cpp
│   │   ├── copy_constructor_rectangle.cpp
│   │   ├── destructor_area of rect.cpp
│   │   └── parameterized constructor.cpp
│   │
│   ├── static and friend function/
│   │   ├── friend function.cpp
│   │   ├── friend_another_class.cpp
│   │   ├── static data member.cpp
│   │   ├── static function.cpp
│   │   └── static_employee.cpp
│   │
│   └── inheritance/
│       ├── single inheritance.cpp
│       ├── multi level inheritance.cpp
│       └── multi level inheritance2.cpp
│
└── README.md
```
## Topics Covered

### 1. Basic C++ Programming
- Input and output
- Variables and data types
- Strings
- Pass by value
- Pass by reference
- Pass by pointer

### 2. Classes and Objects
- Classes
- Objects
- Data members
- Access specifiers
- Member functions
- Functions outside the class
- Objects as function arguments

### 3. Constructors and Destructors
- Default constructor
- Parameterized constructor
- Copy constructor
- Destructors

### 4. Static and Friend Functions
- Static data members
- Static member functions
- Friend functions
- Friend functions involving multiple classes

### 5. Inheritance
- Single inheritance
- Multilevel inheritance
- 
## 1. Basic C++ Programs

The `basic` folder contains programs for practicing fundamental C++
programming concepts.

### Programs include:

- Basic C++ program
- Input and output using `cin` and `cout`
- Finding the area of a rectangle
- Finding the biggest number
- Finding the length of a string
- Checking whether a string is a palindrome
- Swapping values
- Pass by value
- Pass by reference
- Pass by pointer

---

## 2. Classes and Objects

The `classes and objects` folder contains programs introducing
object-oriented programming using classes and objects.


### Programs include:

| Program | Concept |
|---|---|
| `student.cpp` | Creating a Student class and object |
| `function outside the class.cpp` | Defining a member function outside the class |
| `object as argument.cpp` | Passing an object as a function argument |
| `object as argument_complex.cpp` | Complex number operations using objects |
| `object as argument_time.cpp` | Time operations using objects |
| `set and display.cpp` | Using member functions to set and display data |
| `rect_area.cpp` | Rectangle area using a class |
| `rectangle area.cpp` | Rectangle class and area calculation |

---

## 3. Constructors and Destructors

The `constructor and destructor` folder contains programs demonstrating
different types of constructors and destructors.


### Programs include:

| Program | Concept |
|---|---|
| `constructor_car.cpp` | Constructor using a Car class |
| `constructor_employee.cpp` | Constructor using an Employee class |
| `copy_constructor_rectangle.cpp` | Copy constructor using Rectangle |
| `parameterized constructor.cpp` | Parameterized constructor |
| `parameterized_constructor.cpp` | Parameterized constructor |
| `destructor_area of rect.cpp` | Destructor and object destruction |

---

## 4. Static and Friend Functions

The `static and friend function` folder contains programs demonstrating
static members and friend functions.


### Programs include:

| Program | Concept |
|---|---|
| `static data member.cpp` | Static data member |
| `static function.cpp` | Static member function |
| `static_employee.cpp` | Static member used for employee objects |
| `friend function.cpp` | Friend function |
| `friend_another_class.cpp` | Friend function involving another class |

---

## 5. Inheritance

The `inheritance` folder contains programs demonstrating inheritance
in C++.

### Programs include:

| Program | Concept |
|---|---|
| `single inheritance.cpp` | Single inheritance |
| `multi level inheritance.cpp` | Multilevel inheritance |
| `multi level inheritance2.cpp` | Multilevel inheritance practice |

##  Programming Language

**C++**

The programs use standard C++ features and headers such as:

```cpp
#include <iostream>
#include <cstring>
```

---

##  Tools Used

- **C++**
- **GCC / G++ Compiler**
- **Visual Studio Code**
- **Git**
- **GitHub**

---

##  How to Run

### Option 1: Run using Code::Blocks

The programs can be compiled and executed using **Code::Blocks** with a C++ compiler.

1. Open **Code::Blocks**.
2. Go to **File → Open** and select the required `.cpp` file.
3. If Code::Blocks asks for a compiler, select/configure the installed **GCC / MinGW** compiler.
4. Open the program you want to execute.
5. Click **Build and Run** or press:

```text
F9
```

6. The program output will appear in the **Console** window.

For example, to run:

```text
oops_programs/
└── basic/
    └── area_of_rectangle.cpp
```

Open `area_of_rectangle.cpp` in Code::Blocks and use **Build → Build and Run**.

> **Note:** Most of these programs are standalone `.cpp` files, so they can be opened and run individually without creating a large project containing all programs.

---

### Option 2: Run using Visual Studio Code

Open the repository folder in Visual Studio Code.

Navigate to the required program, for example:

```text
oops_programs/basic/area_of_rectangle.cpp
```

Compile the program using G++:

```bash
g++ oops_programs/basic/area_of_rectangle.cpp -o program
```

Run the compiled program on Windows:

```bash
program.exe
```

Or, depending on the terminal:

```bash
./program
```

You can replace the file path with any `.cpp` program you want to execute.

---

### Option 3: Clone the Repository First

Clone the repository using:

```bash
git clone https://github.com/pragatiabbigeri/OOPS.git
```

Then open the cloned folder in **Code::Blocks, Visual Studio Code, or another C++ IDE**.

---

##  Notes

- The programs are organized topic-wise according to the concepts covered in the OOPS course.
- Each `.cpp` file represents an individual program or practice exercise.
- Some programs are written as practice examples to understand specific OOPS concepts.
- More programs will be added as new concepts are covered.
- This repository is intended for coursework, learning, practice, and revision.

##  Author

**Pragati Abbigeri**

Electronics and Communication Engineering  
KLE Technological University
