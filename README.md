# CPP 05

## Project Overview

**CPP 05** explores exception handling, polymorphism, and abstract classes in C++ through a bureaucratic system. I implemented a hierarchy of bureaucrats and forms demonstrating exception management, inheritance, and virtual functions.

This project focused on:
- Implementing custom exception classes and proper exception handling
- Creating a bureaucrat class with grade validation and exception throwing
- Building a form system with signing and execution mechanics
- Developing polymorphic form types with specialized behaviors
- Implementing abstract base classes and pure virtual functions
- Creating an intern factory pattern for dynamic form creation

---

### Exercise 00: Mommy, when I grow up, I want to be a bureaucrat!
**Goal:** Implement a `Bureaucrat` class with grade management and custom exception handling.

**Key concepts:**
- Custom exception classes (`GradeTooHighException`, `GradeTooLowException`)
- Grade validation (1-150 range) with proper exception throwing
- Exception handling with try-catch blocks
- Const correctness and member function implementationerview

---

### Exercise 01: Form up, maggots!
**Goal:** Introduce a `Form` class that bureaucrats can sign, with grade requirements for signing.

**Key concepts:**
- Composition: `Form` class with signing requirements and execution requirements
- Interaction between `Bureaucrat` and `Form` objects
- Additional exception handling for form operations
- Friend functions and operator overloading for output

---

### Exercise 02: No, you need form 28B, not 28C...
**Goal:** Make the `Form` class abstract (`AForm`) and implement concrete form types with specific behaviors.

**Key concepts:**
- Abstract base class `AForm` with pure virtual execute function
- Concrete form implementations: `ShrubberyCreationForm`, `RobotomyRequestForm`, `PresidentialPardonForm`
- Each form has different grade requirements and execution behaviors
- Polymorphic form execution through virtual functions

---

### Exercise 03: At least this beats coffee-making
**Goal:** Implement an `Intern` class that can create forms dynamically based on their names.

**Key concepts:**
- Factory pattern: `Intern` class creates forms by name
- Dynamic form instantiation without knowing the exact type at compile time
- Error handling for unknown form types
- Function pointers or arrays of creation functions
- Integration with the existing bureaucrat and form hierarchy

