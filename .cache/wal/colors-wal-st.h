const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#070808", /* black   */
  [1] = "#464E58", /* red     */
  [2] = "#4D5966", /* green   */
  [3] = "#5D6774", /* yellow  */
  [4] = "#A26D60", /* blue    */
  [5] = "#6D7985", /* magenta */
  [6] = "#79858F", /* cyan    */
  [7] = "#bfc3c6", /* white   */

  /* 8 bright colors */
  [8]  = "#85888a",  /* black   */
  [9]  = "#464E58",  /* red     */
  [10] = "#4D5966", /* green   */
  [11] = "#5D6774", /* yellow  */
  [12] = "#A26D60", /* blue    */
  [13] = "#6D7985", /* magenta */
  [14] = "#79858F", /* cyan    */
  [15] = "#bfc3c6", /* white   */

  /* special colors */
  [256] = "#070808", /* background */
  [257] = "#bfc3c6", /* foreground */
  [258] = "#bfc3c6",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
