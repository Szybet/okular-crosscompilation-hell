## Multi-Binary Compilation

To compile for systems without much space (floppy distributions etc), you can create a single binary. This will save disk space by avoiding repeated code between the various parts. If you are familiar with "busybox", it's the same principle.

To compile the multi-binary, first `make clean` (if you've compiled previously), then

```
make PROGRAMS="programs you want here" MULTI=1
```

To use the binary, symlink it from the desired executable:

```
ln -s dropbearmulti dropbear
ln -s dropbearmulti dbclient
```
etc.

Then execute as normal:

```
./dropbear <options here>
```
