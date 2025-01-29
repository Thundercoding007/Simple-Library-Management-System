# Simple-Library-Management-System
# 📖 VIT Library Book Borrowing System  

This C program facilitates the process of borrowing books from the **VIT Library** by allowing students to register their details before selecting a book.  

## 🔹 Key Features  

### 1️⃣ Student Registration  
   - The program prompts students to enter their **Name, PRN (unique ID), Department, and Division** before borrowing a book.  

### 2️⃣ Book Selection  
   - A predefined list of **100 books** is displayed for students to choose from.  
   - The student selects a book by entering its corresponding number.  
   - If an invalid number is entered, the program asks for a valid input.  

### 3️⃣ Book Location Mapping  
   - Once a book is selected, the program calculates and displays the **row and column number** where the book is located in the library.  

### 4️⃣ Timestamp Logging  
   - The current **date and time** of borrowing are recorded using the `time.h` library.  

### 5️⃣ Saving Student Data to a File  
   - All student details, along with the borrowed book information and timestamp, are stored in a file named **`student.txt`**.  

### 6️⃣ User Interaction  
   - The student can choose to view their entered details before proceeding.  
   - The program allows multiple students to register sequentially.  

## 🔹 File Handling  
   - The program uses **`fopen()`** to create and write student records to `student.txt`.  
   - The details are stored in the file in a structured format for future reference.  

## 🔹 Error Handling  
   - Ensures that only valid book numbers (1-100) are accepted.  
   - Clears input buffers to prevent unintended input errors.  

This project can be extended by adding a **book return system, student authentication, or integrating a database for enhanced functionality.** 🚀  

