**Build**

Run `apt install dpkg-dev`

Run `dpkg-checkbuilddeps`

Install any missing packages

Run `QUILT_PATCHES=debian/patches quilt push -a`

Run `dpkg-buildpackage -uc -us`

**Install**

Run `dpkg -i ../dealer_$(head -1 debian/changelog | sed 's/.*(\(.*\)).*/\1/')_*.deb`

**Post-Install**

Run `QUILT_PATCHES=debian/patches quilt pop -a`
