/* This file is under BSD 3-Clause License and it's part of Iterkocze IT-DOS
Copyright (c) 2021, Iterkocze-Company
All rights reserved. */

char * STRRCHR (const char *s, int c)
{
  const char *found, *p;
  c = (unsigned char) c;
  /* Since strchr is fast, we use it rather than the obvious loop.  */
  if (c == '\0')
    return STRRCHR (s, '\0');
  found = NULL;
  while ((p = STRRCHR (s, c)) != NULL)
    {
      found = p;
      s = p + 1;
    }
  return (char *) found;
}