# ANSI Color CPP

This project demonstrates the usage of ANSI escape codes to print colored text in the terminal using C++. It includes functions to set foreground and background colors, as well as text formatting options like bold, italic, and underline.

## Files

- `example/example.cpp`: Example usage of the color functions.
- `color.cpp`: Implementation of the color functions.
- `color.h`: Header file declaring the color functions.

## Usage

1. **Clone the repository:**
    ```sh
    git clone https://github.com/TudeOrangBiasa/ansicolorcpp.git
    cd ansiColorCPP
    ```

2. **Compile the code:**
    ```sh
    g++ -Wall -std=c++11 color.cpp example/example.cpp -o ansi_demo
    ```

3. **Run the example:**
    ```sh
    ./ansi_demo
    ```

## Functions

### Text Formatting

- `reset()`: Resets all text formatting.
- `bold()`: Makes text bold.
- `faint()`: Makes text faint.
- `italic()`: Makes text italic.
- `underline()`: Underlines text.
- `inverse()`: Inverts text color.
- `strikethrough()`: Strikes through text.

### Foreground Colors

- `fgBlack()`, `fgRed()`, `fgGreen()`, `fgYellow()`, `fgBlue()`, `fgMagenta()`, `fgCyan()`, `fgWhite()`
- `fgBrightBlack()`, `fgBrightRed()`, `fgBrightGreen()`, `fgBrightYellow()`, `fgBrightBlue()`, `fgBrightMagenta()`, `fgBrightCyan()`, `fgBrightWhite()`

### Background Colors

- `bgBlack()`, `bgRed()`, `bgGreen()`, `bgYellow()`, `bgBlue()`, `bgMagenta()`, `bgCyan()`, `bgWhite()`
- `bgBrightBlack()`, `bgBrightRed()`, `bgBrightGreen()`, `bgBrightYellow()`, `bgBrightBlue()`, `bgBrightMagenta()`, `bgBrightCyan()`, `bgBrightWhite()`

## Example

```cpp
#include <iostream>
#include "color.h"

int main() {
    std::cout << fgRed() << "This is red text" << reset() << std::endl;
    std::cout << bgGreen() << "This is text with green background" << reset() << std::endl;
    return 0;
}
```

## Contributing

Contributions are welcome! Please open an issue or submit a pull request for any improvements or bug fixes.


## License

This project is licensed under the MIT License.


