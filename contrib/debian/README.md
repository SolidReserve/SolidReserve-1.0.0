
Debian
====================
This directory contains files used to package solidreserved/solidreserve-qt
for Debian-based Linux systems. If you compile solidreserved/solidreserve-qt yourself, there are some useful files here.

## solidreserve: URI support ##


solidreserve-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install solidreserve-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your solidreserveqt binary to `/usr/bin`
and the `../../share/pixmaps/solidreserve128.png` to `/usr/share/pixmaps`

solidreserve-qt.protocol (KDE)

