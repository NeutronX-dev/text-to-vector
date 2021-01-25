# text-to-vector
Turn your text into a vector of strings. (JavaScript Reference: String.split)

# File Tree
```
.
└── Projects/
    ├── txtToVector/
    │   ├── txtToVector.cpp
    │   └── txtToVector.h
    └── main.cpp
```

# Usage
First import it with `#import "txtToVector/txtToVector.cpp"` If you have another path simply change this to where the file is.

## `std::vector<std::string> txtToVector::split(std::string text, char divider)`
```cpp
std::vector<std::string> exampleA txtToVector::split("Hello, I'm a string!", ' ')
// exampleA: {"Hello,", "I'm", "a", "string!"}

std::vector<std::string> exampleB = txtToVector::split("A:B:C:D:E", ':');
// exampleB: {"A,", "B", "C", "D", "E"}
```
