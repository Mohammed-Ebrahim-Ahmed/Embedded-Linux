#!/bin/bash


if grep -q FamilyName /etc/group; then
	echo "group exists"
else
	sudo groupadd FamilyName
	sudo adduser youName --force-badname
	usermod -aG FamilyName yourName
fi

echo $(grep FamilyName /etc/group)
echo $(grep youName /etc/passwd)






