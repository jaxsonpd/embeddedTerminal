/** 
 * @file utils.h
 * @author Jack Duignan (JackpDuignan@gmail.com)
 * @date 2024-04-22
 * @brief various utility functions
 */


#ifndef UTILS_H
#define UTILS_H


#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>

/** 
 * @brief read a line from stdin
 * @param prmpt the prompt to place at the begining
 * @param buffer the buffer to place the read line into
 * @param bufferSize the size of the input buffer
 * 
 * @return 0 if succesful 1 if no input 2 if input is to long
 */
uint8_t UTL_getLine (char *prmpt, char *buffer, size_t buffSize);


#endif // UTILS_H