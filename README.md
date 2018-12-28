# castbin
binaries for global use

set the files as allowed for executing:
chmod +x cast-reset
chmod +x cast-avrdude
chmod +x cast-fan

Add following in the rc.local for autostaring the FAN

# start the fan-control
sudo -i /usr/bin/cast-fan &


Now the scripts will work in the web-part.

Ruud, PE1MSZ
