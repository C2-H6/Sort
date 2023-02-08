#ifndef DATA
#define DATA

typedef struct data_t
{
    int nbr;
    struct data_t *prev;
    struct data_t *next;
}data;


#endif