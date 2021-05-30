/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Iosevka:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#cccccc", "#282a36" },
	[SchemeSel] = { "#ffffff", "#74438f" },
	[SchemeSelHighlight] = { "#d7d7d7", "#000000" },
	[SchemeNormHighlight] = { "#a5bdf8", "#000000" },
	[SchemeOut] = { "#000000", "#00ffff" },
	[SchemeMid] = { "#d7d7d7", "#1f2026" },
							
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
static unsigned int lineheight = 20;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
