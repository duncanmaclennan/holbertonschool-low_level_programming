#ifndef MAIN_H
#define MAIN_H

/**
 * struct list_s - structure for dog
 * @str: dog's name
 * @len: dog's age
 * @next: dog's owner
 * Description: list struct
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);

#endif
