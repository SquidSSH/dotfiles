/* speedie's dmenu configuration file
 * https://github.com/speedie-de/dmenu
 *
 * See 'man' page for more information
 *
 * NOTE: This build of dmenu does NOT prevent color emojis. Without patched libXft dmenu will CRASH!
 * To solve this, run 'make arch-libxftfix', 'make gentoo-libxftfix', or 'make libxftfix' to patch libXft!
 * Pywal support is also built in through the dmenu_run.
 * See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 0;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 0;
static int min_width = 500;
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = { "Terminus:size=10", "JoyPixels:size=10" };
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

static const unsigned int baralpha = 0xd0;
static const unsigned int borderalpha = OPAQUE;
static const unsigned int alphas[][3]      = {
	/*               fg      bg        border     */
	[SchemeNorm] = { OPAQUE, baralpha, borderalpha },
	[SchemeSel]  = { OPAQUE, baralpha, borderalpha },
};

static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#bbbbbb", "#222222" },
	[SchemeSel] = { "#2e3440", "#81a1c1" },
	[SchemeOut] = { "#000000", "#5e81ac" },
    [SchemeSelHighlight] = { "#ffc978", "#005577" },
    [SchemeNormHighlight] = { "#ffc978", "#222222" },
};
/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 2;
static unsigned int columns    = 10;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
