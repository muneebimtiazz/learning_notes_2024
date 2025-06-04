// polymorphism:poly means many morphism means forms so polymorphism means many forms.
// types of polymorphism:compiletime ,runtime 

// compiletime polymorphism(static polymorphism):
// 1-operator overloading (see code:function_overloading.cpp)  2-function overloading (see code:function_overloading.cpp)
// runtime polymorphism(dynamic polymorphism):
// 1-virtual functions 2-method overriding

/*Compiletime polymorphism, also known as static polymorphism, is a type of polymorphism that is resolved at compile time. We call this type of polymorphism as early binding or Static binding. It occurs when the correct method or function to be called is determined at compile time based on the method's or function's signature (name and parameters).
Two common forms of compile-time polymorphism are:
1-Function Overloading: In C++, and other languages, you can define multiple functions with the same name but with different parameter lists. The correct function to be called is determined at compile time based on the number and types of arguments.
2-Operator Overloading: In C++, you can define custom behaviors for operators (e.g., +, -) for user-defined data types. The operator to be used is determined at compile time based on the operator symbol and operand types.*/

/*Runtime polymorphism, also known as dynamic polymorphism, is the opposite of compile-time polymorphism. In runtime polymorphism, the specific method or function to be called is determined at runtime based on the actual type or class of the object. This is often referred to as late binding or dynamic binding.
In contrast to compile-time polymorphism, which determines the method to be called at compile time based on the method's signature (name and parameters), runtime polymorphism allows for the selection of the appropriate method at runtime based on the object's actual type. This makes it possible to have different classes with methods of the same name but different implementations.
Runtime polymorphism is achieved in C++ through the use of virtual functions and inheritance. When you call a virtual function through a base class pointer or reference that points to a derived class object, the function associated with the derived class is executed, even though the pointer or reference is of the base class type. This is a powerful mechanism that enables you to work with objects of different derived classes through a common interface, allowing for more flexible and extensible code.
*/