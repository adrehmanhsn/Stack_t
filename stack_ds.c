
#include "stack_ds.h"

static stack_status_t(stack_full(stack_ds_t *the_stack))
{
    if(STACK_MAX_SIZE-1 == the_stack->stack_pointer)
    {
        return STACK_FULL;
    }else
    {
        return STACK_NFULL;
    }
}

static stack_status_t(stack_empty(stack_ds_t *the_stack))
{
    if(the_stack->stack_pointer == -1)
    {
        return STACK_EMPTY;
    }else
    {
        return STACK_NFULL;
    }
}


return_status_t stack_init(stack_ds_t *the_stack)
{
    return_status_t ret = R_NOK;
    if(NULL == the_stack)
    {
        ret = R_NOK;
    }
    else
    {
        the_stack->stack_pointer = -1;
        ret = R_OK;
    }

    return ret;
}

return_status_t stack_push(stack_ds_t *the_stack , uint32_t value)
{
    return_status_t ret = R_NOK;

    if((NULL == the_stack) || (STACK_FULL == stack_full(the_stack)))
    {
        #ifdef STACK_DEBUG
        printf("Error !! Stack Is Full Can\'t Push [%i]. \n",value);
        #endif
        ret = R_NOK;
    }else
    {
        the_stack->stack_pointer ++;
        the_stack->data[the_stack->stack_pointer] = value;
        #ifdef STACK_DEBUG
        printf("Value [%i] Pushed To Stack .\n",value);
        #endif
        ret = R_OK;
    }

    return ret;
}

return_status_t stack_pop(stack_ds_t *the_stack , uint32_t *value)
{
    return_status_t ret = R_NOK;
    if((NULL == the_stack) || (NULL == value) || (STACK_EMPTY == stack_empty(the_stack)))
    {
        #ifdef STACK_DEBUG
        printf("Error !! Stack Is Empty Can\'t Pop Any Value.\n");
        #endif
        ret = R_NOK;
    }else
    {
        *value = the_stack->data[the_stack->stack_pointer];
        the_stack->stack_pointer --;
        #ifdef STACK_DEBUG
        printf("Value [%i] Pop From Stack .\n",*value);
        #endif
        ret = R_OK;
    }
    return ret;
}

return_status_t stack_top(stack_ds_t *the_stack , uint32_t *value)
{
    return_status_t ret = R_NOK;
    if((NULL == the_stack) || (NULL == value) || (STACK_EMPTY == stack_empty(the_stack)))
    {
        #ifdef STACK_DEBUG
        printf("Error !! Stack Is Empty Can\'t Pop Any Value.\n");
        #endif
        ret = R_NOK;
    }else
    {
        *value = the_stack->data[the_stack->stack_pointer];
        #ifdef STACK_DEBUG
        printf("Value Of the StackTop [%i].\n",*value);
        #endif
        ret = R_OK;
    }

    return ret ;
}
