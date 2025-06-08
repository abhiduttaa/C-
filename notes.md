## 🟢 **Beginner Level (Basics & Control Structures)**

1. Print "Hello, World!"
2. Simple calculator (add, subtract, multiply, divide)
3. Check if a number is even or odd
4. Find the largest of 3 numbers
5. Print all prime numbers between 1 and 100
6. Reverse a number (e.g., 123 → 321)
7. Check if a number is palindrome
8. Print a multiplication table
9. Calculate factorial of a number
10. Sum of digits of a number

---

## 🔵 **Intermediate Level (Loops, Arrays, Strings)**

11. Fibonacci series up to n terms
12. Binary to decimal & decimal to binary converter
13. Linear search in an array
14. Bubble sort implementation
15. Insert and delete elements in an array
16. Count vowels, consonants, digits in a string
17. Remove duplicates from a string
18. Find the frequency of elements in an array
19. Check if a string is palindrome
20. Merge two sorted arrays

---

## 🟣 **Advanced Level (Functions, Pointers, OOP)**

21. Swap two numbers using pointers
22. Recursive factorial function
23. Recursive Fibonacci
24. Pass array to a function & perform sum
25. Create a `class Student` with data members and methods
26. Constructor and destructor demo
27. Inheritance example (`class Animal -> class Dog`)
28. Function overloading and overriding
29. Bank management system using class
30. File handling: Read and write student details

---

## 🔴 **STL & Mini Projects (Advanced Concepts)**

31. Use `vector`, `map`, `set` in C++
32. Stack and queue operations using STL
33. Tic-Tac-Toe game
34. Contact book using file handling
35. To-do list manager with file storage
36. Mini voting system
37. Simple quiz application
38. Expense tracker using classes & files
39. Library management system
40. Address book using OOP

### ✅ **1. Use `vector`, `map`, `set` in C++**

```cpp
#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

int main() {
    // Vector example
    vector<int> v = {1, 2, 3, 4};
    v.push_back(5);

    // Set example (unique & sorted)
    set<int> s = {4, 2, 1, 4};
    s.insert(3);

    // Map example
    map<string, int> marks;
    marks["Alice"] = 85;
    marks["Bob"] = 90;

    // Output
    cout << "Vector: ";
    for (int i : v) cout << i << " ";
    cout << "\nSet: ";
    for (int i : s) cout << i << " ";
    cout << "\nMap:\n";
    for (auto pair : marks) cout << pair.first << ": " << pair.second << "\n";

    return 0;
}
```

---

### ✅ **2. Stack and Queue using STL**

```cpp
#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main() {
    stack<int> s;
    queue<int> q;

    s.push(10); s.push(20); s.push(30);
    q.push(1); q.push(2); q.push(3);

    cout << "Stack top: " << s.top() << "\n";
    cout << "Queue front: " << q.front() << "\n";

    s.pop();
    q.pop();

    cout << "After pop - Stack top: " << s.top() << ", Queue front: " << q.front() << "\n";
    return 0;
}
```

---

### ✅ **3. Tic-Tac-Toe Game (2-player)**

Great! Here's the **full source code** for a simple **2-player Tic-Tac-Toe game in C++** using a `3x3` `char` array, player input, and win/draw detection:

---

### ✅ **Tic-Tac-Toe Game in C++**
```cpp
#include <iostream>
using namespace std;

char board[3][3];
char currentPlayer = 'X';

void initializeBoard() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            board[i][j] = '1' + i * 3 + j;
}

void printBoard() {
    cout << "\n";
    for (int i = 0; i < 3; i++) {
        cout << " ";
        for (int j = 0; j < 3; j++) {
            cout << board[i][j];
            if (j < 2) cout << " | ";
        }
        if (i < 2) cout << "\n-----------\n";
    }
    cout << "\n";
}

bool isWin() {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == currentPlayer && 
            board[i][1] == currentPlayer && 
            board[i][2] == currentPlayer)
            return true;
        if (board[0][i] == currentPlayer && 
            board[1][i] == currentPlayer && 
            board[2][i] == currentPlayer)
            return true;
    }
    if (board[0][0] == currentPlayer && 
        board[1][1] == currentPlayer && 
        board[2][2] == currentPlayer)
        return true;
    if (board[0][2] == currentPlayer && 
        board[1][1] == currentPlayer && 
        board[2][0] == currentPlayer)
        return true;

    return false;
}

bool isDraw() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] != 'X' && board[i][j] != 'O')
                return false;
    return true;
}

bool makeMove(int move) {
    int row = (move - 1) / 3;
    int col = (move - 1) % 3;
    if (board[row][col] != 'X' && board[row][col] != 'O') {
        board[row][col] = currentPlayer;
        return true;
    }
    return false;
}

void switchPlayer() {
    currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
}

int main() {
    int move;
    initializeBoard();

    while (true) {
        printBoard();
        cout << "Player " << currentPlayer << ", enter your move (1-9): ";
        cin >> move;

        if (move < 1 || move > 9 || !makeMove(move)) {
            cout << "Invalid move. Try again.\n";
            continue;
        }

        if (isWin()) {
            printBoard();
            cout << "🎉 Player " << currentPlayer << " wins!\n";
            break;
        }

        if (isDraw()) {
            printBoard();
            cout << "It's a draw!\n";
            break;
        }

        switchPlayer();
    }

    return 0;
}
```

---

### ✅ Features:
- 3x3 grid displayed cleanly
- Input validated for range and repeat
- Win and draw detection
- Turn-based two-player gameplay



---

### ✅ **4. Contact Book (using file handling)**

```cpp
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream out("contacts.txt", ios::app);
    string name, phone;
    cout << "Enter Name: "; cin >> name;
    cout << "Enter Phone: "; cin >> phone;
    out << name << " " << phone << "\n";
    out.close();

    ifstream in("contacts.txt");
    string line;
    cout << "\n--- Contact List ---\n";
    while (getline(in, line)) {
        cout << line << "\n";
    }
    return 0;
}
```

---

### ✅ **5. To-do List with File Storage**

Similar to contact book but for tasks.

```cpp
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int choice;
    string task;
    ofstream out("todo.txt", ios::app);

    cout << "1. Add Task\n2. Show Tasks\nChoice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter task: ";
        cin.ignore(); getline(cin, task);
        out << task << "\n";
        cout << "Task added!\n";
    }

    out.close();

    if (choice == 2) {
        ifstream in("todo.txt");
        cout << "\n--- Your Tasks ---\n";
        while (getline(in, task)) {
            cout << "- " << task << "\n";
        }
        in.close();
    }

    return 0;
}
```

---

### ✅ **6. Mini Voting System**

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 0, b = 0, choice;
    cout << "Vote for A(1) or B(2): ";
    cin >> choice;

    if (choice == 1) a++;
    else if (choice == 2) b++;

    cout << "Votes - A: " << a << " | B: " << b << "\n";
    return 0;
}
```

✅ Enhance: Use map & file to store votes across runs.

---

### ✅ **7. Simple Quiz Application**

```cpp
#include <iostream>
using namespace std;

int main() {
    string q[] = {"Capital of France?", "5 + 3 = ?"};
    string ans[] = {"Paris", "8"};
    string user;
    int score = 0;

    for (int i = 0; i < 2; i++) {
        cout << q[i] << " ";
        cin >> user;
        if (user == ans[i]) score++;
    }

    cout << "Your score: " << score << "/" << 2 << "\n";
    return 0;
}
```

---

### ✅ **8. Expense Tracker using OOP + File**

```cpp
#include <iostream>
#include <fstream>
using namespace std;

class Expense {
public:
    string name;
    float amount;

    void addExpense() {
        ofstream file("expenses.txt", ios::app);
        cout << "Enter expense name: ";
        cin >> name;
        cout << "Amount: ";
        cin >> amount;
        file << name << " " << amount << "\n";
        file.close();
    }

    void viewExpenses() {
        ifstream file("expenses.txt");
        string line;
        cout << "--- Expenses ---\n";
        while (getline(file, line)) cout << line << "\n";
        file.close();
    }
};

int main() {
    Expense e;
    e.addExpense();
    e.viewExpenses();
    return 0;
}
```

---

### ✅ **9. Library Management System (OOP)**

Features:
- Add books
- View books
- Borrow/return

You’ll need classes:
```cpp
class Book {
    string title, author;
    bool issued;
};
```

Would you like me to build this full project?

---

### ✅ **10. Address Book using OOP**

Same logic as contact book but use classes like:

```cpp
class Contact {
    string name, phone;
    void saveToFile();
    void displayContacts();
};
