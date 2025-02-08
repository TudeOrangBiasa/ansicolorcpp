#include "color.h"

using namespace std;

/**
 * @brief Resets all text formatting.
 * 
 * @return ANSI escape code string to reset formatting.
 */
string reset() {
    return "\033[0m";
}

/**
 * @brief Makes text bold.
 * 
 * @return ANSI escape code string for bold text.
 */
string bold() { return "\033[1m"; }

/**
 * @brief Makes text faint.
 * 
 * @return ANSI escape code string for faint text.
 */
string faint() { return "\033[2m"; }

/**
 * @brief Makes text italic.
 * 
 * @return ANSI escape code string for italic text.
 */
string italic() { return "\033[3m"; }

/**
 * @brief Underlines text.
 * 
 * @return ANSI escape code string for underlined text.
 */
string underline() { return "\033[4m"; }

/**
 * @brief Inverts text color.
 * 
 * @return ANSI escape code string for inverted text color.
 */
string inverse() { return "\033[7m"; }

/**
 * @brief Strikes through text.
 * 
 * @return ANSI escape code string for strikethrough text.
 */
string strikethrough() { return "\033[9m"; }

/**
 * @brief Sets text color to black.
 * 
 * @return ANSI escape code string for black text.
 */
string fgBlack() { return "\033[30m"; }

/**
 * @brief Sets text color to red.
 * 
 * @return ANSI escape code string for red text.
 */
string fgRed() { return "\033[31m"; }

/**
 * @brief Sets text color to green.
 * 
 * @return ANSI escape code string for green text.
 */
string fgGreen() { return "\033[32m"; }

/**
 * @brief Sets text color to yellow.
 * 
 * @return ANSI escape code string for yellow text.
 */
string fgYellow() { return "\033[33m"; }

/**
 * @brief Sets text color to blue.
 * 
 * @return ANSI escape code string for blue text.
 */
string fgBlue() { return "\033[34m"; }

/**
 * @brief Sets text color to magenta.
 * 
 * @return ANSI escape code string for magenta text.
 */
string fgMagenta() { return "\033[35m"; }

/**
 * @brief Sets text color to cyan.
 * 
 * @return ANSI escape code string for cyan text.
 */
string fgCyan() { return "\033[36m"; }

/**
 * @brief Sets text color to white.
 * 
 * @return ANSI escape code string for white text.
 */
string fgWhite() { return "\033[37m"; }

/**
 * @brief Sets background color to black.
 * 
 * @return ANSI escape code string for black background.
 */
string bgBlack() { return "\033[40m"; }

/**
 * @brief Sets background color to red.
 * 
 * @return ANSI escape code string for red background.
 */
string bgRed() { return "\033[41m"; }

/**
 * @brief Sets background color to green.
 * 
 * @return ANSI escape code string for green background.
 */
string bgGreen() { return "\033[42m"; }

/**
 * @brief Sets background color to yellow.
 * 
 * @return ANSI escape code string for yellow background.
 */
string bgYellow() { return "\033[43m"; }

/**
 * @brief Sets background color to blue.
 * 
 * @return ANSI escape code string for blue background.
 */
string bgBlue() { return "\033[44m"; }

/**
 * @brief Sets background color to magenta.
 * 
 * @return ANSI escape code string for magenta background.
 */
string bgMagenta() { return "\033[45m"; }

/**
 * @brief Sets background color to cyan.
 * 
 * @return ANSI escape code string for cyan background.
 */
string bgCyan() { return "\033[46m"; }

/**
 * @brief Sets background color to white.
 * 
 * @return ANSI escape code string for white background.
 */
string bgWhite() { return "\033[47m"; }

/**
 * @brief Sets text color to bright black.
 * 
 * @return ANSI escape code string for bright black text.
 */
string fgBrightBlack() { return "\033[90m"; }

/**
 * @brief Sets text color to bright red.
 * 
 * @return ANSI escape code string for bright red text.
 */
string fgBrightRed() { return "\033[91m"; }

/**
 * @brief Sets text color to bright green.
 * 
 * @return ANSI escape code string for bright green text.
 */
string fgBrightGreen() { return "\033[92m"; }

/**
 * @brief Sets text color to bright yellow.
 * 
 * @return ANSI escape code string for bright yellow text.
 */
string fgBrightYellow() { return "\033[93m"; }

/**
 * @brief Sets text color to bright blue.
 * 
 * @return ANSI escape code string for bright blue text.
 */
string fgBrightBlue() { return "\033[94m"; }

/**
 * @brief Sets text color to bright magenta.
 * 
 * @return ANSI escape code string for bright magenta text.
 */
string fgBrightMagenta() { return "\033[95m"; }

/**
 * @brief Sets text color to bright cyan.
 * 
 * @return ANSI escape code string for bright cyan text.
 */
string fgBrightCyan() { return "\033[96m"; }

/**
 * @brief Sets text color to bright white.
 * 
 * @return ANSI escape code string for bright white text.
 */
string fgBrightWhite() { return "\033[97m"; }

/**
 * @brief Sets background color to bright black.
 * 
 * @return ANSI escape code string for bright black background.
 */
string bgBrightBlack() { return "\033[100m"; }

/**
 * @brief Sets background color to bright red.
 * 
 * @return ANSI escape code string for bright red background.
 */
string bgBrightRed() { return "\033[101m"; }

/**
 * @brief Sets background color to bright green.
 * 
 * @return ANSI escape code string for bright green background.
 */
string bgBrightGreen() { return "\033[102m"; }

/**
 * @brief Sets background color to bright yellow.
 * 
 * @return ANSI escape code string for bright yellow background.
 */
string bgBrightYellow() { return "\033[103m"; }

/**
 * @brief Sets background color to bright blue.
 * 
 * @return ANSI escape code string for bright blue background.
 */
string bgBrightBlue() { return "\033[104m"; }

/**
 * @brief Sets background color to bright magenta.
 * 
 * @return ANSI escape code string for bright magenta background.
 */
string bgBrightMagenta() { return "\033[105m"; }

/**
 * @brief Sets background color to bright cyan.
 * 
 * @return ANSI escape code string for bright cyan background.
 */
string bgBrightCyan() { return "\033[106m"; }

/**
 * @brief Sets background color to bright white.
 * 
 * @return ANSI escape code string for bright white background.
 */
string bgBrightWhite() { return "\033[107m"; }
