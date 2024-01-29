/**
 **************************************************************************************
 * @mainpage  Stack_t
 * @file      stack_ds.h
 * @brief     Implementation of a stack data structure.
 * @author    Abdulrahman Hassan Al-Sayed AKA: Adrehman
 *            <BR><EM>https://www.linkedin.com/in/adrehmanhsn</EM>
 *            <BR><EM>https://github.com/adrehmanhsn</EM>
 * @version   1.0.0
 * @date      2024-01-25
 * @image     html "../system_design.jpg" "System Design"
 *            <BR>
 * @details   <B>Details</B>
 *            This file provides the implementation of a stack data structure based on Array.
 *            <BR>This File contains the next 6 functions:
 *              <BR>+ stack_init
 *              <BR>+ stack_push
 *              <BR>+ stack_pop
 *              <BR>+ stack_top
 *              <BR>+ stack_display
 *              <BR>+ stack_size
 *            <BR>
 *            <BR>And contains next 1 enum:
 *              <BR>+ STACK_EMPTY
 *              <BR>+ STACK_FULL
 *              <BR>+ STACK_NFULL
 *            <BR>
 *
 * @copyright &copy; 2024 Abdulrahman Hassan Al-Sayed - Egypt.
 *
 *            This program is free software: you can redistribute it and/or modify it
 *            under the terms of the GNU General Public License as published by the
 *            Free Software Foundation, either version 3 of the License, or
 *            (at your option) any later version.
 *
 *            This program is distributes in the hope that it will be useful, but
 *            WITHOUT ANY WARRANTY; without even the implied warranty of
 *            MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *            See the GNU General Public License for more details.
 *
 *            You should have received a copy of the GNU General Public License
 *            along with this program. If not, see <https://www.gnu.org/license/>.
 *
 *            Email: adrehmanhsn@hotmail.com
 *
 **************************************************************************************
 */

#ifndef _STACK_DS_H
#define _STACK_DS_H

// ==================================== Header files ===================================
#include "std_types.h"                      // The Custom Stander Types library
// ======================================= Macros =======================================

/*
 *                                  USER CONFIGRATION PART
 * HERE YOU MUST DETERMINE THE FIEXD STACK SIZE AND DEBUG MODE TO BE USED THE STACK.
 */
 // --------------------------------------------------------------------------------------
#define STACK_MAX_SIZE     5        //!< Stack Maximum Size
#define STACK_DEBUG                 //!< Stack Debug Mode
// ---------------------------------------------------------------------------------------

// =================================== User Define Types ===================================
typedef struct stack_ds
{
    uint32_t stack_pointer;
    uint32_t data[STACK_MAX_SIZE];
}stack_t;

typedef enum stack_status
{
    STACK_EMPTY,
    STACK_FULL,
    STACK_NFULL
}stack_status_t;

// =================================== Function Prototypes ==================================
/**
 **************************************************************************************
 * @brief Initializes the stack.
 *
 * This function initializes the stack by setting the stack pointer to -1.
 *
 * @param stack_obj Pointer to the stack data structure.
 * @return R_OK if initialization is successful, R_NOK otherwise.
 **************************************************************************************
 */
return_status_t stack_init(stack_t *stack_obj);

/**
 **************************************************************************************
 * @brief Pushes a value onto the stack.
 *
 * This function pushes a value onto the stack if the stack is not full.
 *
 * @param stack_obj Pointer to the stack data structure.
 * @param value The value to push onto the stack.
 * @return R_OK if the push operation is successful, R_NOK otherwise.
 **************************************************************************************
 */
return_status_t stack_push(stack_t *stack_obj , uint32_t value);

/**
 **************************************************************************************
 * @brief Pops a value from the stack.
 *
 * This function pops a value from the stack if the stack is not empty.
 *
 * @param stack_obj Pointer to the stack data structure.
 * @param value Pointer to store the popped value.
 * @return R_OK if the pop operation is successful, R_NOK otherwise.
 **************************************************************************************
 */
return_status_t stack_pop(stack_t *stack_obj , uint32_t *value);

/**
 **************************************************************************************
 * @brief Retrieves the value at the top of the stack.
 *
 * This function retrieves the value at the top of the stack without
 * removing it.
 *
 * @param stack_obj Pointer to the stack data structure.
 * @param value Pointer to store the top value.
 * @return R_OK if the operation is successful, R_NOK otherwise.
 **************************************************************************************
 */
return_status_t stack_top(stack_t *stack_obj , uint32_t *value);

/**
 **************************************************************************************
 * @brief Retrieves the size of the stack.
 *
 * This function retrieves the size of the stack
 *
 * @param stack_obj Pointer to the stack data structure.
 * @param value Pointer to store the stack size.
 * @return R_OK if the operation is successful, R_NOK otherwise.
 **************************************************************************************
 */
return_status_t stack_size(stack_t *stack_obj, uint32_t *value);

/**
 **************************************************************************************
 * @brief Retrieves the size of the stack.
 *
 * This function retrieves the size of the stack
 *
 * @param stack_obj Pointer to the stack data structure.
 * @param value Pointer to store the stack size.
 * @return R_OK if the operation is successful, R_NOK otherwise.
 **************************************************************************************
 */
return_status_t stack_display(stack_t *stack_obj);
#endif
