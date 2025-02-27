# FAST Point Management System

## Overview
The **FAST Point Management System (FPMS)** is a **C-based console application** designed to manage university point (transport) services for students, faculty, and staff. It assumes integration with the university's academic software for authentication and facilitates route management, registration codes, and employee-based authentication.  

This was my **first-ever university project**, developed in my **first semester** as part of learning structured programming and file handling in C.

## Features
- **Student Authentication:** Assumes roll numbers and passwords are retrieved from the university database.
- **Faculty & Staff Authentication:** Uses employee IDs instead of roll numbers.
- **Registration Code:** Assigned upon student registration (initialized in the project, assuming later OTP/manual assignment).
- **Route Management:** Predefined point routes, editable for future modifications.
- **Batch Limit:** Supports students from **2019 to 2022**.
- **File Handling:** Uses C file handling (`registered.txt`) for data storage.
- **Extensibility:** Designed for future enhancements, including full database integration and faculty registration.

## Future Enhancements
- **Database Connectivity:** Replace file-based storage with a relational database.
- **University Database Integration:** Connect the manual initialization of IDs and passwords with the university’s student records.
- **Faculty Registration:** Implement registration for faculty members.
- **User Interface:** Develop a GUI-based interface for better user experience.
- **OTP Integration:** Implement real-time OTP-based authentication.

## Detailed Report
A **comprehensive functional report** outlining each component and function is **submitted separately** as **"Report - FAST Point Management System."**
