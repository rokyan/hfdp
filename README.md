# hfdp

Examples from "Head First Design Patterns" - C++ version.

## Principles

* Encapsulate what varies.
* Favor composition over inheritance.
* Program to interfaces, not implementations.
* Strive for loosely coupled designs between objects that interact.
* Classes should be open for extension, but closed for modification.
* Depend on abstraction. Do not depend on concrete classes.
* Principle of least knowledge: talk only to your friends.
* Don't call us, we'll call you.
* A class should have only one reason to change.

## Patterns

*Strategy* - defines a family of algorithms, encapsulates each one, and makes them interchangeable. Strategy lets the algorithm vary independently from clients that use it.

*Observer* - defines a one-to-many dependency between objects so that when one object changes state, all its dependents are notified and updated automatically.

*Decorator* - attach additional responsibilities to an object dynamically. Decorators provide a flexible alternative to subclassing for extending functionality.

*Abstract factory* - provides an interface for creating families of related or dependent objects without specifying the concrete classes.

*Factory method* - defines an interface for creating an object, but let subclasses decide which class to instantiate. Factory method lets a class defer instantiation of subclasses.

*Singleton* - ensure the class only has one instance and provide a global point of access to it.

*Command* - encapsulate a request as an object, thereby letting you parametrize clients with different requests, queue or log requests, and support undoable operations.

*Adapter* - converts the interface of a class into another interface clients expect. Lets classes work together that couldn't otherwise because of incompatible interfaces.

*Facade* - provides a unified interface to a set of interfaces in a subsystem. Facade defines a higher-level interface that makes the substem easier to use.

*Template method* - define the skeleton of an algorithm in an operation, deferring some steps to subclasses. Template method lets subclasses redefine certain steps of an algorithm without changing the algorithm's structure.

*Iterator* - provide a way to access the elements of an aggregate object sequentially without exposing its underlying implementation.

*Composite* - compose objects into tree structures to represent part-whole hierarchies. Composite lets clients treat individual objects and compositions of objects uniformly.

*State* - allow an object to alter its behavior when its internal state changes. The object will appear to change its class.
