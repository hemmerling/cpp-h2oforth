@echo off
rem del *.bat
del /q *.exe 
del /q /s DEBUG
del /q /s .vs

del /q .watcom\*.err
del /q .watcom\*.exe
del /q .watcom\*.lk1
del /q .watcom\*.map
del /q .watcom\*.mk
del /q .watcom\*.mk1
del /q .watcom\*.obj
del /q .watcom\*.sym

rem del /q *.exe
del /q *.obj
del /q *.tds

rem del /q *.exe
del /q *.obj
del /q *.csm
del /q *.~de
del /q *.DSW
del /q *.mbt
del /q *.mrt
del /q *.r$p

rem del /q *.exe
del /q *.out
del /q *.ilc
del /q *.ild
del /q *.ilf
del /q *.ils

rem del /q *.exe
del /q *.map
del /q *.obj
