# Parking-system

# 🅿️ Simple Parking System

A C++ project that simulates a basic parking management system with functionality for user authentication, booking, cancellation, cost calculation, and administrative updates. The system follows object-oriented design principles and stores user and system data in external files.

---

## 📌 Project Overview

This project implements a console-based parking management system using C++. It includes features such as user login, booking a parking spot, cancelling reservations, computing parking fees (with and without tax), managing system settings, and adding employees. The system stores persistent data using external text files, and demonstrates practical use of classes, inheritance, method overloading, and file handling in C++.

---

## 🧱 Code Structure

- Car Class: Manages vehicle data such as model, color, plate number, and owner info. Also assigns a random parking location and logs user data to a file.
- Account Class: Handles user login credentials and validates them against stored accounts.
- ParkingSystem Class *(inherits from Car)*: Adds functionality for booking, calculating costs (including truck tax), generating receipts, and managing parking spots.
- CancelBook Class: Records booking cancellations along with the reason into a file.
- ParkingInformation Class: Stores and displays system-level details like parking name, location, hours, available spots, and pricing.
- Main Function: Manages the program flow by verifying users, displaying menu options, and calling the appropriate features.

---

## 🚦 Program Flow

1. Login: Users enter their username and password, verified from the `account.txt` file.
2. Main Menu: Authenticated users can:
   - View parking lot information
   - Book a parking spot
   - Cancel a reservation
   - Calculate parking costs (with/without tax)
   - Update system details
   - Add employee working hours
   - Exit the system

---

## 💰 Cost Calculation

- Two overloaded `Calculate()` methods:
  - One for general use (cost per hour × hours)
  - One for trucks (includes a 10% tax)

---

## 💡 Key Features

- User authentication system
- File-based data storage (`User Information`, `Canceling Information`, `Manager`, etc.)
- Dynamic parking area assignment based on car model:
  - Trucks → Floor 1  
  - Taxis → Floor 2  
  - Others → Floor 3
- Receipt generation for each booking
- Modular and extensible class-based design

---

## 🧪 Technologies Used

- Language: C++
- Concepts: OOP (Inheritance, Encapsulation), File Handling, Method Overloading

---

## 🛠 Future Enhancements

- Add error handling and input validation
- Improve UI/UX with a GUI interface
- Switch from file storage to database integration
- Add session logging and role-based access (admin vs. user)
- Implement real-time availability tracking


