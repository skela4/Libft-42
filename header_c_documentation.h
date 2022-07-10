/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header_c_documentation.h                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahizi-e <aahizi-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 05:10:40 by aahizi-e          #+#    #+#             */
/*   Updated: 2022/07/10 05:18:18 by aahizi-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_C_DOCUMENTATION_H
# define HEADER_C_DOCUMENTATION_H

/*! @file structcmd.h
    @brief A Documented file.
    
    Details.
*/

# include <stdlib.h>

/*! \def MAX(a,b)
    \brief A macro that .
   
    Details.
*/
# define MAX 4

/*! \var typedef unsigned int UINT32
    \brief A type definition for a .
    
    Details.
*/
typedef unsigned int	t_uint32;

/*! \fn int open(const char *pathname,int flags)
    \brief Opens a file descriptor.
 
    \param pathname The name of the descriptor.
    \param flags Opening flags.
*/
int		open(const char *pathname, int flags);

/*! \fn int close(int fd)
    \brief Closes the file descriptor \a fd.
    \param fd The descriptor to close.
*/
int		close(int fd);

/*! \fn size_t write(int fd,const char *buf, size_t count)
    \brief Writes \a count bytes from \a buf to the filedescriptor \a fd.
    \param fd The descriptor to write to.
    \param buf The data buffer to write.
    \param count The number of bytes to write.
*/
size_t	write(int fd, const char *buf, size_t count);

/*! \fn int read(int fd,char *buf,size_t count)
    \brief Read bytes from a file descriptor.
    \param fd The descriptor to read from.
    \param buf The buffer to read into.
    \param count The number of bytes to read.
*/
int		read(int fd, char *buf, size_t count);

#endif
