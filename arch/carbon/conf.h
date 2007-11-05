/* conf.h.  Generated by configure.  */
/* conf.h.in.  Generated from configure.ac by autoheader.  */
// Modified by Chris to work for an Apple computer with OS 9 or above

/* Define to enable console */
/* #undef CONSOLE */

/* d2x major version */
#define D2XMAJOR "0"

/* d2x minor version */
#define D2XMINOR "5"

/* d2x micro version */
#define D2XMICRO "3"

/* Define if you want to build the editor */
/* #undef EDITOR */

/* Define for faster i/o on little-endian cpus */
/* #undef FAST_FILE_IO */

/* Define if you want a GGI build */
/* #undef GGI */

/* Define to 1 if you have the declaration of `nanosleep', and to 0 if you
   don't. */
//#define HAVE_DECL_NANOSLEEP 1

/* Define to 1 if you have the <inttypes.h> header file. */
//#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <memory.h> header file. */
//#define HAVE_MEMORY_H 1

/* Define to 1 if you have the <netipx/ipx.h> header file. */
/* #undef HAVE_NETIPX_IPX_H */

/* Define to 1 if you have the <stdint.h> header file. */
//#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
//#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
//#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
//#define HAVE_STRING_H 1

/* Define if you want to build for mac datafiles */
//#define MACDATA 

/* Define to disable asserts, int3, etc. */
/* #undef NDEBUG */

/* Define if you want an assembler free build */
#define NO_ASM 

/* Define if you want an OpenGL build */
//#define OGL

// Package macros are currently unused

/* Name of package */
//#define PACKAGE "d2x"

/* Define to the address where bug reports for this package should be sent. */
//#define PACKAGE_BUGREPORT "descent-source@warpcore.org"

/* Define to the full name of this package. */
//#define PACKAGE_NAME "D2X-Rebirth"

/* Define to the version of this package. */
//#define PACKAGE_VERSION "0.5.0"

/* Define to the full name and version of this package. */
//#define PACKAGE_STRING PACKAGE_NAME " v" PACKAGE_VERSION

/* Define to the one symbol short name of this package. */
//#define PACKAGE_TARNAME "d2x"

/* Define for a "release" build */
/* #undef RELEASE */

/* Define if you have the SDL_image library */
/* #undef SDL_IMAGE */

/* Define this to be the shared game directory root */
#define SHAREPATH ""

/* Define to 1 if you have the ANSI C header files. */
//#define STDC_HEADERS 1

/* Define if you want an SVGALib build */
/* #undef SVGA */

/* define to not use the SDL_Joystick routines. */
/* #undef USE_LINUX_JOY */

/* Version number of package */
//#define VERSION "0.5.0"

/* Define if your processor needs data to be word-aligned */
/* #undef WORDS_NEED_ALIGNMENT */


        /* General defines */
#define VERSION_NAME PACKAGE_STRING
#define NMONO 1
#define PIGGY_USE_PAGING 1
#define NEWDEMO 1

#if defined(__APPLE__) && defined(__MACH__)
#define __unix__
/* Define if you want a network build */
#define NETWORK

/* Define to 1 if the system has the type `struct timespec'. */
#define HAVE_STRUCT_TIMESPEC 1

/* Define to 1 if the system has the type `struct timeval'. */
#define HAVE_STRUCT_TIMEVAL 1

/* Define to 1 if you have the <sys/stat.h> header file. */
//#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
//#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
//#define HAVE_UNISTD_H 1

#else // Mac OS 9
# ifndef __MWERKS__
#  define inline
# endif

#define OGL_RUNTIME_LOAD	// avoids corruption of OpenGL

//#define TARGET_API_MAC_CARBON 1
/* Define to 1 if the system has the type `struct timespec'. */
#define HAVE_STRUCT_TIMESPEC 0

/* Define to 1 if the system has the type `struct timeval'. */
#define HAVE_STRUCT_TIMEVAL 0

/* Define to 1 if you have the <sys/stat.h> header file. */
//#define HAVE_SYS_STAT_H 0

/* Define to 1 if you have the <sys/types.h> header file. */
//#define HAVE_SYS_TYPES_H 0

/* Define to 1 if you have the <unistd.h> header file. */
//#define HAVE_UNISTD_H 0

#endif	// OS 9/X

#ifdef __unix__
# ifdef GGI
#  define GII_INPUT 1
#  define GGI_VIDEO 1
# else
#  ifdef SVGA
#   define SVGALIB_INPUT 1
#   define SVGALIB_VIDEO 1
#  else
#   define SDL_INPUT 1
#   ifdef OGL
#    define SDL_GL_VIDEO 1
#   else
#    define SDL_VIDEO 1
#   endif
#  endif
# endif
#endif

#ifdef macintosh
# define SDL_INPUT 1
# ifdef OGL
#  define SDL_GL_VIDEO 1
# else
#  define SDL_VIDEO 1
# endif
#endif

