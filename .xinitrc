#!/bin/sh

#autostart
xrandr -s 1920x1080 &
~/.fehbg &
picom &
slstatus &
#~/.scripts/statusbar &

#starting dwm
exec dwm 
