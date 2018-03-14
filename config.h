/* user and group to drop privileges to */
static const char *user  = "alefir";
static const char *group = "users";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#202020",   /* during input */
	[FAILED] = "#300000",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
