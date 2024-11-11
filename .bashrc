#
# ~/.bashrc
#

# If not running interactively, don't do anything
[[ $- != *i* ]] && return

alias ls='ls --color=auto'
alias grep='grep --color=auto'
PS1='[\u@\h \W]\$ '

alias ..='cd ..'
alias pacman='sudo pacman'
alias neofetch='fastfetch'
alias v='nvim'
alias vi='nvim'
alias vim='nvim'

fastfetch
