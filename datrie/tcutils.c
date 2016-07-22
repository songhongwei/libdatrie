#include "tcutils.h"

#include <string.h>

#include <stdlib.h>



uint32 tclen(const TrieChar * str){

    const TrieChar * p = str;

    while(*p != TRIE_CHAR_TERM) p++;

    return p - str;

}



TrieChar * tcdup(const TrieChar * src){

    size_t size = (tclen(src)+1) * sizeof(TrieChar);

    TrieChar * dest = (TrieChar *)malloc(size);

    memcpy(dest, src, size);

    return dest;

}
