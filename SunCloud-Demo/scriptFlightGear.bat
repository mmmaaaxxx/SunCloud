@echo En cas de probleme verifiez les variables SCI et FG_ROOT
@echo off
REM Ce script lance tout d'abord FlightGear avec les paramètres choisis puis
REM scicoslab, en lui faisant exécuter un second script. Ce dernier ouvre la simulation.

REM définition de variables indiquant les emplacements des fichiers
IF NOT DEFINED SCI (set SCI=C:/Users/Sun-Cloud/Programme/scicoslab-4.4.1)
IF NOT DEFINED FG_ROOT (set FG_ROOT=C:/Users/Sun-Cloud/Programme/FlightGear)


(start "" "%FG_ROOT%/bin/Win32/"fgfs.exe --fg-root="%FG_ROOT%/data"  ^
--fg-scenery="%FG_ROOT%/"data/Scenery;"%FG_ROOT%/"scenery;"%FG_ROOT%/terrasync" ^
--airport=LFPB --aircraft=CitationX   ^
--control=joystick --disable-random-objects  ^
--prop:/sim/rendering/random-vegetation=false  ^
--disable-ai-models  ^
--disable-ai-traffic  ^
--fdm=external  ^
--geometry=800x600 ^
--enable-real-weather-fetch  ^
--bpp=32  ^
--timeofday=morning  ^
--native-fdm=socket,in,100,,6001,udp) || (
 echo chemin de flight gear introuvable)

REM lancement de scicoslab
timeout 2
("%SCI%\bin\"cscilex.exe -f script.sce) || ( 
echo chemin de scicos introuvable
timeout 4 )