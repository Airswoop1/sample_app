/* version.c */
/* Autogenerated by Makefile - DO NOT EDIT */

const char *version_string = "1.13"
;
const char *compilation_string = "gcc -DHAVE_CONFIG_H -DSYSTEM_WGETRC=\"/usr/local/etc/wgetrc\" -DLOCALEDIR=\"/usr/local/share/locale\" -I. -I../lib -I../lib -I/usr/local/include -O2 -Wall";
const char *link_string = "gcc -O2 -Wall -L/usr/local/lib -liconv -lssl -lcrypto -ldl -lz ftp-opie.o openssl.o ../lib/libgnu.a";
