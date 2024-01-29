/**
 **************************************************************************************
 * This File Contains Stack_t Function.
 * For More Information Return To The stack_ds.h file .
 **************************************************************************************
 */

// ==================================== Header files ===================================
#include "stack_ds.h"

// =================================== Implementation ==================================

static stack_status_t(stack_full(stack_t *stack_obj))
{
    if(STACK_MAX_SIZE-1 == stack_obj->stack_pointer)
    {
        return STACK_FULL;
    }else
    {
        return STACK_NFULL;
    }
}

// ---------------------------------------------------------------------------------------
static stack_status_t(stack_empty(stack_t *stack_obj))
{
    if(stack_obj->stack_pointer == -1)
    {
        return STACK_EMPTY;
    }else
    {
        return STACK_NFULL;
    }
}

// ---------------------------------------------------------------------------------------
return_status_t stack_init(stack_t *stack_obj)
{
    return_status_t ret = R_NOK;
    if(NULL == stack_obj)
    {
        ret = R_NOK;
    }
    else
    {
        stack_obj->stack_pointer = -1;
        ret = R_OK;
    }

    return ret;
}

// ---------------------------------------------------------------------------------------
return_status_t stack_push(stack_t *stack_obj , uint32_t value)
{
    return_status_t ret = R_NOK;

    if((NULL == stack_obj) || (STACK_FULL == stack_full(stack_obj)))
    {
        #ifdef STACK_DEBUG
        printf("Error !! Stack Is Full Can\'t Push [%i]. \n",value);
        #endif
        ret = R_NOK;
    }else
    {
        stack_obj->stack_pointer ++;
        stack_obj->data[stack_obj->stack_pointer] = value;
        #ifdef STACK_DEBUG
        printf("Value [%i] Pushed To Stack .\n",value);
        #endif
        ret = R_OK;
    }

    return ret;
}

// ---------------------------------------------------------------------------------------
return_status_t stack_pop(stack_t *stack_obj , uint32_t *value)
{
    return_status_t ret = R_NOK;
    if((NULL == stack_obj) || (NULL == value) || (STACK_EMPTY == stack_empty(stack_obj)))
    {
        #ifdef STACK_DEBUG
        printf("Error !! Stack Is Empty Can\'t Pop Any Value.\n");
        #endif
        ret = R_NOK;
    }else
    {
        *value = stack_obj->data[stack_obj->stack_pointer];
        stack_obj->stack_pointer --;
        #ifdef STACK_DEBUG
        printf("Value [%i] Pop From Stack .\n",*value);
        #endif
        ret = R_OK;
    }
    return ret;
}

// ---------------------------------------------------------------------------------------
return_status_t stack_top(stack_t *stack_obj , uint32_t *value)
{
    return_status_t ret = R_NOK;
    if((NULL == stack_obj) || (NULL == value) || (STACK_EMPTY == stack_empty(stack_obj)))
    {
        #ifdef STACK_DEBUG
        printf("Error !! Stack Is Empty Can\'t Pop Any Value.\n");
        #endif
        ret = R_NOK;
    }else
    {
        *value = stack_obj->data[stack_obj->stack_pointer];
        #ifdef STACK_DEBUG
        printf("Value Of the StackTop [%i].\n",*value);
        #endif
        ret = R_OK;
    }

    return ret ;
}

// ---------------------------------------------------------------------------------------
return_status_t stack_size(stack_t *stack_obj, uint32_t *value)
{
    return_status_t ret = R_NOK;
    if((NULL == stack_obj) || (NULL == value))
    {
        #ifdef STACK_DEBUG
        printf("Error !! Stack OR Value Is Not Valid Pointer");
        #endif // STACK_DEBUG
        ret = R_NOK;
    }
    else
    {
        *value = (stack_obj->stack_pointer +1);
        ret = R_OK;
    }

    return ret;
}

// ---------------------------------------------------------------------------------------
return_status_t stack_display(stack_t *stack_obj)
{
    return_status_t ret = R_NOK;
    sint32_t l_itrator = ZERO_INT;
    if((NULL == stack_obj) || (STACK_EMPTY == stack_empty(stack_obj)))
    {
        #ifdef STACK_DEBUG
        printf("Error !! Stack Pointer Is Not Valid OR Stack Is Empty");
        #endif // STACK_DEBUG
        ret = R_NOK;
    }else
    {
        printf("\n[");
        for(l_itrator = stack_obj->stack_pointer;l_itrator >= ZERO; l_itrator--)
        {
            printf(" %i,",stack_obj->data[l_itrator]);
        }
        printf("]\n");
        ret = R_OK;
    }
}

