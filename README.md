# hfdp
Examples from "Head First Design Patterns" - C++ version.

## Principles

* Encapsulate what varies.
* Favor composition over inheritance.
* Program to interfaces, not implementations.
* Strive for loosely coupled designs between objects that interact.
* Classes should be open for extension, but closed for modification.
* Depend on abstraction. Do not depend on concrete classes.

## Patterns

*Strategy* - defines a family of algorithms, encapsulates each one, and makes them interchangeable. Strategy lets the algorithm vary independently from clients that use it.

*Observer* - defines a one-to-many dependency between objects so that when one object changes state, all its dependents are notified and updated automatically.

*Decorator* - attach additional responsibilities to an object dynamically. Decorators provide a flexible alternative to subclassing for extending functionality.

*Abstract factory* - provides an interface for creating families of related or dependent objects without specifying the concrete classes.

*Factory method* - defines an interface for creating an object, but let subclasses decide which class to instantiate. Factory method lets a class defer instantiation of subclasses.

*Singleton* - ensure the class only has one instance and provide a global point of access to it.

*Command* - encapsulate a request as an object, thereby letting you parametrize clients with different requests, queue or log requests, and support undoable operations.
