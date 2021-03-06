/* -*-c-*-
   The MIT License (MIT)

   Copyright (c) 2016 - Ronaldo Faria Lima

   Permission is hereby granted, free of charge, to any person obtaining a copy
   of this software and associated documentation files (the "Software"), to deal
   in the Software without restriction, including without limitation the rights
   to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
   copies of the Software, and to permit persons to whom the Software is
   furnished to do so, subject to the following conditions:

   The above copyright notice and this permission notice shall be included in all
   copies or substantial portions of the Software.

   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
   IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
   AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
   LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
   OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
   SOFTWARE.

   Created: 2017-06-25 by Ronaldo Faria Lima

   This file purpose: Exemplo de criação e sincronização de processos usando C.
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define MAX_CHILDREN 100

int
main(void)
{
  register int i;
  
  for(i=0; i<MAX_CHILDREN; ++i)
    {
      if (!fork())
        {
          /* Este é o processo filho. Simplesmente retorna para forçar a
             finalização imediata. */
          return 0;
        }
    }
  sleep(60);
  printf("[Parent] Exiting...\n");
  return 0;
}

