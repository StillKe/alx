#include "hash_tables.h"

/*
 * key_index - Get the index at which a key/value
 *    pair should be stored in an array of hash table.
 *@key: The key to get the index of.
 *@size: The size of the array of the hash table.
 *
 * Return: the index of the key.
 * Descriptiion.: uses the djb2 algothirm.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

