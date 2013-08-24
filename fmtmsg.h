/*
 * Copyright 2013 Mo McRoberts.
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

/*
http://pubs.opengroup.org/onlinepubs/009695399/basedefs/fmtmsg.h.html
*/

#ifndef __UX_FMTMSG_H
# define __UX_FMTMSG_H                 1

# include <ux/cdefs.h>

# if _XOPEN_SOURCE >= 600

/* Message classifications */

/* Major classifications: MM_HARD, MM_SOFT or MM_FIRM */

# define MM_HARD                       (1<<0)
# define MM_SOFT                       (1<<1)
# define MM_FIRM                       (MM_HARD|MM_SOFT)

/* Source classifications: MM_APPL, MM_UTIL or MM_OPSYS */

# define MM_APPL                       (1<<2)
# define MM_UTIL                       (1<<3)
# define MM_OPSYS                      (MM_APPL|MM_UTIL)

/* Display classifications: MM_PRINT, MM_CONSOLE, or both */

# define MM_PRINT                      (1<<4)
# define MM_CONSOLE                    (1<<5)

/* Status classifications: MM_RECOVER or MM_NRECOV */

# define MM_RECOVER                    (1<<6)
# define MM_NRECOV                     (1<<7)

/* Severity levels */

#  define MM_HALT                      1
#  define MM_ERROR                     2
#  define MM_WARNING                   3
#  define MM_INFO                      4
#  define MM_NOSEV                     5

/* Defined null values for each of the parameters */

#  define MM_NULLLBL                   ((char *) 0)
#  define MM_NULLSEV                   0
#  define MM_NULLMC                    0L
#  define MM_NULLTXT                   ((char *) 0)
#  define MM_NULLACT                   ((char *) 0)
#  define MM_NULLTAG                   ((char *) 0)

/* fmtmsg() return values */

/* The function succeeded */
#  define MM_OK                        0
/* The function failed completely */
#  define MM_NOTOK                     -1
/* The function failed to produce output to stderr */
#  define MM_NOMSG                     1
/* The function failed to produce output to the console */
#  define MM_NOCON                     2

__UX_BEGIN_DECLS

/* display a message in the specified format on standard error and/or a system console */
int fmtmsg(long classification, const char *label, int severity, const char *text, const char *action, const char *tag) __UX_SYM03(fmtmsg);

__UX_END_DECLS

# endif /* _XOPEN_SOURCE >= 600 */

#endif /*__UX_FMTMSG_H*/
