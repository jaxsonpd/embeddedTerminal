/** 
 * @file help.c
 * @author Jack Duignan (JackpDuignan@gmail.com)
 * @date 2024-04-06
 * @brief The help command module
 */


#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>

#include "inc/help.h"




int32_t help_entry(uint16_t UNUSED(argc), char *UNUSED(argv[])) {
    printf("Embedded Terminal version 0.1\r\n");

    printf("Use info embeddedTerminal for more infomation about this shell\r\n");
    printf("Commands marked with * are not implemented in this system\r\n");
    printf("The following commands are available for the system:\r\n\n");
    
    printf("help: print this message\r\n");
    printf("clear: clear the screen\r\n");
    printf("*info: display information about the command\r\n");
    printf("*neofecth: displays information about this system\r\n");
    printf("led: toggels the led connected to PB5\r\n");
    printf("*digitalWrite: writes to a output of the microcontroller\r\n");

    return 0;
}
