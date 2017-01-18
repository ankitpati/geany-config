[build-menu]
FT_01_LB=Build
FT_01_CM=javac -Xlint:all "%f"
FT_01_WD=
FT_00_LB=Package
FT_00_CM=javac -Xlint:all -d . *.java
FT_00_WD=
EX_00_LB=_Execute
EX_00_CM=java "%e"
EX_00_WD=
EX_01_LB=Applet
EX_01_CM=appletviewer "%f"
EX_01_WD=
FT_02_LB=Stylise
FT_02_CM=astyle --style=java --indent=spaces=4 -p "%f"; rm "%f.orig"
FT_02_WD=
