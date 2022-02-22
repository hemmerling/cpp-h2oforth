@echo off
cd ..
del /q *.exe 
del /q /s DEBUG
del /q /s .vs

del /q /s *.err
rem del /q /s *.exe
del /q /s *.lk1
del /q /s *.map
del /q /s *.mk
del /q /s *.mk1
del /q /s *.obj
del /q /s *.rex
del /q /s *.tgt
del /q /s *.sym

rem del /q *.exe
del /q /s *.obj
del /q /s *.tds

rem del /q *.exe
del /q /s *.obj
del /q /s *.csm
del /q /s *.~de
del /q /s *.DSW
del /q /s *.mbt
del /q /s *.mrt
del /q /s *.r$p

rem del /q /s *.exe
del /q /s *.out
del /q /s *.ilc
del /q /s *.ild
del /q /s *.ilf
del /q /s *.ils

rem del /q /s *.exe
del /q /s *.map
del /q /s *.obj

del /q /s *.hex

cd dev
