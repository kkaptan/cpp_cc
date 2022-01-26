# Chapter One - a brief intro 

C++ is a strongly typed language. This means that the language has stricter
rules at compile time. This document serves as a introduction to C++ and the some of its strongly typed behaviour as a language. The knowledge gained here can also be applied to other strongly typed languages object oriented langugaes such as Java, etc. However, there are still differences between how different languages treat types internally such as primitives in Java. Which will not be covered here.

## Variables

C++ is an Object-Oriented Language. Meaning that obejcts are an abstractoin that have state and bevhaiour.

For example, a light switch. Its state can be on (1) or off (0), if it is a toggle switch. However, the light switch might be a dimmer, thus having a value between 1 and 0, where 1 represents the brightest light and 0 is off. The behaviour of the switch might to toggle on or off, or increase and decrease depending on the type of switch. 

As already mentioned above C++ is a strongly typed language, meaning that each object has a predefined data type.


### Declaring Variales

Variables are declared by providing their type. For example, the following code snippet declares an int.

```cpp
int number;
```

### Initializing Variables

When varibales are declared they are initialised. Object initialization establishes an object's initial state. For example, setting its value as shown in the example below.

```cpp
int number; \\number is initialized with a random int
number = 42; 
```

This can also be done in a single step as follows;

```cpp
int number = 42; \\ number
```


### Conditionals

Conditional expressions evaluate to true or false. For example, (4 < 5) evaluates to true, because 4 is less than 5. 

Conditional statmenets allow you to make decisions in your programs based on the values evaluated from the boolean expressions.

The following are a list of conditional operators,

```cpp
int main (void){
  int x = 42;
  0 == x; //equal
  1 != x; //not equal
  50 > x; //greater than
  52 >= x; //greater or equal to
  20 < x; // less than 
  19 <= x; // less than or equal to
}
```  

The following conditional statements, `if`, `else if` and `else` decide control flow of the program depending on the value of the boolean expression.

### Functions

Functions are a block of code that accept any number of inputs objects and can return output objects to their callers (the client code that invokes the function).

The following is an example function;


```
function_type function_name(arg_1_type arg_1, arg_2_type arg_2){
  //function logic
  return function_type object
}
```

### Debugging

Using the `gdb`. More will be discussed about debugging in later chapters.

