[build-menu]
FT_01_LB=_Build
FT_01_CM=gcc -Wall -Wextra -o "%e" "%f" -lm
FT_01_WD=
FT_00_LB=_Compile
FT_00_CM=gcc -Wall -Wextra -c "%f"
FT_00_WD=
EX_01_LB=Stylise
EX_01_CM=indent -kr "%f"; astyle --style=kr --indent=spaces=4 -p "%f"; rm "%f.orig" "%f~"
EX_01_WD=
