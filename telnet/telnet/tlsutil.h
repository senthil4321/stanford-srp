/*
 * Copyright (c) Peter 'Luna' Runestig 1999, 2000 <peter@runestig.com>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer. 
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
 * TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LI-
 * ABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUEN-
 * TIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEV-
 * ER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABI-
 * LITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF
 * THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _TLSUTIL_H_
#define _TLSUTIL_H_

extern int	tls_enabled;
extern int	tls_active;
extern int	tls_suspend_iacs;
extern int 	tls_reset_state;
extern int	tls_anon;
extern char	*tls_keyfile;
extern char	*tls_certfile;
extern char	*tls_hostname;
extern char	tls_cipher_list[];

int	tls_init(void);
int	tls_start(void);
int	tls_try(void);
void	tls_cleanup(void);
void	tls_shutdown(void);
int	tls_recv(int s, void *buf, size_t len, int flags);
int	tls_send(int s, const void *msg, size_t len, int flags);
ssize_t	tls_read(int fd, void *buf, size_t count);
ssize_t	tls_write(int fd, const void *buf, size_t count);
int	tls_pending(void);
void	tls_set_cipher_list(char *list);
void	tls_optarg(char *optarg);
int	tls_get_client_finished(void *buf, size_t len);
int	tls_get_server_finished(void *buf, size_t len);

#endif
