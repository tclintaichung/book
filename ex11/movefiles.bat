for %%i in (*.py) DO (
@echo %%i
move %%i py\%%i
)
for %%i in (*.c) DO (
@echo %%i
move %%i c\%%i
)
for %%i in (*.cpp) DO (
@echo %%i
move %%i cpp\%%i
)
for %%i in (*.js) DO (
@echo %%i
move %%i js\%%i
)