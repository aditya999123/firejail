# This file is overwritten during software install. 
# Persistent customizations should go in a .local file.
include /etc/firejail/disable-passwdmgr.local

blacklist ${HOME}/.config/KeePass
blacklist ${HOME}/.config/keepass
blacklist ${HOME}/.config/keepassx
blacklist ${HOME}/.config/keepassxc
blacklist ${HOME}/.keepass
blacklist ${HOME}/.keepassx
blacklist ${HOME}/.keepassxc
blacklist ${HOME}/.lastpass
blacklist ${HOME}/.password-store
