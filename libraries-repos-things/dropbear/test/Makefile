srcdir=.

SHELL=bash

all: test

test: venv/bin/pytest fakekey
	(source ./venv/bin/activate; pytest --hostkey=fakekey --dbclient=../dbclient --dropbear=../dropbear $(srcdir) )

one: venv/bin/pytest fakekey
	(source ./venv/bin/activate; pytest --hostkey=fakekey --dbclient=../dbclient --dropbear=../dropbear $(srcdir) -k exit)

fakekey:
	../dropbearkey -t ecdsa -f $@

venv/bin/pytest: $(srcdir)/requirements.txt
	python3 -m venv init venv
	./venv/bin/pip install --upgrade pip
	./venv/bin/pip install -r $(srcdir)/requirements.txt

.PHONY: test
