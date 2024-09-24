#ifndef INPUT_VALIDATOR_H
#define INPUT_VALIDATOR_H

/* input_validator expects a user input
 * keeps running until input is validated
 * for the validator to return the number it must be between min and max
 *
 * @param number, the input to validate as int
 * @param min, the minimum allowed number
 * @param max, the maximum allowed number
 * @return the validated number as an integer
 */

int input_validator(int min, int max);

#endif

