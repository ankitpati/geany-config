[build-menu]
FT_01_LB=_Build
FT_01_CM=g++ -std=c++11 -Wall -Wextra -Wpedantic -Wno-unused-result -O3 -o "%e" "%f" -lSDL_bgi -lSDL2 && strip "%e"
FT_01_WD=
EX_01_LB=Stylise
EX_01_CM=indent -kr "%f"; astyle --style=kr --indent=spaces=4 -p "%f"; rm "%f.orig" "%f~"
EX_01_WD=
FT_00_LB=_Compile
FT_00_CM=g++ -std=c++11 -Wall -Wextra -Wpedantic -Wno-unused-result -c "%f"
FT_00_WD=
