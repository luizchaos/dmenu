/*_                                */ 
/*| |__ __ __ _   _ _ __   ___     */
/*| '_ \| '__| | | | '_ \ / _ \    Bruno Montezano */
/*| |_) | |  | |_| | | | | (_) |   https://github.com/brunomontezano */
/*|_.__/|_|   \__,_|_| |_|\___/    Feel free to copy and modify it */

/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 600;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
    "Fantasque Sans Mono:pixelsize=11:antialias=true:autohint=true",
	"Hack:pixelsize=11:antialias=true:autohint=true",
	"JoyPixels:pixelsize=8:antialias=true:autohint=true"
};
static const char *prompt      = NULL;      /* -p option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#ebdbb2", "#282828" },
	[SchemeSel] = { "#282828", "#fabd2f" },
	[SchemeSelHighlight] = { "#ebdbb2", "#1d2021" },
	[SchemeNormHighlight] = { "#AAAAAA", "#1d2021" },
	[SchemeOut] = { "#1d2021", "#00ffff" },
	[SchemeMid] = { "#d7d7d7", "#1f2026" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
static unsigned int lineheight = 22;         /* -h option; minimum height of a menu line     */

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 0;  /* -bw option; to add border width */
