static const char norm_fg[] = "#bfc3c6";
static const char norm_bg[] = "#070808";
static const char norm_border[] = "#85888a";

static const char sel_fg[] = "#bfc3c6";
static const char sel_bg[] = "#4D5966";
static const char sel_border[] = "#bfc3c6";

static const char urg_fg[] = "#bfc3c6";
static const char urg_bg[] = "#464E58";
static const char urg_border[] = "#464E58";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
